#include "hls_dsp.h"
#include <fstream>
#include <complex>
#include "hls_fft.h"

#include "pyr.h"

//#define IDEBUG



#if 0
const int Kset = 7;
const int limits[] = { 512, 512,256,128,64,32,16};
const int climits[] = { 0, 512, 1024,1280,1408,1472,1504};
const int llimits[] = { 9,9,8,7,6,5,4};
const int lshifts[] = { 1, 2, 3,3,3,5,9};
const int pshifts[] = { 8, 7, 5,4,3,0, -5};
#endif
// 12


const int Kset = 12;
const int limits[] = { 512, 512,
		               256, 256,
					   128, 128,
					   64, 64,
					   32, 32,
					   16 ,16};
const int fsizes[] = { 512, 512,
		               512, 256,
					   512, 128,
					   256, 64,
					   128, 32,
					   64, 16};
const int climits[] = { 0, 512,
		               1024, 1024,
					   1280, 1280,
					   1408, 1408,
					   1472, 1472,
					   1504, 1504};

const int llimits[] = { 9, 9,
		                9, 8,
						9, 7,
						8, 6,
						7, 5,
						6, 4};
const int lshifts[] = { 1, 2,
		                3, 3,
						3, 3,
						3, 3,
						5, 5,
						9, 9};
const int pshifts[] = { 8, 7,
		                6, 5,
						6, 4,
						5, 3,
						4, 0,
					   -3, -5};




template <typename T>
void pyrbuild_top(cmpxDataOut  fftTmp[512],
				  T   fftPyrFilOut[ 1520],
			      int width,
                  const int nL){
#pragma HLS INLINE
//#pragma HLS INTERFACE axis port=fftIn
//#pragma HLS INTERFACE axis port=pyrFilOut
#if 0
	int coefIdx= 0;
	//t_pyr_complex  fftTmp[1024];
	{
		coefIdx = 0;

#pragma HLS LOOP_UNROLL
		for(int l=0;l<7;l++) {
			int nlimit = limits[l];
			int half = nlimit >> 1;
			for(int i=0;i<nlimit;i++) {
	#pragma HLS PIPELINE
				int idx;
				T val ;
				if (i<half) idx = i;
				else  idx = 512- nlimit + i;

				val = fftTmp[idx] ;
				T outVal;
				outVal.real() = val.real() * consFilters[coefIdx];
				outVal.imag() = val.imag() * consFilters[coefIdx];
				//pyrFilOut.write(outVal);
				fftPyrFilOut[coefIdx] = outVal;
				coefIdx++;
			}
		}
	}
#else

	int l = 0;
	int i = 0;
	for(int coefIdx = 0;coefIdx < 1520; coefIdx++)
	{
#pragma HLS PIPELINE
		int nlimit = limits[l];
		int half = nlimit >> 1;
		int idx;
		T val ;
		if (i<half) idx = i;
		else  idx = 512- nlimit + i;
		val = fftTmp[idx] ;
		T outVal;

//		std::cout << i << " "<< idx << "  " << coefIdx << std::endl;

		outVal.real() = val.real() * consFilters[coefIdx];
		outVal.imag() = val.imag() * consFilters[coefIdx];
		fftPyrFilOut[coefIdx] = outVal;

		i++;
		l += (nlimit == i);
		i = (nlimit == i)?0:i;
	}

#endif
}


#define IMG_WIDTH    512


template< typename T>
void dummy_proc_fe(T imgIn[IMG_WIDTH], T out[FFT_LENGTH]){
#pragma HLS inline
	for(int i=0;i<512;i++)
		out[i] = imgIn[i];
}

template< typename T>
void dummy_proc2( T imgIn[IMG_WIDTH], T out[IMG_WIDTH]){
#pragma HLS inline
	for(int i=0;i<512;i++)
		out[i] = imgIn[i];
}


void pyrconstuct_top(
			  cmpxDataIn imgIn[IMG_WIDTH],
		      //hls::stream<t_image> &imgIn,
			  hls::stream<t_pyr_complex> &pyrFilOut,
		      const int nL
		      ) {

//#pragma HLS interface ap_fifo depth=1 port=ovflo
//#pragma HLS interface ap_fifo depth=512 port=imgIn
//#pragma HLS interface ap_fifo depth=1520 port=pyrFilOut
#pragma HLS interface axis depth=512 port=imgIn
#pragma HLS interface axis depth=1520 port=pyrFilOut


#pragma HLS data_pack variable=imgIn
//#pragma HLS data_pack variable=pyrFilOut
#pragma HLS dataflow

	cmpxDataIn imgInTmp[FFT_LENGTH];

	cmpxDataOut imgOutTmpFFTStream[FFT_LENGTH];
	cmpxDataOut imgOutTmpBlockRam[FFT_LENGTH];

	cmpxDataOut  fftPyrOut[1520];

	config_t fft_config;
	config2_t fft_config2;
	status_t fft_status;
	status2_t fft_status2;

#pragma HLS data_pack variable=fft_config
#pragma HLS data_pack variable=fft_config2

#pragma HLS STREAM variable=imgInTmp depth=512 dim=1
#pragma HLS STREAM variable=imgOutTmpFFTStream depth=512 dim=1
//#pragma HLS STREAM variable=fftPyrOut depth=1520 dim=1

	fft_config.setDir(true);
	//dummy_proc_fe(imgIn, imgInTmp);

	for(int i=0;i<512;i++) {
		//imgInTmp[i] = imgIn.read();
		imgInTmp[i] = imgIn[i];
	}

	hls::fft<config1>(imgInTmp, imgOutTmpFFTStream, &fft_status, &fft_config);
	//imgOutTmp
	dummy_proc2(imgOutTmpFFTStream, imgOutTmpBlockRam);

	pyrbuild_top(imgOutTmpBlockRam, fftPyrOut, 512, 512);

	//return;

#ifdef IDEBUG
	{
		FILE * fo = fopen("fftOut.txt", "wb");
		for(int i=0;i<512;i++) {
			fprintf(fo, "%.8f %.8f\n", imgOutTmpFFTStream[i].real().to_float(), imgOutTmpFFTStream[i].imag().to_float());
		}
		fclose(fo);
	}
	{
		FILE * fo = fopen("fftOutFilter.txt", "wb");
		for(int i=0;i<1520;i++) {
			fprintf(fo, "%.8f %.8f\n", fftPyrOut[i].real().to_float(), fftPyrOut[i].imag().to_float());
		}
	}
/*
	for(int i=0;i<512;i++)
		std::cout << "FFT Out " << i << " : " << imgOutTmp[i] << std::endl;

*/
#endif

	int l = 0;
	//LPH: for(int l=0;l<1;l++)

#pragma HLS DATAFLOW
		cmpxDataOut2  ifftPyrOut[FFT_LENGTH];
	#pragma HLS STREAM variable=ifftPyrOut depth=512 dim=1
		cmpxDataIn imgInTmp2[FFT_LENGTH];
	#pragma HLS STREAM variable=imgInTmp2 depth=512 dim=1
		int cidx = climits[l];
		int nlimit = limits[l];
		int fsize = fsizes[l];
		int lshift = lshifts[l];


		for(int i=0;i<fsize;i++) {
#pragma HLS pipeline
			cmpxDataIn val (0,0);
			if (i<nlimit) {
				val.real() = fftPyrOut[cidx + i ].real() >> lshift;
				val.imag() = fftPyrOut[cidx + i ].imag() >> lshift;
			}
			imgInTmp2[i] = val;
		}

		fft_config2.setDir(false);
		//fft_config2.setSch(0x2AB);
		fft_config2.setNfft(llimits[l]);
		hls::fft<config2>(imgInTmp2, ifftPyrOut, &fft_status2, &fft_config2);

#ifndef __SYNTHESIS__
	if (l==0)
	{
		FILE * fo = fopen("ifft_in.txt", "wb");
		for(int i=0;i<512;i++) {
			fprintf(fo, "%.8f %.8f\n", imgInTmp2[i].real().to_float(), imgInTmp2[i].imag().to_float());
		}
		fclose(fo);

		fo = fopen("ifft_out.txt", "wb");
		for(int i=0;i<512;i++) {
			fprintf(fo, "%.8f %.8f\n", ifftPyrOut[i].real().to_float(), ifftPyrOut[i].imag().to_float());
		}
		fclose(fo);
	}
#endif

		for(int i=0;i<fsize;i++) {
#pragma HLS pipeline
			t_pyr_complex val;
			val.real() = ifftPyrOut[i].real() >> pshifts[l];
			val.imag() = ifftPyrOut[i].imag() >> pshifts[l];
			pyrFilOut.write(val);
		}

}


template<typename T, typename T2>
void pyrbuildstr_top(hls::stream< T > &imDFT,
					 hls::stream< T2 >   imDFTFiltered[7]) {
#pragma HLS DATAFLOW
	//for(int i=0;i<7;i++){
	for(int idx=0;idx<512;idx++) {
		//imDFTFiltered[i]
#pragma HLS pipeline
		T val = imDFT.read();
		{
			T2 outVal;
			data_out_t  filteredVal = filtered0[idx];
			outVal.real() = (val.real() * filteredVal) >> 1;
			outVal.imag() = (val.imag() * filteredVal) >> 1;
			imDFTFiltered[0].write(outVal);
		}
		{
			T2 outVal;
			data_out_t  filteredVal = filtered1[idx];
			outVal.real() = (val.real() * filteredVal) >> 2;
			outVal.imag() = (val.imag() * filteredVal) >> 2;
			imDFTFiltered[1].write(outVal);
		}

		{
			T2 outVal;
			const short nlimit = 256;
			const short half   = nlimit >> 1;
			if (idx < half || idx >= 512 - half) {
				short kidx = (idx < half)? idx : ( idx - (512 - half)  );
				data_out_t  filteredVal = filtered2[kidx];
				outVal.real() = (val.real() * filteredVal) >> 3;
				outVal.imag() = (val.imag() * filteredVal) >> 3;
				imDFTFiltered[2].write(outVal);
			}
		}

		{
			T2 outVal;
			const short nlimit = 128;
			const short half   = nlimit >> 1;
			if (idx < half || idx >= 512 - half) {
				short kidx = (idx < half)? idx : ( idx - (512 - half)  );
				data_out_t  filteredVal = filtered3[kidx];
				outVal.real() = (val.real() * filteredVal) >> 3;
				outVal.imag() = (val.imag() * filteredVal) >> 3;
				imDFTFiltered[3].write(outVal);
			}
		}

		{
			T2 outVal;
			const short nlimit = 64;
			const short half   = nlimit >> 1;
			if (idx < half || idx >= 512 - half) {
				short kidx = (idx < half)? idx : ( idx - (512 - half)  );
				data_out_t  filteredVal = filtered4[kidx];
				outVal.real() = (val.real() * filteredVal) >> 3;
				outVal.imag() = (val.imag() * filteredVal) >> 3;
				imDFTFiltered[4].write(outVal);
			}
		}

		{
			T2 outVal;
			const short nlimit = 32;
			const short half   = nlimit >> 1;
			if (idx < half || idx >= 512 - half) {
				short kidx = (idx < half)? idx : ( idx - (512 - half)  );
				data_out_t  filteredVal = filtered5[kidx];
				outVal.real() = (val.real() * filteredVal) >> 5;
				outVal.imag() = (val.imag() * filteredVal) >> 5;
				imDFTFiltered[5].write(outVal);
			}
		}

		{
			T2 outVal;
			const short nlimit = 16;
			const short half   = nlimit >> 1;
			if (idx < half || idx >= 512 - half) {
				short kidx = (idx < half)? idx : ( idx - (512 - half)  );
				data_out_t  filteredVal = filtered6[kidx];
				outVal.real() = (val.real() * filteredVal) >> 9;
				outVal.imag() = (val.imag() * filteredVal) >> 9;
				imDFTFiltered[6].write(outVal);
			}
		}
	}
}

void pyrbuildstr_topexp( hls::stream< cmpxDataIn > &im,
					 	 hls::stream< cmpxDataOut >   imDFTFiltered[7]) {


#pragma HLS interface ap_fifo depth=512 port=im
//#pragma HLS interface axis depth=512 port=im

	#pragma HLS DATAFLOW

	config_t fft_config;
	status_t fft_status;
	fft_config.setDir(true);

	cmpxDataIn imgInTmp[512];
	cmpxDataOut imgOutTmpFFTStream[512];
	for(int i=0;i<512;i++)	imgInTmp[i] = im.read();


#pragma HLS STREAM variable=imgInTmp depth=512 dim=1
#pragma HLS STREAM variable=imgOutTmpFFTStream depth=512 dim=1

	hls::fft<config1>(imgInTmp, imgOutTmpFFTStream, &fft_status, &fft_config);

	hls::stream< cmpxDataOut > imDFT;

	for(int i=0;i<512;i++)
		imDFT.write(imgOutTmpFFTStream[i]);
	//pyrbuild_top(imgOutTmpBlockRam, fftPyrOut, 512, 512);
	pyrbuildstr_top( imDFT, imDFTFiltered);

}
