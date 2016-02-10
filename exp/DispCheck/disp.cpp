/*****************************************************************************
 *
 *     Author: Xilinx, Inc.
 *
 *     This text contains proprietary, confidential information of
 *     Xilinx, Inc. , is distributed by under license from Xilinx,
 *     Inc., and may be used, copied and/or disclosed only pursuant to
 *     the terms of a valid license agreement with Xilinx, Inc.
 *
 *     XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"
 *     AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND
 *     SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,
 *     OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,
 *     APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION
 *     THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,
 *     AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE
 *     FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY
 *     WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE
 *     IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR
 *     REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF
 *     INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *     FOR A PARTICULAR PURPOSE.
 *
 *     Xilinx products are not intended for use in life support appliances,
 *     devices, or systems. Use in such applications is expressly prohibited.
 *
 *     (c) Copyright 2014 Xilinx Inc.
 *     All rights reserved.
 *
 *****************************************************************************/

#include "cmpy_complex.h"
#include "hls_dsp.h"
#include "sincos.h"
#include "fxp_sqrt.h"

const int PhaseFormat = hls::CORDIC_FORMAT_RAD;
const int InputWidth = 16;
const int OutputWidth = 16;
const int RoundMode = hls::CORDIC_ROUND_TRUNCATE;

//  Complex *sig, Complex *sigRef, float *prealign, float *cmpR, float *cmpI,
//        int nL, int height, int nLExp, float factor, bool initialized, cudaStream_t stream



// The top-level function to synthesize
//
void atan2_top(const hls::atan2_input<InputWidth>::cartesian &x,
               hls::atan2_output<OutputWidth>::phase &atanX){

  // Call arctan function
  hls::atan2<PhaseFormat,InputWidth,OutputWidth,RoundMode>(x, atanX);
}

const int DataFormat = hls::CORDIC_FORMAT_USIG_FRAC;
//void sqrt_top(const hls::sqrt_input<InputWidth, DataFormat>::in &x,
//               hls::sqrt_output<OutputWidth, DataFormat>::out &sqrtx){


// The top-level function to synthesize
//
void sqrt_top2(const hls::sqrt_input<InputWidth, DataFormat>::in &x,
              hls::sqrt_output<OutputWidth, DataFormat>::out &sqrtX){
  // Call square root function
  hls::sqrt<DataFormat,InputWidth,OutputWidth,RoundMode>(x, sqrtX);
}

void sqrt_top( const t_output_scalar &x,
		             t_output_scalar  &xout) {
	const ap_ufixed< t_output_scalar::width, t_output_scalar::iwidth> xu = x;
	ap_ufixed< t_output_scalar::width, t_output_scalar::iwidth> xuout ;

//	hls::sqrt_input<InputWidth, DataFormat>::in  x_unsigned;
//	hls::sqrt_output<OutputWidth, DataFormat>::out  xout_unsigned;
	//x_unsigned.in = x;
	//sqrt_top2( x_unsigned, xout_unsigned);
	//xout = xout_unsigned.out;
	fxp_sqrt(xuout, xu);
	xout = xuout;
}

template <class A, class B>
void myatan2( const A &xin,
		            B &yout) {

	 hls::atan2_input<InputWidth>::cartesian  x;
	 x.cartesian.real() = xin.real();
     x.cartesian.imag() = xin.imag();
		  //x.  sigRef[i];
		  //refAtans[i]

     hls::atan2_output<OutputWidth>::phase phase;
	 atan2_top(x, phase);
//     printf("%f %f %f\n ", x.cartesian.real().to_float(),
//    		 	 	 	   x.cartesian.imag().to_float(),
//				           phase.phase.to_float());
	 yout = phase.phase;
}


void sincos(const t_output_scalar &t, t_output_complex &scout ) {
	hls::sincos_input<InputWidth>::in  x;
	hls::sincos_output<OutputWidth>::out  xout;

	x.phase = t;


	//	hls::cordic_base()
	hls::sincos<InputWidth,OutputWidth,RoundMode>( x, xout);
	scout = xout.cartesian;

}

template <class A>
A  myreaminder(A x, A y) {
	A xdy = x/y;
	const A roundC = 0.5f;

	return x - int(xdy + roundC) * y;

}

void cmpy_complex_top(const t_input_complex sig[NLEN],
		const t_input_complex sigRef[NLEN * 2],
		const  t_disp_scalar prealign[NLEN],

					  t_output_complex cmp[NLEN],
                      const int nL,
					  const int nLExp,
					  const int nLen,
					  const t_input_scalar factor){
#pragma HLS data_pack variable=sig
#pragma HLS data_pack variable=sigRef
#pragma HLS data_pack variable=prealign
#pragma HLS data_pack variable=cmp
#pragma HLS DATAFLOW
#pragma HLS INTERFACE axis port=sig
#pragma HLS INTERFACE axis port=sigRef
#pragma HLS INTERFACE axis port=prealign
#pragma HLS INTERFACE axis port=cmp
// assume that reduce is two
	const int reduce = 2;

	t_output_scalar refAtans[NLEN*2];
  for(int i=0;i<nL*2;i++) {
//	  hls::cmpy<ARCH>(a[i], b[i], p[i]);
#pragma HLS PIPELINE
	  myatan2(sigRef[i], refAtans[i] );

//	  t_output_scalar val = sigRef[i].real()*sigRef[i].real() +
//			  sigRef[i].imag() * sigRef[i].imag();
//	  sqrt_top(val, refMags[i]);


  }



  for(int x=0;x<nL;x++ ){
#pragma HLS PIPELINE
	  t_output_scalar angle;

	  t_disp_scalar pa = prealign[x] * factor;
	  //ap_int<13>  xRef = (x + pa) * reduce;
	  t_disp_scalar xRef = (x + pa) * reduce;
	  pa = xRef / reduce - x;

	  t_input_complex s = sig[x];
	  myatan2(s, angle );

//	  printf("%f %f\n", pa.to_float(), xRef.to_float());

	  t_output_scalar dRes = refAtans[ xRef] - angle;
	  //dRes = 2*remainderf(dRes / M_PI + 2, 2);  INCOMPLETED
	  const t_output_scalar  mypi = M_PI;
	  //dRes =   ( (dRes / mypi ) ) ;  // To be implement, INCOMPLETED
	  const t_output_scalar  val2 = 2;
	  t_output_scalar tmp = dRes/mypi + val2;
	  dRes = val2 * myreaminder(tmp, val2);

	  //printf("%f %f\n", pa.to_float(), dRes.to_float());

	  // sincospif(dRes - pa, &aIm, &aRe);
	  t_output_complex sincosOut;
	  dRes = dRes - pa;
	  sincos( dRes, sincosOut);
//	  printf("%f %f %f\n", dRes.to_float(),
//			  sincosOut.real().to_float(), sincosOut.imag().to_float());
	  // compute len
	  t_output_scalar val = s.real() * s.real() + s.imag() * s.imag();
	  t_output_scalar len;
	  sqrt_top(val, len);

//	  printf("%f %f\n", val.to_float(), len.to_float());
	  sincosOut.real() = sincosOut.real() * len;
	  sincosOut.imag() = sincosOut.imag() * len;
	  cmp[x] = sincosOut;
  }


} // end of function cmpy_complex_top


