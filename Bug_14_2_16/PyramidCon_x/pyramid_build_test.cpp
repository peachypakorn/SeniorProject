#include <stdio.h>
#include <string.h>
#include "pyr.h"

//#define USESTB

#ifdef USESTB

#define STB_IMAGE_IMPLEMENTATION
#include "../common/stb_image.h"

#define STB_IMAGE_RESIZE_IMPLEMENTATION
#include "../common/stb_image_resize.h"



#endif

int main() {
	int x,y,n;
	unsigned char *data = NULL;
//try with C to get data!!
#ifdef USESTB
	unsigned char * readImg = stbi_load("../../../../common/despicable-124_018.jpg", &x, &y, &n, 0);

	data = (unsigned char * )malloc( 1024 * 1080 * 3 * sizeof(unsigned char));

	stbir_resize_uint8(readImg, x, y, 0,
	                   data, 1024, 1080, 1024* 3, 3);
	x = 1024;

	FILE * fo = fopen("raw_img.dat","wb");
	fwrite( data, sizeof(char) , 3*1024*1080, fo);
	fclose(fo);
//	STBIRDEF int stbir_resize_uint8(     const unsigned char *input_pixels , int input_w , int input_h , int input_stride_in_bytes,
//	                                           unsigned char *output_pixels, int output_w, int output_h, int output_stride_in_bytes,
//	                                     int num_channels)
//	{
//	    return stbir__resize_arbitrary(NULL, input_pixels, input_w, input_h, input_stride_in_bytes,
//	        output_pixels, output_w, output_h, output_stride_in_bytes,
//	        0,0,1,1,NULL,num_channels,-1,0, STBIR_TYPE_UINT8, STBIR_FILTER_DEFAULT, STBIR_FILTER_DEFAULT,
//	        STBIR_EDGE_CLAMP, STBIR_EDGE_CLAMP, STBIR_COLORSPACE_LINEAR);
//	}
#else
#if 1
	x = 1024;
	y = 1080;
	n = 3;
	FILE * fi = fopen("raw_img.dat","rb");
	printf("F : %x\n", fi);
	data = (unsigned char*)malloc( x*y*n * sizeof(unsigned char));
	fread( data, sizeof(char) , n*x*y, fi);
	fclose(fi);
#endif


#endif



#define IMG_WIDTH    512

	cmpxDataIn   img[IMG_WIDTH];
	hls::stream<t_pyr_complex> pyrFilOut;


	for(int i=0;i<IMG_WIDTH;i++) {
		ap_fixed< 9,1> Val;
		unsigned char datIn = data[i*3 + x * 3 * 60];
		Val.range(8,0) = datIn;
		 img[i].real() = Val;
		img[i].imag() = 0;
	}
	pyrconstuct_top(img, pyrFilOut,  512);

	FILE * fo = fopen("pyr_out.txt", " wb");
	for(int i=0;i<512;i++)
	//for(int i=0;i<2992;i++)
	//while(!pyrFilOut.empty())
	{
		t_pyr_complex val = pyrFilOut.read();
		//std::cout << val << std::endl;
		fprintf(fo, "%.8f %.8f\n", val.real().to_float(), val.imag().to_float());
	}
	fclose(fo);
#if 0

	fo = fopen("pyr_out.bin", " wb");
	for(int j=0;j<1080;j++) {
		printf("%d\n", j);
		for(int c=0;c<3;c++) {
			for(int i=0;i<IMG_WIDTH;i++) {
				ap_fixed< 9,1> Val;
				unsigned char datIn = data[i*3 + x * 3 * j + c];
				Val.range(8,0) = datIn;
				img[i].real() = Val;
				img[i].imag() = 0;
			}
			pyrconstuct_top(img, pyrFilOut, 512);
			//for(int i=0;i<1520;i++) {
			float tmp_out[2992*2];
			for(int i=0;i<2992;i++) {
				t_pyr_complex val = pyrFilOut.read();
				tmp_out[i*2] = val.real().to_float();
				tmp_out[i*2+1] = val.imag().to_float();
				//std::cout << val << std::endl;
//				fprintf(fo, "%.8f %.8f\n", val.real().to_float(), val.imag().to_float());

			}
			fwrite( tmp_out, 2992*2 , sizeof(float), fo);
		}
	}
	fclose(fo);
#endif


	return 0;
}

