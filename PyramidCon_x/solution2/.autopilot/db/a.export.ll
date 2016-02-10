; ModuleID = 'F:/FPGA/PyramidCon_x/solution2/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@pyrconstuct_top_str = internal unnamed_addr constant [16 x i8] c"pyrconstuct_top\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@limits = internal unnamed_addr constant [12 x i10] [i10 -512, i10 -512, i10 256, i10 256, i10 128, i10 128, i10 64, i10 64, i10 32, i10 32, i10 16, i10 16]
@imgOutTmpFFTStream_OC_channel_s = internal unnamed_addr constant [27 x i8] c"imgOutTmpFFTStream.channel\00"
@imgInTmp_OC_channel_str = internal unnamed_addr constant [17 x i8] c"imgInTmp.channel\00"
@imgInTmp2_OC_channel_str = internal unnamed_addr constant [18 x i8] c"imgInTmp2.channel\00"
@ifftPyrOut_OC_channel_str = internal unnamed_addr constant [19 x i8] c"ifftPyrOut.channel\00"
@fft_config_OC_data_OC_V_OC_cha = internal unnamed_addr constant [26 x i8] c"fft_config.data.V.channel\00"
@fft_config2_OC_data_OC_V_OC_ch = internal unnamed_addr constant [27 x i8] c"fft_config2.data.V.channel\00"
@fftPyrOut_OC_M_real_OC_V_OC_c = internal unnamed_addr constant [28 x i8] c"fftPyrOut._M_real.V.channel\00"
@fftPyrOut_OC_M_real_OC_V_str = internal unnamed_addr constant [20 x i8] c"fftPyrOut._M_real.V\00"
@fftPyrOut_OC_M_imag_OC_V_OC_c = internal unnamed_addr constant [28 x i8] c"fftPyrOut._M_imag.V.channel\00"
@fftPyrOut_OC_M_imag_OC_V_str = internal unnamed_addr constant [20 x i8] c"fftPyrOut._M_imag.V\00"
@consFilters_V = internal unnamed_addr constant [1520 x i9] [i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 4, i9 8, i9 13, i9 17, i9 22, i9 26, i9 30, i9 35, i9 39, i9 43, i9 47, i9 51, i9 55, i9 59, i9 63, i9 67, i9 71, i9 75, i9 78, i9 82, i9 86, i9 90, i9 93, i9 97, i9 100, i9 104, i9 107, i9 110, i9 114, i9 117, i9 120, i9 124, i9 127, i9 130, i9 133, i9 136, i9 139, i9 142, i9 145, i9 147, i9 150, i9 153, i9 156, i9 158, i9 161, i9 164, i9 166, i9 169, i9 171, i9 173, i9 176, i9 178, i9 180, i9 183, i9 185, i9 187, i9 189, i9 191, i9 193, i9 195, i9 197, i9 199, i9 201, i9 203, i9 205, i9 207, i9 208, i9 210, i9 212, i9 213, i9 215, i9 216, i9 218, i9 219, i9 221, i9 222, i9 224, i9 225, i9 226, i9 228, i9 229, i9 230, i9 231, i9 232, i9 234, i9 235, i9 236, i9 237, i9 238, i9 239, i9 240, i9 241, i9 241, i9 242, i9 243, i9 244, i9 245, i9 245, i9 246, i9 247, i9 247, i9 248, i9 249, i9 249, i9 250, i9 250, i9 251, i9 251, i9 252, i9 252, i9 252, i9 253, i9 253, i9 253, i9 254, i9 254, i9 254, i9 254, i9 255, i9 255, i9 255, i9 255, i9 255, i9 255, i9 255, i9 255, i9 255, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 8, i9 17, i9 26, i9 35, i9 43, i9 51, i9 59, i9 67, i9 75, i9 82, i9 90, i9 97, i9 104, i9 110, i9 117, i9 124, i9 130, i9 136, i9 142, i9 147, i9 153, i9 158, i9 164, i9 169, i9 173, i9 178, i9 183, i9 187, i9 191, i9 195, i9 199, i9 203, i9 207, i9 210, i9 213, i9 216, i9 219, i9 222, i9 225, i9 228, i9 230, i9 232, i9 235, i9 237, i9 239, i9 241, i9 242, i9 244, i9 245, i9 247, i9 248, i9 249, i9 250, i9 251, i9 252, i9 253, i9 253, i9 254, i9 254, i9 255, i9 255, i9 255, i9 255, i9 -256, i9 255, i9 255, i9 255, i9 255, i9 255, i9 254, i9 254, i9 253, i9 252, i9 252, i9 251, i9 250, i9 249, i9 248, i9 247, i9 246, i9 245, i9 244, i9 243, i9 242, i9 240, i9 239, i9 238, i9 236, i9 235, i9 233, i9 232, i9 230, i9 229, i9 227, i9 225, i9 223, i9 222, i9 220, i9 218, i9 216, i9 214, i9 212, i9 210, i9 208, i9 206, i9 204, i9 202, i9 200, i9 198, i9 196, i9 194, i9 192, i9 189, i9 187, i9 185, i9 183, i9 181, i9 178, i9 176, i9 174, i9 171, i9 169, i9 167, i9 164, i9 162, i9 160, i9 157, i9 155, i9 152, i9 150, i9 148, i9 145, i9 143, i9 140, i9 138, i9 135, i9 133, i9 130, i9 128, i9 125, i9 123, i9 121, i9 118, i9 116, i9 113, i9 111, i9 108, i9 106, i9 103, i9 101, i9 98, i9 96, i9 93, i9 91, i9 88, i9 86, i9 83, i9 81, i9 78, i9 76, i9 73, i9 71, i9 68, i9 66, i9 63, i9 61, i9 59, i9 56, i9 54, i9 51, i9 49, i9 46, i9 44, i9 42, i9 39, i9 37, i9 34, i9 32, i9 30, i9 27, i9 25, i9 23, i9 20, i9 18, i9 16, i9 13, i9 11, i9 9, i9 6, i9 4, i9 2, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 17, i9 35, i9 51, i9 67, i9 82, i9 97, i9 110, i9 124, i9 136, i9 147, i9 158, i9 169, i9 178, i9 187, i9 195, i9 203, i9 210, i9 216, i9 222, i9 228, i9 232, i9 237, i9 241, i9 244, i9 247, i9 249, i9 251, i9 253, i9 254, i9 255, i9 255, i9 -256, i9 255, i9 255, i9 254, i9 253, i9 252, i9 250, i9 248, i9 246, i9 244, i9 242, i9 239, i9 236, i9 233, i9 230, i9 227, i9 223, i9 220, i9 216, i9 212, i9 208, i9 204, i9 200, i9 196, i9 192, i9 187, i9 183, i9 178, i9 174, i9 169, i9 164, i9 160, i9 155, i9 150, i9 145, i9 140, i9 135, i9 130, i9 125, i9 121, i9 116, i9 111, i9 106, i9 101, i9 96, i9 91, i9 86, i9 81, i9 76, i9 71, i9 66, i9 61, i9 56, i9 51, i9 46, i9 42, i9 37, i9 32, i9 27, i9 23, i9 18, i9 13, i9 9, i9 4, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 35, i9 67, i9 97, i9 124, i9 147, i9 169, i9 187, i9 203, i9 216, i9 228, i9 237, i9 244, i9 249, i9 253, i9 255, i9 -256, i9 255, i9 253, i9 250, i9 246, i9 242, i9 236, i9 230, i9 223, i9 216, i9 208, i9 200, i9 192, i9 183, i9 174, i9 164, i9 155, i9 145, i9 135, i9 125, i9 116, i9 106, i9 96, i9 86, i9 76, i9 66, i9 56, i9 46, i9 37, i9 27, i9 18, i9 9, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 67, i9 124, i9 169, i9 203, i9 228, i9 244, i9 253, i9 -256, i9 253, i9 246, i9 236, i9 223, i9 208, i9 192, i9 174, i9 155, i9 135, i9 116, i9 96, i9 76, i9 56, i9 37, i9 18, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 124, i9 203, i9 244, i9 -256, i9 246, i9 223, i9 192, i9 155, i9 116, i9 76, i9 37, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 0, i9 -256, i9 -256, i9 -256, i9 -256, i9 -256, i9 223, i9 155, i9 76, i9 0, i9 76, i9 155, i9 223, i9 -256, i9 -256, i9 -256, i9 -256]
@ap_fifo_str = internal unnamed_addr constant [8 x i8] c"ap_fifo\00"
@p_str311 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1
@p_str309 = private unnamed_addr constant [12 x i8] c"fixed_point\00", align 1
@p_str308 = private unnamed_addr constant [15 x i8] c"butterfly_type\00", align 1
@p_str307 = private unnamed_addr constant [18 x i8] c"complex_mult_type\00", align 1
@p_str306 = private unnamed_addr constant [22 x i8] c"memory_options_hybrid\00", align 1
@p_str305 = private unnamed_addr constant [60 x i8] c"number_of_stages_using_block_ram_for_data_and_phase_factors\00", align 1
@p_str304 = private unnamed_addr constant [23 x i8] c"memory_options_reorder\00", align 1
@p_str303 = private unnamed_addr constant [29 x i8] c"memory_options_phase_factors\00", align 1
@p_str302 = private unnamed_addr constant [20 x i8] c"memory_options_data\00", align 1
@p_str301 = private unnamed_addr constant [24 x i8] c"cyclic_prefix_insertion\00", align 1
@p_str300 = private unnamed_addr constant [16 x i8] c"output_ordering\00", align 1
@p_str299 = private unnamed_addr constant [12 x i8] c"nonrealtime\00", align 1
@p_str298 = private unnamed_addr constant [16 x i8] c"throttle_scheme\00", align 1
@p_str297 = private unnamed_addr constant [9 x i8] c"xk_index\00", align 1
@p_str296 = private unnamed_addr constant [6 x i8] c"ovflo\00", align 1
@p_str295 = private unnamed_addr constant [8 x i8] c"aresetn\00", align 1
@p_str294 = private unnamed_addr constant [5 x i8] c"true\00", align 1
@p_str293 = private unnamed_addr constant [7 x i8] c"aclken\00", align 1
@p_str292 = private unnamed_addr constant [15 x i8] c"rounding_modes\00", align 1
@p_str291 = private unnamed_addr constant [16 x i8] c"scaling_options\00", align 1
@p_str290 = private unnamed_addr constant [19 x i8] c"phase_factor_width\00", align 1
@p_str289 = private unnamed_addr constant [13 x i8] c"output_width\00", align 1
@p_str288 = private unnamed_addr constant [12 x i8] c"input_width\00", align 1
@p_str287 = private unnamed_addr constant [12 x i8] c"data_format\00", align 1
@p_str286 = private unnamed_addr constant [39 x i8] c"run_time_configurable_transform_length\00", align 1
@p_str285 = private unnamed_addr constant [23 x i8] c"implementation_options\00", align 1
@p_str284 = private unnamed_addr constant [17 x i8] c"transform_length\00", align 1
@p_str283 = private unnamed_addr constant [9 x i8] c"channels\00", align 1
@p_str282 = private unnamed_addr constant [16 x i8] c"parameterizable\00", align 1
@p_str281 = private unnamed_addr constant [11 x i8] c"Vivado_FFT\00", align 1
@p_str278 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1
@p_str277 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1
@p_str276 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1
@p_str275 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str274 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer

define void @pyrconstuct_top(i32* %imgIn, i40* %pyrFilOut_V, i32 %nL) {
codeRepl:
  %fft_config2_data_V = alloca i16, align 2
  %fft_config_data_V_channel = alloca i8, align 1
  call void (...)* @_ssdm_op_SpecDataflowPipeline(i32 -1, [1 x i8]* @p_str275) nounwind
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %imgIn), !map !7
  call void (...)* @_ssdm_op_SpecBitsMap(i40* %pyrFilOut_V), !map !16
  %imgOutTmpFFTStream_channel = alloca i48, align 8
  %empty = call i32 (...)* @_ssdm_op_SpecChannel([27 x i8]* @imgOutTmpFFTStream_OC_channel_s, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 512, i32 512, i48* %imgOutTmpFFTStream_channel, i48* %imgOutTmpFFTStream_channel)
  call void (...)* @_ssdm_op_SpecInterface(i48* %imgOutTmpFFTStream_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %imgInTmp2_channel = alloca i32, align 4
  %empty_23 = call i32 (...)* @_ssdm_op_SpecChannel([18 x i8]* @imgInTmp2_OC_channel_str, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 512, i32 512, i32* %imgInTmp2_channel, i32* %imgInTmp2_channel)
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgInTmp2_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %imgInTmp_channel = alloca i32, align 4
  %empty_24 = call i32 (...)* @_ssdm_op_SpecChannel([17 x i8]* @imgInTmp_OC_channel_str, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 512, i32 512, i32* %imgInTmp_channel, i32* %imgInTmp_channel)
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgInTmp_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %ifftPyrOut_channel = alloca i48, align 8
  %empty_25 = call i32 (...)* @_ssdm_op_SpecChannel([19 x i8]* @ifftPyrOut_OC_channel_str, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 512, i32 512, i48* %ifftPyrOut_channel, i48* %ifftPyrOut_channel)
  call void (...)* @_ssdm_op_SpecInterface(i48* %ifftPyrOut_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %nL), !map !25
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @pyrconstuct_top_str) nounwind
  %imgOutTmpBlockRam_M_real_V = alloca [512 x i24], align 4
  %imgOutTmpBlockRam_M_imag_V = alloca [512 x i24], align 4
  %fftPyrOut_M_real_V = alloca i24, align 4
  %empty_26 = call i32 (...)* @_ssdm_op_SpecChannel([28 x i8]* @fftPyrOut_OC_M_real_OC_V_OC_c, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 1520, i32 1520, i24* %fftPyrOut_M_real_V, i24* %fftPyrOut_M_real_V)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_real_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %fftPyrOut_M_imag_V = alloca i24, align 4
  %empty_27 = call i32 (...)* @_ssdm_op_SpecChannel([28 x i8]* @fftPyrOut_OC_M_imag_OC_V_OC_c, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 1520, i32 1520, i24* %fftPyrOut_M_imag_V, i24* %fftPyrOut_M_imag_V)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_imag_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %fft_status_data_V = alloca i8, align 1
  %fft_status2_data_V = alloca i8, align 1
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgIn, [5 x i8]* @p_str274, i32 0, i32 0, i32 0, i32 512, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecInterface(i40* %pyrFilOut_V, [5 x i8]* @p_str274, i32 0, i32 0, i32 0, i32 1520, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecDataflowPipeline(i32 -1, [1 x i8]* @p_str275) nounwind
  call fastcc void @pyrconstuct_top_Block_codeRepl26_proc(i8* %fft_config_data_V_channel)
  call fastcc void @pyrconstuct_top_Loop_1_proc(i32* %imgIn, i32* %imgInTmp_channel)
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgInTmp_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i48* %imgOutTmpFFTStream_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %fft_status_data_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %fft_config_data_V_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %empty_28 = call i32 (...)* @_ssdm_op_SpecChannel([26 x i8]* @fft_config_OC_data_OC_V_OC_cha, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 1, i32 0, i8* %fft_config_data_V_channel, i8* %fft_config_data_V_channel)
  call fastcc void @"fft<config1>"(i32* %imgInTmp_channel, i48* %imgOutTmpFFTStream_channel, i8* %fft_status_data_V, i8* %fft_config_data_V_channel)
  call fastcc void @pyrconstuct_top_Loop_2_proc(i48* %imgOutTmpFFTStream_channel, [512 x i24]* %imgOutTmpBlockRam_M_real_V, [512 x i24]* %imgOutTmpBlockRam_M_imag_V)
  call fastcc void @pyrconstuct_top_Loop_3_proc([512 x i24]* %imgOutTmpBlockRam_M_real_V, [512 x i24]* %imgOutTmpBlockRam_M_imag_V, i24* %fftPyrOut_M_real_V, i24* %fftPyrOut_M_imag_V)
  %empty_29 = call i32 (...)* @_ssdm_op_SpecChannel([20 x i8]* @fftPyrOut_OC_M_real_OC_V_str, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 1520, i32 1520, i24* %fftPyrOut_M_real_V, i24* %fftPyrOut_M_real_V)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_real_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %empty_30 = call i32 (...)* @_ssdm_op_SpecChannel([20 x i8]* @fftPyrOut_OC_M_imag_OC_V_str, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 1520, i32 1520, i24* %fftPyrOut_M_imag_V, i24* %fftPyrOut_M_imag_V)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_imag_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call fastcc void @pyrconstuct_top_Loop_4_proc(i24* %fftPyrOut_M_real_V, i24* %fftPyrOut_M_imag_V, i32* %imgInTmp2_channel)
  call fastcc void @pyrconstuct_top_Block__proc(i16* %fft_config2_data_V)
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgInTmp2_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i48* %ifftPyrOut_channel, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %fft_status2_data_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i16* %fft_config2_data_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %empty_31 = call i32 (...)* @_ssdm_op_SpecChannel([27 x i8]* @fft_config2_OC_data_OC_V_OC_ch, i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 1, i32 0, i16* %fft_config2_data_V, i16* %fft_config2_data_V)
  call fastcc void @"fft<config2>"(i32* %imgInTmp2_channel, i48* %ifftPyrOut_channel, i8* %fft_status2_data_V, i16* %fft_config2_data_V)
  call fastcc void @pyrconstuct_top_Loop_5_proc(i48* %ifftPyrOut_channel, i40* %pyrFilOut_V)
  ret void
}

declare i16 @llvm.part.set.i16.i9(i16, i9, i32, i32) nounwind readnone

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i48 @llvm.part.select.i48(i48, i32, i32) nounwind readnone

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i24 @llvm.part.select.i24(i24, i32, i32) nounwind readnone

declare i16 @llvm.part.select.i16(i16, i32, i32) nounwind readnone

declare i10 @llvm.part.select.i10(i10, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define internal fastcc void @"fft<config2>"(i32* %xn, i48* %xk, i8* %status_data_V, i16* %config_ch_data_V) {
_ZN3hls6ip_fft8config_tI7config2E6getSchEj.exit.i:
  call void (...)* @_ssdm_op_SpecIPCore(i32 0, [1 x i8]* @p_str275, [11 x i8]* @p_str281, [1 x i8]* @p_str275, i32 -1, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [16 x i8]* @p_str282)
  call void (...)* @_ssdm_op_SpecInterface(i16* %config_ch_data_V, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i8* %status_data_V, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32* %xn, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecInterface(i48* %xk, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecKeepValue([9 x i8]* @p_str283, i32 1, [17 x i8]* @p_str284, i32 512, [23 x i8]* @p_str285, i32 2, [39 x i8]* @p_str286, i32 1, [12 x i8]* @p_str287, [12 x i8]* @p_str309, [12 x i8]* @p_str288, i32 14, [13 x i8]* @p_str289, i32 24, [19 x i8]* @p_str290, i32 16, [16 x i8]* @p_str291, i32 1, [15 x i8]* @p_str292, i32 0, [7 x i8]* @p_str293, [5 x i8]* @p_str294, [8 x i8]* @p_str295, [5 x i8]* @p_str294, [6 x i8]* @p_str296, i32 1, [9 x i8]* @p_str297, i32 0, [16 x i8]* @p_str298, [12 x i8]* @p_str299, [16 x i8]* @p_str300, i32 1, [24 x i8]* @p_str301, i32 0, [20 x i8]* @p_str302, i32 0, [29 x i8]* @p_str303, i32 0, [23 x i8]* @p_str304, i32 0, [60 x i8]* @p_str305, i32 1, [22 x i8]* @p_str306, i32 0, [18 x i8]* @p_str307, i32 1, [15 x i8]* @p_str308, i32 0) nounwind
  %p_Val2_s = call i16 @_ssdm_op_Read.ap_fifo.i16P(i16* %config_ch_data_V)
  %p_Result_8 = call i1 @_ssdm_op_PartSelect.i1.i16.i32.i32(i16 %p_Val2_s, i32 8, i32 8)
  %tmp = call i1 @_ssdm_op_PartSelect.i1.i16.i32.i32(i16 %p_Val2_s, i32 9, i32 9)
  %tmp_1 = or i1 %tmp, %p_Result_8
  %tmp_2 = call i2 @_ssdm_op_BitConcatenate.i2.i1.i1(i1 %p_Result_8, i1 %tmp_1)
  %tmp_s = icmp eq i2 %tmp_2, 0
  br i1 %tmp_s, label %_ZN3hls8fft_coreI7config2Lc14ELc24E8ap_fixedILi16ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EES2_ILi24ELi11ELS3_5ELS4_3ELi0EELi512ELc1ELNS_6ip_fft4typeE0EEEvPSt7complexIT2_EPS9_IT3_EPNS7_8status_tIT_EEPNS7_8config_tISH_EE.exit, label %.preheader

.preheader:                                       ; preds = %_ZN3hls6ip_fft8config_tI7config2E6getSchEj.exit.i, %0
  %i_i = phi i32 [ %i, %0 ], [ 0, %_ZN3hls6ip_fft8config_tI7config2E6getSchEj.exit.i ]
  %exitcond = icmp eq i32 %i_i, 512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %i = add nsw i32 %i_i, 1
  br i1 %exitcond, label %_ZN3hls8fft_coreI7config2Lc14ELc24E8ap_fixedILi16ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EES2_ILi24ELi11ELS3_5ELS4_3ELi0EELi512ELc1ELNS_6ip_fft4typeE0EEEvPSt7complexIT2_EPS9_IT3_EPNS7_8status_tIT_EEPNS7_8config_tISH_EE.exit, label %0

; <label>:0                                       ; preds = %.preheader
  %xn_read = call i32 @_ssdm_op_Read.ap_fifo.volatile.i32P(i32* %xn)
  %tmp_4 = call i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32 %xn_read, i32 2, i32 15)
  %tmp_5 = sext i14 %tmp_4 to i24
  %tmp_7 = call i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32 %xn_read, i32 18, i32 31)
  %tmp_8 = call i38 @_ssdm_op_BitConcatenate.i38.i14.i24(i14 %tmp_7, i24 %tmp_5)
  %xk_M_imag_V_addr101516_part_s = sext i38 %tmp_8 to i48
  call void @_ssdm_op_Write.ap_fifo.volatile.i48P(i48* %xk, i48 %xk_M_imag_V_addr101516_part_s)
  br label %.preheader

_ZN3hls8fft_coreI7config2Lc14ELc24E8ap_fixedILi16ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EES2_ILi24ELi11ELS3_5ELS4_3ELi0EELi512ELc1ELNS_6ip_fft4typeE0EEEvPSt7complexIT2_EPS9_IT3_EPNS7_8status_tIT_EEPNS7_8config_tISH_EE.exit: ; preds = %.preheader, %_ZN3hls6ip_fft8config_tI7config2E6getSchEj.exit.i
  %p_s = zext i1 %p_Result_8 to i8
  call void @_ssdm_op_Write.ap_fifo.i8P(i8* %status_data_V, i8 %p_s)
  ret void
}

define internal fastcc void @"fft<config1>"(i32* %xn, i48* %xk, i8* %status_data_V, i8* %config_ch_data_V) {
_ZN3hls6ip_fft8config_tI7config1E6getSchEj.exit.i:
  call void (...)* @_ssdm_op_SpecIPCore(i32 0, [1 x i8]* @p_str275, [11 x i8]* @p_str281, [1 x i8]* @p_str275, i32 -1, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [16 x i8]* @p_str282)
  call void (...)* @_ssdm_op_SpecInterface(i8* %config_ch_data_V, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i8* %status_data_V, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32* %xn, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecInterface(i48* %xk, [8 x i8]* @p_str278, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecKeepValue([9 x i8]* @p_str283, i32 1, [17 x i8]* @p_str284, i32 512, [23 x i8]* @p_str285, i32 2, [39 x i8]* @p_str286, i32 0, [12 x i8]* @p_str287, [12 x i8]* @p_str309, [12 x i8]* @p_str288, i32 9, [13 x i8]* @p_str289, i32 24, [19 x i8]* @p_str290, i32 16, [16 x i8]* @p_str291, i32 1, [15 x i8]* @p_str292, i32 0, [7 x i8]* @p_str293, [5 x i8]* @p_str294, [8 x i8]* @p_str295, [5 x i8]* @p_str294, [6 x i8]* @p_str296, i32 1, [9 x i8]* @p_str297, i32 0, [16 x i8]* @p_str298, [12 x i8]* @p_str299, [16 x i8]* @p_str300, i32 1, [24 x i8]* @p_str301, i32 0, [20 x i8]* @p_str302, i32 0, [29 x i8]* @p_str303, i32 0, [23 x i8]* @p_str304, i32 0, [60 x i8]* @p_str305, i32 1, [22 x i8]* @p_str306, i32 0, [18 x i8]* @p_str307, i32 1, [15 x i8]* @p_str308, i32 0) nounwind
  %p_Val2_s = call i8 @_ssdm_op_Read.ap_fifo.i8P(i8* %config_ch_data_V)
  %p_Result_s = call i1 @_ssdm_op_PartSelect.i1.i8.i32.i32(i8 %p_Val2_s, i32 0, i32 0)
  %p_Result_s_32 = zext i1 %p_Result_s to i8
  %tmp = call i1 @_ssdm_op_PartSelect.i1.i8.i32.i32(i8 %p_Val2_s, i32 1, i32 1)
  %tmp_9 = or i1 %tmp, %p_Result_s
  %tmp_1 = call i2 @_ssdm_op_BitConcatenate.i2.i1.i1(i1 %p_Result_s, i1 %tmp_9)
  %tmp_s = icmp eq i2 %tmp_1, 0
  br i1 %tmp_s, label %_ZN3hls8fft_coreI7config1Lc9ELc24E8ap_fixedILi16ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EES2_ILi24ELi16ELS3_5ELS4_3ELi0EELi512ELc1ELNS_6ip_fft4typeE0EEEvPSt7complexIT2_EPS9_IT3_EPNS7_8status_tIT_EEPNS7_8config_tISH_EE.exit, label %.preheader

.preheader:                                       ; preds = %_ZN3hls6ip_fft8config_tI7config1E6getSchEj.exit.i, %0
  %i_i = phi i32 [ %i, %0 ], [ 0, %_ZN3hls6ip_fft8config_tI7config1E6getSchEj.exit.i ]
  %exitcond = icmp eq i32 %i_i, 512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %i = add nsw i32 %i_i, 1
  br i1 %exitcond, label %_ZN3hls8fft_coreI7config1Lc9ELc24E8ap_fixedILi16ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EES2_ILi24ELi16ELS3_5ELS4_3ELi0EELi512ELc1ELNS_6ip_fft4typeE0EEEvPSt7complexIT2_EPS9_IT3_EPNS7_8status_tIT_EEPNS7_8config_tISH_EE.exit, label %0

; <label>:0                                       ; preds = %.preheader
  %xn_read = call i32 @_ssdm_op_Read.ap_fifo.volatile.i32P(i32* %xn)
  %tmp_3 = call i9 @_ssdm_op_PartSelect.i9.i32.i32.i32(i32 %xn_read, i32 7, i32 15)
  %tmp_4 = sext i9 %tmp_3 to i24
  %tmp_6 = call i9 @_ssdm_op_PartSelect.i9.i32.i32.i32(i32 %xn_read, i32 23, i32 31)
  %tmp_7 = call i33 @_ssdm_op_BitConcatenate.i33.i9.i24(i9 %tmp_6, i24 %tmp_4)
  %xk_M_imag_V_addr101516_part_s = sext i33 %tmp_7 to i48
  call void @_ssdm_op_Write.ap_fifo.volatile.i48P(i48* %xk, i48 %xk_M_imag_V_addr101516_part_s)
  br label %.preheader

_ZN3hls8fft_coreI7config1Lc9ELc24E8ap_fixedILi16ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EES2_ILi24ELi16ELS3_5ELS4_3ELi0EELi512ELc1ELNS_6ip_fft4typeE0EEEvPSt7complexIT2_EPS9_IT3_EPNS7_8status_tIT_EEPNS7_8config_tISH_EE.exit: ; preds = %.preheader, %_ZN3hls6ip_fft8config_tI7config1E6getSchEj.exit.i
  call void @_ssdm_op_Write.ap_fifo.i8P(i8* %status_data_V, i8 %p_Result_s_32)
  ret void
}

define weak void @_ssdm_op_Write.axis.volatile.i40P(i40*, i40) {
entry:
  store i40 %1, i40* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.volatile.i48P(i48*, i48) {
entry:
  %empty = call i48 @_autotb_FifoWrite_i48(i48* %0, i48 %1)
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32*, i32) {
entry:
  %empty = call i32 @_autotb_FifoWrite_i32(i32* %0, i32 %1)
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.volatile.i24P(i24*, i24) {
entry:
  %empty = call i24 @_autotb_FifoWrite_i24(i24* %0, i24 %1)
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.i8P(i8*, i8) {
entry:
  %empty = call i8 @_autotb_FifoWrite_i8(i8* %0, i8 %1)
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.i16P(i16*, i16) {
entry:
  %empty = call i16 @_autotb_FifoWrite_i16(i16* %0, i16 %1)
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecKeepValue(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecIPCore(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecDataflowPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecChannel(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_Read.axis.volatile.i32P(i32*) {
entry:
  %empty = load i32* %0
  ret i32 %empty
}

define weak i48 @_ssdm_op_Read.ap_fifo.volatile.i48P(i48*) {
entry:
  %empty = call i48 @_autotb_FifoRead_i48(i48* %0)
  ret i48 %empty
}

define weak i32 @_ssdm_op_Read.ap_fifo.volatile.i32P(i32*) {
entry:
  %empty = call i32 @_autotb_FifoRead_i32(i32* %0)
  ret i32 %empty
}

define weak i24 @_ssdm_op_Read.ap_fifo.volatile.i24P(i24*) {
entry:
  %empty = call i24 @_autotb_FifoRead_i24(i24* %0)
  ret i24 %empty
}

define weak i8 @_ssdm_op_Read.ap_fifo.i8P(i8*) {
entry:
  %empty = call i8 @_autotb_FifoRead_i8(i8* %0)
  ret i8 %empty
}

define weak i16 @_ssdm_op_Read.ap_fifo.i16P(i16*) {
entry:
  %empty = call i16 @_autotb_FifoRead_i16(i16* %0)
  ret i16 %empty
}

define weak i16 @_ssdm_op_PartSet.i16.i16.i9.i32.i32(i16, i9, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.set.i16.i9(i16 %0, i9 %1, i32 %2, i32 %3)
  ret i16 %empty
}

define weak i9 @_ssdm_op_PartSelect.i9.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_33 = trunc i32 %empty to i9
  ret i9 %empty_33
}

define weak i9 @_ssdm_op_PartSelect.i9.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_34 = trunc i24 %empty to i9
  ret i9 %empty_34
}

define weak i9 @_ssdm_op_PartSelect.i9.i10.i32.i32(i10, i32, i32) nounwind readnone {
entry:
  %empty = call i10 @llvm.part.select.i10(i10 %0, i32 %1, i32 %2)
  %empty_35 = trunc i10 %empty to i9
  ret i9 %empty_35
}

define weak i24 @_ssdm_op_PartSelect.i24.i48.i32.i32(i48, i32, i32) nounwind readnone {
entry:
  %empty = call i48 @llvm.part.select.i48(i48 %0, i32 %1, i32 %2)
  %empty_36 = trunc i48 %empty to i24
  ret i24 %empty_36
}

define weak i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_37 = trunc i32 %empty to i24
  ret i24 %empty_37
}

define weak i14 @_ssdm_op_PartSelect.i14.i48.i32.i32(i48, i32, i32) nounwind readnone {
entry:
  %empty = call i48 @llvm.part.select.i48(i48 %0, i32 %1, i32 %2)
  %empty_38 = trunc i48 %empty to i14
  ret i14 %empty_38
}

define weak i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_39 = trunc i32 %empty to i14
  ret i14 %empty_39
}

define weak i1 @_ssdm_op_PartSelect.i1.i8.i32.i32(i8, i32, i32) nounwind readnone {
entry:
  %empty = call i8 @llvm.part.select.i8(i8 %0, i32 %1, i32 %2)
  %empty_40 = trunc i8 %empty to i1
  ret i1 %empty_40
}

define weak i1 @_ssdm_op_PartSelect.i1.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2)
  %empty_41 = trunc i16 %empty to i1
  ret i1 %empty_41
}

declare i16 @_ssdm_op_HSub(...)

declare i16 @_ssdm_op_HMul(...)

declare i16 @_ssdm_op_HDiv(...)

declare i16 @_ssdm_op_HAdd(...)

define weak i8 @_ssdm_op_BitSet.i8.i8.i32.i1(i8, i32, i1) nounwind readnone {
entry:
  %empty = icmp ne i1 %2, false
  %empty_42 = zext i1 %empty to i8
  %empty_43 = trunc i32 %1 to i8
  %empty_44 = shl i8 %empty_42, %empty_43
  %empty_45 = shl i8 1, %empty_43
  %empty_46 = xor i8 %empty_45, -1
  %empty_47 = and i8 %empty_46, %0
  %empty_48 = or i8 %empty_44, %empty_47
  ret i8 %empty_48
}

define weak i1 @_ssdm_op_BitSelect.i1.i48.i32(i48, i32) nounwind readnone {
entry:
  %empty = zext i32 %1 to i48
  %empty_49 = shl i48 1, %empty
  %empty_50 = and i48 %0, %empty_49
  %empty_51 = icmp ne i48 %empty_50, 0
  ret i1 %empty_51
}

define weak i38 @_ssdm_op_BitConcatenate.i38.i14.i24(i14, i24) nounwind readnone {
entry:
  %empty = zext i14 %0 to i38
  %empty_52 = zext i24 %1 to i38
  %empty_53 = shl i38 %empty, 24
  %empty_54 = or i38 %empty_53, %empty_52
  ret i38 %empty_54
}

define weak i33 @_ssdm_op_BitConcatenate.i33.i9.i24(i9, i24) nounwind readnone {
entry:
  %empty = zext i9 %0 to i33
  %empty_55 = zext i24 %1 to i33
  %empty_56 = shl i33 %empty, 24
  %empty_57 = or i33 %empty_56, %empty_55
  ret i33 %empty_57
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i9.i7.i9.i7(i9, i7, i9, i7) nounwind readnone {
entry:
  %empty = zext i9 %2 to i16
  %empty_58 = zext i7 %3 to i16
  %empty_59 = shl i16 %empty, 7
  %empty_60 = or i16 %empty_59, %empty_58
  %empty_61 = zext i7 %1 to i23
  %empty_62 = zext i16 %empty_60 to i23
  %empty_63 = shl i23 %empty_61, 16
  %empty_64 = or i23 %empty_63, %empty_62
  %empty_65 = zext i9 %0 to i32
  %empty_66 = zext i23 %empty_64 to i32
  %empty_67 = shl i32 %empty_65, 23
  %empty_68 = or i32 %empty_67, %empty_66
  ret i32 %empty_68
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i15.i17(i15, i17) nounwind readnone {
entry:
  %empty = zext i15 %0 to i32
  %empty_69 = zext i17 %1 to i32
  %empty_70 = shl i32 %empty, 17
  %empty_71 = or i32 %empty_70, %empty_69
  ret i32 %empty_71
}

define weak i2 @_ssdm_op_BitConcatenate.i2.i1.i1(i1, i1) nounwind readnone {
entry:
  %empty = zext i1 %0 to i2
  %empty_72 = zext i1 %1 to i2
  %empty_73 = shl i2 %empty, 1
  %empty_74 = or i2 %empty_73, %empty_72
  ret i2 %empty_74
}

declare i8 @_autotb_FifoWrite_i8(i8*, i8)

declare i48 @_autotb_FifoWrite_i48(i48*, i48)

declare i32 @_autotb_FifoWrite_i32(i32*, i32)

declare i24 @_autotb_FifoWrite_i24(i24*, i24)

declare i16 @_autotb_FifoWrite_i16(i16*, i16)

declare i8 @_autotb_FifoRead_i8(i8*)

declare i48 @_autotb_FifoRead_i48(i48*)

declare i32 @_autotb_FifoRead_i32(i32*)

declare i24 @_autotb_FifoRead_i24(i24*)

declare i16 @_autotb_FifoRead_i16(i16*)

declare void @_GLOBAL__I_a() nounwind

define internal fastcc void @pyrconstuct_top_Loop_5_proc(i48* %ifftPyrOut, i40* %pyrFilOut_V) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i40* %pyrFilOut_V, [5 x i8]* @p_str274, i32 0, i32 0, i32 0, i32 1520, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecInterface(i48* %ifftPyrOut, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %0

.exitStub:                                        ; preds = %0
  ret void

; <label>:0                                       ; preds = %"ap_fixed_base<24, 11, true, 5, 3, 0>.exit", %newFuncRoot
  %i7 = phi i10 [ 0, %newFuncRoot ], [ %i, %"ap_fixed_base<24, 11, true, 5, 3, 0>.exit" ]
  %exitcond = icmp eq i10 %i7, -512
  %i = add i10 %i7, 1
  br i1 %exitcond, label %.exitStub, label %"ap_fixed_base<24, 11, true, 5, 3, 0>.exit"

"ap_fixed_base<24, 11, true, 5, 3, 0>.exit":      ; preds = %0
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %tmp_s = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str277)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str275) nounwind
  %ifftPyrOut_read = call i48 @_ssdm_op_Read.ap_fifo.volatile.i48P(i48* %ifftPyrOut)
  %tmp_9 = call i14 @_ssdm_op_PartSelect.i14.i48.i32.i32(i48 %ifftPyrOut_read, i32 10, i32 23)
  %p_Val2_2_cast = sext i14 %tmp_9 to i15
  %tmp_3 = call i1 @_ssdm_op_BitSelect.i1.i48.i32(i48 %ifftPyrOut_read, i32 9)
  %tmp_32_cast = zext i1 %tmp_3 to i15
  %p_Val2_s = add i15 %tmp_32_cast, %p_Val2_2_cast
  %p_Val2_6_cast = sext i15 %p_Val2_s to i17
  %tmp_2 = call i14 @_ssdm_op_PartSelect.i14.i48.i32.i32(i48 %ifftPyrOut_read, i32 34, i32 47)
  %p_Val2_4_cast = sext i14 %tmp_2 to i15
  %tmp_4 = call i1 @_ssdm_op_BitSelect.i1.i48.i32(i48 %ifftPyrOut_read, i32 33)
  %tmp_35_cast = zext i1 %tmp_4 to i15
  %p_Val2_2 = add i15 %tmp_35_cast, %p_Val2_4_cast
  %tmp = call i32 @_ssdm_op_BitConcatenate.i32.i15.i17(i15 %p_Val2_2, i17 %p_Val2_6_cast)
  %tmp_1 = sext i32 %tmp to i34
  %cast = zext i34 %tmp_1 to i40
  call void @_ssdm_op_Write.axis.volatile.i40P(i40* %pyrFilOut_V, i40 %cast)
  %empty_75 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str277, i32 %tmp_s)
  br label %0
}

define internal fastcc void @pyrconstuct_top_Loop_4_proc(i24* %fftPyrOut_M_real_V, i24* %fftPyrOut_M_imag_V, i32* %imgInTmp2) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgInTmp2, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_imag_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_real_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %0

.exitStub:                                        ; preds = %0
  ret void

; <label>:0                                       ; preds = %._crit_edge, %newFuncRoot
  %i6 = phi i10 [ 0, %newFuncRoot ], [ %i, %._crit_edge ]
  %exitcond2 = icmp eq i10 %i6, -512
  %i = add i10 %i6, 1
  br i1 %exitcond2, label %.exitStub, label %._crit_edge

._crit_edge:                                      ; preds = %0
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %tmp_s = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str276)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str275) nounwind
  %fftPyrOut_M_real_V_read = call i24 @_ssdm_op_Read.ap_fifo.volatile.i24P(i24* %fftPyrOut_M_real_V)
  %tmp = call i9 @_ssdm_op_PartSelect.i9.i24.i32.i32(i24 %fftPyrOut_M_real_V_read, i32 1, i32 9)
  %fftPyrOut_M_imag_V_read = call i24 @_ssdm_op_Read.ap_fifo.volatile.i24P(i24* %fftPyrOut_M_imag_V)
  %tmp_2 = call i9 @_ssdm_op_PartSelect.i9.i24.i32.i32(i24 %fftPyrOut_M_imag_V_read, i32 1, i32 9)
  %imgInTmp2_1_addr_23940_part_se = call i32 @_ssdm_op_BitConcatenate.i32.i9.i7.i9.i7(i9 %tmp_2, i7 0, i9 %tmp, i7 0)
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %imgInTmp2, i32 %imgInTmp2_1_addr_23940_part_se)
  %empty_76 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str276, i32 %tmp_s)
  br label %0
}

define internal fastcc void @pyrconstuct_top_Loop_3_proc([512 x i24]* nocapture %imgOutTmpBlockRam_M_real_V, [512 x i24]* nocapture %imgOutTmpBlockRam_M_imag_V, i24* %fftPyrOut_M_real_V, i24* %fftPyrOut_M_imag_V) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_imag_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i24* %fftPyrOut_M_real_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit"

"pyrbuild_top<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit.exitStub": ; preds = %"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit"
  ret void

"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit": ; preds = %_ifconv, %newFuncRoot
  %l_0_i = phi i11 [ %l, %_ifconv ], [ 0, %newFuncRoot ]
  %idx = phi i32 [ %i_1, %_ifconv ], [ 0, %newFuncRoot ]
  %coefIdx_0_i = phi i11 [ %coefIdx, %_ifconv ], [ 0, %newFuncRoot ]
  %exitcond_i1 = icmp eq i11 %coefIdx_0_i, -528
  %coefIdx = add i11 %coefIdx_0_i, 1
  br i1 %exitcond_i1, label %"pyrbuild_top<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit.exitStub", label %_ifconv

_ifconv:                                          ; preds = %"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit"
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1520, i64 1520, i64 1520)
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str311)
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str275) nounwind
  %tmp_3 = zext i11 %l_0_i to i64
  %limits_addr = getelementptr [12 x i10]* @limits, i64 0, i64 %tmp_3
  %nlimit = load i10* %limits_addr, align 2
  %nlimit_cast = zext i10 %nlimit to i32
  %tmp_4 = call i9 @_ssdm_op_PartSelect.i9.i10.i32.i32(i10 %nlimit, i32 1, i32 9)
  %half = zext i9 %tmp_4 to i32
  %tmp_6 = icmp slt i32 %idx, %half
  %tmp_5 = add i32 %idx, 512
  %idx_1 = sub i32 %tmp_5, %nlimit_cast
  %idx_2 = select i1 %tmp_6, i32 %idx, i32 %idx_1
  %tmp_7 = sext i32 %idx_2 to i64
  %imgOutTmpBlockRam_M_real_V_ad = getelementptr [512 x i24]* %imgOutTmpBlockRam_M_real_V, i64 0, i64 %tmp_7
  %imgOutTmpBlockRam_M_real_V_lo = load i24* %imgOutTmpBlockRam_M_real_V_ad, align 8
  %OP1_V_cast = sext i24 %imgOutTmpBlockRam_M_real_V_lo to i32
  %imgOutTmpBlockRam_M_imag_V_ad = getelementptr [512 x i24]* %imgOutTmpBlockRam_M_imag_V, i64 0, i64 %tmp_7
  %imgOutTmpBlockRam_M_imag_V_lo = load i24* %imgOutTmpBlockRam_M_imag_V_ad, align 4
  %OP1_V_1_cast = sext i24 %imgOutTmpBlockRam_M_imag_V_lo to i32
  %tmp_8 = zext i11 %coefIdx_0_i to i64
  %consFilters_V_addr = getelementptr [1520 x i9]* @consFilters_V, i64 0, i64 %tmp_8
  %consFilters_V_load = load i9* %consFilters_V_addr, align 2
  %OP2_V_cast = zext i9 %consFilters_V_load to i32
  %p_Val2_1 = mul i32 %OP2_V_cast, %OP1_V_1_cast
  %p_Val2_s = mul i32 %OP2_V_cast, %OP1_V_cast
  %tmp_9 = call i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32 %p_Val2_s, i32 8, i32 31)
  %tmp_s = call i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32 %p_Val2_1, i32 8, i32 31)
  call void @_ssdm_op_Write.ap_fifo.volatile.i24P(i24* %fftPyrOut_M_real_V, i24 %tmp_9)
  call void @_ssdm_op_Write.ap_fifo.volatile.i24P(i24* %fftPyrOut_M_imag_V, i24 %tmp_s)
  %i = add nsw i32 %idx, 1
  %tmp_1 = icmp eq i32 %nlimit_cast, %i
  %tmp_18_cast = zext i1 %tmp_1 to i11
  %l = add i11 %l_0_i, %tmp_18_cast
  %i_1 = select i1 %tmp_1, i32 0, i32 %i
  %empty_77 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str311, i32 %tmp_2)
  br label %"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit"
}

define internal fastcc void @pyrconstuct_top_Loop_2_proc(i48* %imgOutTmpFFTStream, [512 x i24]* nocapture %imgOutTmpBlockRam_M_real_V, [512 x i24]* nocapture %imgOutTmpBlockRam_M_imag_V) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i48* %imgOutTmpFFTStream, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %0

"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit.exitStub": ; preds = %0
  ret void

; <label>:0                                       ; preds = %1, %newFuncRoot
  %i_0_i = phi i10 [ 0, %newFuncRoot ], [ %i, %1 ]
  %exitcond_i = icmp eq i10 %i_0_i, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %i = add i10 %i_0_i, 1
  br i1 %exitcond_i, label %"dummy_proc2<complex<ap_fixed<24, 16, 5, 3, 0> > >.exit.exitStub", label %1

; <label>:1                                       ; preds = %0
  %tmp_1 = zext i10 %i_0_i to i64
  %imgOutTmpFFTStream_read = call i48 @_ssdm_op_Read.ap_fifo.volatile.i48P(i48* %imgOutTmpFFTStream)
  %tmp = trunc i48 %imgOutTmpFFTStream_read to i24
  %imgOutTmpBlockRam_M_real_V_ad = getelementptr [512 x i24]* %imgOutTmpBlockRam_M_real_V, i64 0, i64 %tmp_1
  store i24 %tmp, i24* %imgOutTmpBlockRam_M_real_V_ad, align 8
  %imgOutTmpFFTStream_1_load_new = call i24 @_ssdm_op_PartSelect.i24.i48.i32.i32(i48 %imgOutTmpFFTStream_read, i32 24, i32 47)
  %imgOutTmpBlockRam_M_imag_V_ad = getelementptr [512 x i24]* %imgOutTmpBlockRam_M_imag_V, i64 0, i64 %tmp_1
  store i24 %imgOutTmpFFTStream_1_load_new, i24* %imgOutTmpBlockRam_M_imag_V_ad, align 4
  br label %0
}

define internal fastcc void @pyrconstuct_top_Loop_1_proc(i32* %imgIn, i32* %imgInTmp) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgIn, [5 x i8]* @p_str274, i32 0, i32 0, i32 0, i32 512, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275, [1 x i8]* @p_str275)
  call void (...)* @_ssdm_op_SpecInterface(i32* %imgInTmp, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %0

.exitStub:                                        ; preds = %0
  ret void

; <label>:0                                       ; preds = %1, %newFuncRoot
  %i = phi i10 [ 0, %newFuncRoot ], [ %i_1, %1 ]
  %exitcond1 = icmp eq i10 %i, -512
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 512, i64 512, i64 512)
  %i_1 = add i10 %i, 1
  br i1 %exitcond1, label %.exitStub, label %1

; <label>:1                                       ; preds = %0
  %imgIn_read = call i32 @_ssdm_op_Read.axis.volatile.i32P(i32* %imgIn)
  call void @_ssdm_op_Write.ap_fifo.volatile.i32P(i32* %imgInTmp, i32 %imgIn_read)
  br label %0
}

define internal fastcc void @pyrconstuct_top_Block_codeRepl26_proc(i8* %fft_config_data_V) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i8* %fft_config_data_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void @_ssdm_op_Write.ap_fifo.i8P(i8* %fft_config_data_V, i8 1)
  ret void
}

define internal fastcc void @pyrconstuct_top_Block__proc(i16* %fft_config2_data_V) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i16* %fft_config2_data_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void @_ssdm_op_Write.ap_fifo.i16P(i16* %fft_config2_data_V, i16 9)
  ret void
}

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0}

!0 = metadata !{metadata !1, [1 x i32]* @llvm_global_ctors_0}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 31, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"llvm.global_ctors.0", metadata !5, metadata !"", i32 0, i32 31}
!5 = metadata !{metadata !6}
!6 = metadata !{i32 0, i32 0, i32 1}
!7 = metadata !{metadata !8, metadata !13}
!8 = metadata !{i32 0, i32 15, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"imgIn._M_real.V", metadata !11, metadata !"int16", i32 0, i32 15}
!11 = metadata !{metadata !12}
!12 = metadata !{i32 0, i32 511, i32 1}
!13 = metadata !{i32 16, i32 31, metadata !14}
!14 = metadata !{metadata !15}
!15 = metadata !{metadata !"imgIn._M_imag.V", metadata !11, metadata !"int16", i32 0, i32 15}
!16 = metadata !{metadata !17, metadata !22}
!17 = metadata !{i32 0, i32 16, metadata !18}
!18 = metadata !{metadata !19}
!19 = metadata !{metadata !"pyrFilOut.V._M_real.V", metadata !20, metadata !"int17", i32 0, i32 16}
!20 = metadata !{metadata !21}
!21 = metadata !{i32 0, i32 1519, i32 1}
!22 = metadata !{i32 17, i32 33, metadata !23}
!23 = metadata !{metadata !24}
!24 = metadata !{metadata !"pyrFilOut.V._M_imag.V", metadata !20, metadata !"int17", i32 0, i32 16}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 31, metadata !27}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !"nL", metadata !29, metadata !"int", i32 0, i32 31}
!29 = metadata !{metadata !30}
!30 = metadata !{i32 0, i32 0, i32 0}
