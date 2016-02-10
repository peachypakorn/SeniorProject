#include "cmpy_complex_top_cordic_base.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cmpy_complex_top_cordic_base::thread_ap_reg_phiprechg_p_Val2_s_reg_126pp0_it1() {
    ap_reg_phiprechg_p_Val2_s_reg_126pp0_it1 = "XX";
}

void cmpy_complex_top_cordic_base::thread_ap_return() {
    ap_return = (!or_cond_fu_8212_p2.read()[0].is_01())? sc_lv<16>(): ((or_cond_fu_8212_p2.read()[0].to_bool())? tmp_133_fu_8252_p3.read(): tmp_452_fu_8260_p4.read());
}

void cmpy_complex_top_cordic_base::thread_ap_sig_bdd_627() {
    ap_sig_bdd_627 = (!esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_C) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_A) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_5) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_3) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_E) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_B) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_4) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_1) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_F) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_9) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_6) && !esl_seteq<1,4,4>(p_Result_6_fu_1213_p4.read(), ap_const_lv4_0));
}

void cmpy_complex_top_cordic_base::thread_ap_sig_bdd_637() {
    ap_sig_bdd_637 = (esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_C) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_A) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_5) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_3));
}

void cmpy_complex_top_cordic_base::thread_ap_sig_bdd_646() {
    ap_sig_bdd_646 = (esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_E) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_B) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_4) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_1));
}

void cmpy_complex_top_cordic_base::thread_ap_sig_bdd_655() {
    ap_sig_bdd_655 = (esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_F) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_9) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_6) || esl_seteq<1,4,4>(ap_reg_ppstg_p_Result_6_reg_8448_pp0_it8.read(), ap_const_lv4_0));
}

void cmpy_complex_top_cordic_base::thread_data_x_init_ext_V_cast_fu_163_p1() {
    data_x_init_ext_V_cast_fu_163_p1 = esl_zext<20,19>(r_V_fu_147_p3.read());
}

void cmpy_complex_top_cordic_base::thread_data_y_init_ext_V_cast_fu_167_p1() {
    data_y_init_ext_V_cast_fu_167_p1 = esl_zext<20,19>(r_V_1_fu_155_p3.read());
}

void cmpy_complex_top_cordic_base::thread_data_y_int_v_V_fu_1203_p4() {
    data_y_int_v_V_fu_1203_p4 = y_V_fu_1197_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_inp_x_min_y_ext_V_fu_171_p2() {
    inp_x_min_y_ext_V_fu_171_p2 = (!data_x_init_ext_V_cast_fu_163_p1.read().is_01() || !data_y_init_ext_V_cast_fu_167_p1.read().is_01())? sc_lv<20>(): (sc_biguint<20>(data_x_init_ext_V_cast_fu_163_p1.read()) - sc_biguint<20>(data_y_init_ext_V_cast_fu_167_p1.read()));
}

void cmpy_complex_top_cordic_base::thread_newSel1191_v_fu_8218_p3() {
    newSel1191_v_fu_8218_p3 = (!sel_tmp_fu_8194_p2.read()[0].is_01())? sc_lv<20>(): ((sel_tmp_fu_8194_p2.read()[0].to_bool())? tmp_fu_8186_p3.read(): ap_const_lv20_32440);
}

void cmpy_complex_top_cordic_base::thread_newSel1_fu_8226_p2() {
    newSel1_fu_8226_p2 = (!newSel1191_v_fu_8218_p3.read().is_01() || !p_Result_166_12_fu_8162_p4.read().is_01())? sc_lv<20>(): (sc_biguint<20>(newSel1191_v_fu_8218_p3.read()) + sc_biguint<20>(p_Result_166_12_fu_8162_p4.read()));
}

void cmpy_complex_top_cordic_base::thread_not_s_fu_1120_p2() {
    not_s_fu_1120_p2 = (tmp_3_reg_8293.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_or_cond_fu_8212_p2() {
    or_cond_fu_8212_p2 = (sel_tmp4_fu_8206_p2.read() | sel_tmp3_fu_8200_p2.read());
}

void cmpy_complex_top_cordic_base::thread_outp_phase_cr_V_fu_8172_p2() {
    outp_phase_cr_V_fu_8172_p2 = (!ap_const_lv20_CDBC0.is_01() || !p_Result_166_12_fu_8162_p4.read().is_01())? sc_lv<20>(): (sc_bigint<20>(ap_const_lv20_CDBC0) + sc_biguint<20>(p_Result_166_12_fu_8162_p4.read()));
}

void cmpy_complex_top_cordic_base::thread_p_Result_10_fu_4323_p4() {
    p_Result_10_fu_4323_p4 = z_V_fu_4317_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_10_fu_7636_p3() {
    p_Result_149_10_fu_7636_p3 = esl_concat<20,1>(p_Result_154_s_reg_9751.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_1_fu_2216_p3() {
    p_Result_149_1_fu_2216_p3 = esl_concat<20,1>(p_Result_4_reg_8481.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_2_fu_2510_p3() {
    p_Result_149_2_fu_2510_p3 = esl_concat<20,1>(p_Result_154_1_fu_2346_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_3_fu_3395_p3() {
    p_Result_149_3_fu_3395_p3 = esl_concat<20,1>(p_Result_154_2_reg_8772.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_4_fu_3690_p3() {
    p_Result_149_4_fu_3690_p3 = esl_concat<20,1>(p_Result_154_3_fu_3517_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_5_fu_4493_p3() {
    p_Result_149_5_fu_4493_p3 = esl_concat<20,1>(p_Result_154_4_reg_9024.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_6_fu_5266_p3() {
    p_Result_149_6_fu_5266_p3 = esl_concat<20,1>(p_Result_154_5_reg_9213.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_7_fu_5520_p3() {
    p_Result_149_7_fu_5520_p3 = esl_concat<20,1>(p_Result_154_6_fu_5376_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_8_fu_6282_p3() {
    p_Result_149_8_fu_6282_p3 = esl_concat<20,1>(p_Result_154_7_reg_9444.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_9_fu_6582_p3() {
    p_Result_149_9_fu_6582_p3 = esl_concat<20,1>(p_Result_154_8_fu_6384_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_149_s_fu_7114_p3() {
    p_Result_149_s_fu_7114_p3 = esl_concat<20,1>(p_Result_154_9_reg_9641.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_10_fu_7675_p22() {
    p_Result_153_10_fu_7675_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_436_fu_7671_p2.read(), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_436_fu_7671_p2.read()), tmp_435_fu_7667_p2.read()), tmp_434_fu_7663_p2.read()), tmp_433_fu_7659_p2.read()), tmp_432_fu_7655_p2.read()), tmp_431_fu_7651_p2.read()), tmp_430_fu_7647_p2.read()), tmp_429_fu_7643_p2.read()), tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_1_fu_2295_p22() {
    p_Result_153_1_fu_2295_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_132_fu_2291_p2.read(), tmp_132_fu_2291_p2.read()), tmp_132_fu_2291_p2.read()), tmp_131_fu_2287_p2.read()), tmp_130_fu_2283_p2.read()), tmp_129_fu_2279_p2.read()), tmp_128_fu_2275_p2.read()), tmp_127_fu_2271_p2.read()), tmp_126_fu_2267_p2.read()), tmp_125_fu_2263_p2.read()), tmp_124_fu_2259_p2.read()), tmp_123_fu_2255_p2.read()), tmp_122_fu_2251_p2.read()), tmp_121_fu_2247_p2.read()), tmp_120_fu_2243_p2.read()), tmp_119_fu_2239_p2.read()), tmp_118_fu_2235_p2.read()), tmp_117_fu_2231_p2.read()), tmp_116_fu_2227_p2.read()), tmp_115_fu_2223_p2.read()), tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_2_fu_2756_p22() {
    p_Result_153_2_fu_2756_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_171_fu_2750_p2.read(), tmp_171_fu_2750_p2.read()), tmp_171_fu_2750_p2.read()), tmp_171_fu_2750_p2.read()), tmp_170_fu_2736_p2.read()), tmp_169_fu_2722_p2.read()), tmp_168_fu_2708_p2.read()), tmp_167_fu_2694_p2.read()), tmp_166_fu_2680_p2.read()), tmp_165_fu_2666_p2.read()), tmp_164_fu_2652_p2.read()), tmp_163_fu_2638_p2.read()), tmp_162_fu_2624_p2.read()), tmp_161_fu_2610_p2.read()), tmp_160_fu_2596_p2.read()), tmp_159_fu_2582_p2.read()), tmp_158_fu_2568_p2.read()), tmp_157_fu_2554_p2.read()), tmp_156_fu_2540_p2.read()), tmp_155_fu_2526_p2.read()), tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_3_fu_3466_p22() {
    p_Result_153_3_fu_3466_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_210_fu_3462_p2.read(), tmp_210_fu_3462_p2.read()), tmp_210_fu_3462_p2.read()), tmp_210_fu_3462_p2.read()), tmp_210_fu_3462_p2.read()), tmp_209_fu_3458_p2.read()), tmp_208_fu_3454_p2.read()), tmp_207_fu_3450_p2.read()), tmp_206_fu_3446_p2.read()), tmp_205_fu_3442_p2.read()), tmp_204_fu_3438_p2.read()), tmp_203_fu_3434_p2.read()), tmp_202_fu_3430_p2.read()), tmp_201_fu_3426_p2.read()), tmp_200_fu_3422_p2.read()), tmp_199_fu_3418_p2.read()), tmp_198_fu_3414_p2.read()), tmp_197_fu_3410_p2.read()), tmp_196_fu_3406_p2.read()), tmp_195_fu_3402_p2.read()), tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_4_fu_3908_p22() {
    p_Result_153_4_fu_3908_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_249_fu_3902_p2.read(), tmp_249_fu_3902_p2.read()), tmp_249_fu_3902_p2.read()), tmp_249_fu_3902_p2.read()), tmp_249_fu_3902_p2.read()), tmp_249_fu_3902_p2.read()), tmp_248_fu_3888_p2.read()), tmp_247_fu_3874_p2.read()), tmp_246_fu_3860_p2.read()), tmp_245_fu_3846_p2.read()), tmp_244_fu_3832_p2.read()), tmp_243_fu_3818_p2.read()), tmp_242_fu_3804_p2.read()), tmp_241_fu_3790_p2.read()), tmp_240_fu_3776_p2.read()), tmp_239_fu_3762_p2.read()), tmp_238_fu_3748_p2.read()), tmp_237_fu_3734_p2.read()), tmp_236_fu_3720_p2.read()), tmp_235_fu_3706_p2.read()), tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_5_fu_4696_p22() {
    p_Result_153_5_fu_4696_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_288_fu_4690_p2.read(), tmp_288_fu_4690_p2.read()), tmp_288_fu_4690_p2.read()), tmp_288_fu_4690_p2.read()), tmp_288_fu_4690_p2.read()), tmp_288_fu_4690_p2.read()), tmp_288_fu_4690_p2.read()), tmp_287_fu_4676_p2.read()), tmp_286_fu_4662_p2.read()), tmp_285_fu_4648_p2.read()), tmp_284_fu_4634_p2.read()), tmp_283_fu_4620_p2.read()), tmp_282_fu_4606_p2.read()), tmp_281_fu_4592_p2.read()), tmp_280_fu_4578_p2.read()), tmp_279_fu_4564_p2.read()), tmp_278_fu_4550_p2.read()), tmp_277_fu_4536_p2.read()), tmp_276_fu_4522_p2.read()), tmp_275_fu_4508_p2.read()), tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_6_fu_5325_p22() {
    p_Result_153_6_fu_5325_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_327_fu_5321_p2.read(), tmp_327_fu_5321_p2.read()), tmp_327_fu_5321_p2.read()), tmp_327_fu_5321_p2.read()), tmp_327_fu_5321_p2.read()), tmp_327_fu_5321_p2.read()), tmp_327_fu_5321_p2.read()), tmp_327_fu_5321_p2.read()), tmp_326_fu_5317_p2.read()), tmp_325_fu_5313_p2.read()), tmp_324_fu_5309_p2.read()), tmp_323_fu_5305_p2.read()), tmp_322_fu_5301_p2.read()), tmp_321_fu_5297_p2.read()), tmp_320_fu_5293_p2.read()), tmp_319_fu_5289_p2.read()), tmp_318_fu_5285_p2.read()), tmp_317_fu_5281_p2.read()), tmp_316_fu_5277_p2.read()), tmp_315_fu_5273_p2.read()), tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_7_fu_5696_p22() {
    p_Result_153_7_fu_5696_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_356_fu_5690_p2.read(), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_356_fu_5690_p2.read()), tmp_355_fu_5676_p2.read()), tmp_354_fu_5662_p2.read()), tmp_353_fu_5648_p2.read()), tmp_352_fu_5634_p2.read()), tmp_351_fu_5620_p2.read()), tmp_350_fu_5606_p2.read()), tmp_349_fu_5592_p2.read()), tmp_348_fu_5578_p2.read()), tmp_347_fu_5564_p2.read()), tmp_346_fu_5550_p2.read()), tmp_345_fu_5536_p2.read()), tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_8_fu_6333_p22() {
    p_Result_153_8_fu_6333_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_379_fu_6329_p2.read(), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_379_fu_6329_p2.read()), tmp_378_fu_6325_p2.read()), tmp_377_fu_6321_p2.read()), tmp_376_fu_6317_p2.read()), tmp_375_fu_6313_p2.read()), tmp_374_fu_6309_p2.read()), tmp_373_fu_6305_p2.read()), tmp_372_fu_6301_p2.read()), tmp_371_fu_6297_p2.read()), tmp_370_fu_6293_p2.read()), tmp_369_fu_6289_p2.read()), tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_9_fu_6730_p22() {
    p_Result_153_9_fu_6730_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_400_fu_6724_p2.read(), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_400_fu_6724_p2.read()), tmp_399_fu_6710_p2.read()), tmp_398_fu_6696_p2.read()), tmp_397_fu_6682_p2.read()), tmp_396_fu_6668_p2.read()), tmp_395_fu_6654_p2.read()), tmp_394_fu_6640_p2.read()), tmp_393_fu_6626_p2.read()), tmp_392_fu_6612_p2.read()), tmp_391_fu_6598_p2.read()), tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_153_s_fu_7247_p22() {
    p_Result_153_s_fu_7247_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_419_fu_7241_p2.read(), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_419_fu_7241_p2.read()), tmp_418_fu_7227_p2.read()), tmp_417_fu_7213_p2.read()), tmp_416_fu_7199_p2.read()), tmp_415_fu_7185_p2.read()), tmp_414_fu_7171_p2.read()), tmp_413_fu_7157_p2.read()), tmp_412_fu_7143_p2.read()), tmp_411_fu_7129_p2.read()), tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_154_1_fu_2346_p4() {
    p_Result_154_1_fu_2346_p4 = x_V_1_1_fu_2340_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_154_3_fu_3517_p4() {
    p_Result_154_3_fu_3517_p4 = x_V_1_3_fu_3511_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_154_6_fu_5376_p4() {
    p_Result_154_6_fu_5376_p4 = x_V_1_6_fu_5370_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_154_8_fu_6384_p4() {
    p_Result_154_8_fu_6384_p4 = x_V_1_8_fu_6378_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_10_fu_7726_p3() {
    p_Result_155_10_fu_7726_p3 = esl_concat<20,1>(p_Result_160_s_reg_9756.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_11_fu_7888_p3() {
    p_Result_155_11_fu_7888_p3 = esl_concat<20,1>(p_Result_160_10_fu_7816_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_1_fu_2356_p3() {
    p_Result_155_1_fu_2356_p3 = esl_concat<20,1>(p_Result_8_reg_8486.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_2_fu_2818_p3() {
    p_Result_155_2_fu_2818_p3 = esl_concat<20,1>(p_Result_160_1_fu_2486_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_3_fu_3527_p3() {
    p_Result_155_3_fu_3527_p3 = esl_concat<20,1>(p_Result_160_2_reg_8777.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_4_fu_4431_p3() {
    p_Result_155_4_fu_4431_p3 = esl_concat<20,1>(p_Result_160_3_reg_8989.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_5_fu_4758_p3() {
    p_Result_155_5_fu_4758_p3 = esl_concat<20,1>(p_Result_160_4_fu_4469_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_6_fu_5386_p3() {
    p_Result_155_6_fu_5386_p3 = esl_concat<20,1>(p_Result_160_5_reg_9218.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_7_fu_5758_p3() {
    p_Result_155_7_fu_5758_p3 = esl_concat<20,1>(p_Result_160_6_fu_5496_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_8_fu_6394_p3() {
    p_Result_155_8_fu_6394_p3 = esl_concat<20,1>(p_Result_160_7_reg_9449.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_9_fu_7004_p3() {
    p_Result_155_9_fu_7004_p3 = esl_concat<20,1>(p_Result_160_8_reg_9601.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_155_s_fu_7309_p3() {
    p_Result_155_s_fu_7309_p3 = esl_concat<20,1>(p_Result_160_9_fu_7042_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_10_fu_7765_p22() {
    p_Result_159_10_fu_7765_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_444_fu_7761_p2.read(), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_444_fu_7761_p2.read()), tmp_443_fu_7757_p2.read()), tmp_442_fu_7753_p2.read()), tmp_441_fu_7749_p2.read()), tmp_440_fu_7745_p2.read()), tmp_439_fu_7741_p2.read()), tmp_438_fu_7737_p2.read()), tmp_437_fu_7733_p2.read()), rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_11_fu_7994_p22() {
    p_Result_159_11_fu_7994_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_451_fu_7988_p2.read(), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_451_fu_7988_p2.read()), tmp_450_fu_7974_p2.read()), tmp_449_fu_7960_p2.read()), tmp_448_fu_7946_p2.read()), tmp_447_fu_7932_p2.read()), tmp_446_fu_7918_p2.read()), tmp_445_fu_7904_p2.read()), rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_1_fu_2435_p22() {
    p_Result_159_1_fu_2435_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_152_fu_2431_p2.read(), tmp_152_fu_2431_p2.read()), tmp_152_fu_2431_p2.read()), tmp_151_fu_2427_p2.read()), tmp_150_fu_2423_p2.read()), tmp_149_fu_2419_p2.read()), tmp_148_fu_2415_p2.read()), tmp_147_fu_2411_p2.read()), tmp_146_fu_2407_p2.read()), tmp_145_fu_2403_p2.read()), tmp_144_fu_2399_p2.read()), tmp_143_fu_2395_p2.read()), tmp_142_fu_2391_p2.read()), tmp_141_fu_2387_p2.read()), tmp_140_fu_2383_p2.read()), tmp_139_fu_2379_p2.read()), tmp_138_fu_2375_p2.read()), tmp_137_fu_2371_p2.read()), tmp_136_fu_2367_p2.read()), tmp_135_fu_2363_p2.read()), rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_2_fu_3064_p22() {
    p_Result_159_2_fu_3064_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_191_fu_3058_p2.read(), tmp_191_fu_3058_p2.read()), tmp_191_fu_3058_p2.read()), tmp_191_fu_3058_p2.read()), tmp_190_fu_3044_p2.read()), tmp_189_fu_3030_p2.read()), tmp_188_fu_3016_p2.read()), tmp_187_fu_3002_p2.read()), tmp_186_fu_2988_p2.read()), tmp_185_fu_2974_p2.read()), tmp_184_fu_2960_p2.read()), tmp_183_fu_2946_p2.read()), tmp_182_fu_2932_p2.read()), tmp_181_fu_2918_p2.read()), tmp_180_fu_2904_p2.read()), tmp_179_fu_2890_p2.read()), tmp_178_fu_2876_p2.read()), tmp_177_fu_2862_p2.read()), tmp_176_fu_2848_p2.read()), tmp_175_fu_2834_p2.read()), rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_3_fu_3614_p22() {
    p_Result_159_3_fu_3614_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_230_fu_3609_p2.read(), tmp_230_fu_3609_p2.read()), tmp_230_fu_3609_p2.read()), tmp_230_fu_3609_p2.read()), tmp_230_fu_3609_p2.read()), tmp_229_fu_3604_p2.read()), tmp_228_fu_3599_p2.read()), tmp_227_fu_3594_p2.read()), tmp_226_fu_3589_p2.read()), tmp_225_fu_3584_p2.read()), tmp_224_fu_3579_p2.read()), tmp_223_fu_3574_p2.read()), tmp_222_fu_3569_p2.read()), tmp_221_fu_3564_p2.read()), tmp_220_fu_3559_p2.read()), tmp_219_fu_3554_p2.read()), tmp_218_fu_3549_p2.read()), tmp_217_fu_3544_p2.read()), tmp_216_fu_3539_p2.read()), tmp_215_fu_3534_p2.read()), rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_4_fu_4438_p22() {
    p_Result_159_4_fu_4438_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_269_reg_9099.read(), tmp_269_reg_9099.read()), tmp_269_reg_9099.read()), tmp_269_reg_9099.read()), tmp_269_reg_9099.read()), tmp_269_reg_9099.read()), tmp_268_reg_9094.read()), tmp_267_reg_9089.read()), tmp_266_reg_9084.read()), tmp_265_reg_9079.read()), tmp_264_reg_9074.read()), tmp_263_reg_9069.read()), tmp_262_reg_9064.read()), tmp_261_reg_9059.read()), tmp_260_reg_9054.read()), tmp_259_reg_9049.read()), tmp_258_reg_9044.read()), tmp_257_reg_9039.read()), tmp_256_reg_9034.read()), tmp_255_reg_9029.read()), rev3_reg_9007.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_5_fu_4836_p22() {
    p_Result_159_5_fu_4836_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_308_fu_4831_p2.read(), tmp_308_fu_4831_p2.read()), tmp_308_fu_4831_p2.read()), tmp_308_fu_4831_p2.read()), tmp_308_fu_4831_p2.read()), tmp_308_fu_4831_p2.read()), tmp_308_fu_4831_p2.read()), tmp_307_fu_4826_p2.read()), tmp_306_fu_4821_p2.read()), tmp_305_fu_4816_p2.read()), tmp_304_fu_4811_p2.read()), tmp_303_fu_4806_p2.read()), tmp_302_fu_4801_p2.read()), tmp_301_fu_4796_p2.read()), tmp_300_fu_4791_p2.read()), tmp_299_fu_4786_p2.read()), tmp_298_fu_4781_p2.read()), tmp_297_fu_4776_p2.read()), tmp_296_fu_4771_p2.read()), tmp_295_fu_4766_p2.read()), rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_6_fu_5445_p22() {
    p_Result_159_6_fu_5445_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_344_fu_5441_p2.read(), tmp_344_fu_5441_p2.read()), tmp_344_fu_5441_p2.read()), tmp_344_fu_5441_p2.read()), tmp_344_fu_5441_p2.read()), tmp_344_fu_5441_p2.read()), tmp_344_fu_5441_p2.read()), tmp_344_fu_5441_p2.read()), tmp_343_fu_5437_p2.read()), tmp_342_fu_5433_p2.read()), tmp_341_fu_5429_p2.read()), tmp_340_fu_5425_p2.read()), tmp_339_fu_5421_p2.read()), tmp_338_fu_5417_p2.read()), tmp_337_fu_5413_p2.read()), tmp_336_fu_5409_p2.read()), tmp_335_fu_5405_p2.read()), tmp_334_fu_5401_p2.read()), tmp_333_fu_5397_p2.read()), tmp_332_fu_5393_p2.read()), rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_7_fu_5934_p22() {
    p_Result_159_7_fu_5934_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_368_fu_5928_p2.read(), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_368_fu_5928_p2.read()), tmp_367_fu_5914_p2.read()), tmp_366_fu_5900_p2.read()), tmp_365_fu_5886_p2.read()), tmp_364_fu_5872_p2.read()), tmp_363_fu_5858_p2.read()), tmp_362_fu_5844_p2.read()), tmp_361_fu_5830_p2.read()), tmp_360_fu_5816_p2.read()), tmp_359_fu_5802_p2.read()), tmp_358_fu_5788_p2.read()), tmp_357_fu_5774_p2.read()), rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_8_fu_6456_p22() {
    p_Result_159_8_fu_6456_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_390_fu_6451_p2.read(), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_390_fu_6451_p2.read()), tmp_389_fu_6446_p2.read()), tmp_388_fu_6441_p2.read()), tmp_387_fu_6436_p2.read()), tmp_386_fu_6431_p2.read()), tmp_385_fu_6426_p2.read()), tmp_384_fu_6421_p2.read()), tmp_383_fu_6416_p2.read()), tmp_382_fu_6411_p2.read()), tmp_381_fu_6406_p2.read()), tmp_380_fu_6401_p2.read()), rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_9_fu_7011_p22() {
    p_Result_159_9_fu_7011_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_410_reg_9691.read(), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_410_reg_9691.read()), tmp_409_reg_9686.read()), tmp_408_reg_9681.read()), tmp_407_reg_9676.read()), tmp_406_reg_9671.read()), tmp_405_reg_9666.read()), tmp_404_reg_9661.read()), tmp_403_reg_9656.read()), tmp_402_reg_9651.read()), tmp_401_reg_9646.read()), rev10_reg_9635.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_159_s_fu_7362_p22() {
    p_Result_159_s_fu_7362_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_428_fu_7357_p2.read(), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_428_fu_7357_p2.read()), tmp_427_fu_7352_p2.read()), tmp_426_fu_7347_p2.read()), tmp_425_fu_7342_p2.read()), tmp_424_fu_7337_p2.read()), tmp_423_fu_7332_p2.read()), tmp_422_fu_7327_p2.read()), tmp_421_fu_7322_p2.read()), tmp_420_fu_7317_p2.read()), rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_160_10_fu_7816_p4() {
    p_Result_160_10_fu_7816_p4 = y_V_1_10_fu_7810_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_160_1_fu_2486_p4() {
    p_Result_160_1_fu_2486_p4 = y_V_1_1_fu_2480_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_160_4_fu_4469_p4() {
    p_Result_160_4_fu_4469_p4 = y_V_1_4_fu_4463_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_160_6_fu_5496_p4() {
    p_Result_160_6_fu_5496_p4 = y_V_1_6_fu_5490_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_160_9_fu_7042_p4() {
    p_Result_160_9_fu_7042_p4 = y_V_1_9_fu_7036_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_10_fu_7826_p3() {
    p_Result_161_10_fu_7826_p3 = esl_concat<20,1>(p_Result_166_s_reg_9761.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_11_fu_8046_p3() {
    p_Result_161_11_fu_8046_p3 = esl_concat<20,1>(p_Result_166_10_fu_7864_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_12_fu_8124_p3() {
    p_Result_161_12_fu_8124_p3 = esl_concat<20,1>(ap_reg_ppstg_p_Result_166_11_reg_9893_pp0_it9.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_1_fu_4333_p3() {
    p_Result_161_1_fu_4333_p3 = esl_concat<20,1>(p_Result_10_fu_4323_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_2_fu_4382_p3() {
    p_Result_161_2_fu_4382_p3 = esl_concat<20,1>(p_Result_166_1_fu_4372_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_3_fu_5120_p3() {
    p_Result_161_3_fu_5120_p3 = esl_concat<20,1>(p_Result_166_2_reg_9179.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_4_fu_5168_p3() {
    p_Result_161_4_fu_5168_p3 = esl_concat<20,1>(p_Result_166_3_fu_5158_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_5_fu_5217_p3() {
    p_Result_161_5_fu_5217_p3 = esl_concat<20,1>(p_Result_166_4_fu_5207_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_6_fu_6180_p3() {
    p_Result_161_6_fu_6180_p3 = esl_concat<20,1>(p_Result_166_5_reg_9410.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_7_fu_6228_p3() {
    p_Result_161_7_fu_6228_p3 = esl_concat<20,1>(p_Result_166_6_fu_6218_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_8_fu_6518_p3() {
    p_Result_161_8_fu_6518_p3 = esl_concat<20,1>(p_Result_166_7_fu_6267_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_9_fu_7052_p3() {
    p_Result_161_9_fu_7052_p3 = esl_concat<20,1>(p_Result_166_8_reg_9606.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_161_s_fu_7424_p3() {
    p_Result_161_s_fu_7424_p3 = esl_concat<20,1>(p_Result_166_9_fu_7090_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_10_fu_7833_p22() {
    p_Result_165_10_fu_7833_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_1030_reg_9766.read(), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), rev12_reg_9799.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read()), tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_11_fu_8054_p22() {
    p_Result_165_11_fu_8054_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_1047_fu_7874_p3.read(), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), rev13_fu_7882_p2.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read()), tmp_1047_fu_7874_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_12_fu_8131_p22() {
    p_Result_165_12_fu_8131_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read(), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), rev14_reg_8738.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read()), ap_reg_ppstg_tmp_1055_reg_9898_pp0_it9.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_1_fu_4341_p22() {
    p_Result_165_1_fu_4341_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read(), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_rev6_reg_8524_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read()), ap_reg_ppstg_tmp_750_reg_8491_pp0_it3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_2_fu_4390_p22() {
    p_Result_165_2_fu_4390_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read(), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_rev9_reg_8757_pp0_it3.read()), ap_reg_ppstg_tmp_787_reg_8743_pp0_it3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_3_fu_5127_p22() {
    p_Result_165_3_fu_5127_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read(), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read()), ap_reg_ppstg_rev2_reg_8974_pp0_it4.read()), ap_reg_ppstg_tmp_822_reg_8782_pp0_it4.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_4_fu_5176_p22() {
    p_Result_165_4_fu_5176_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read(), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_rev3_reg_9007_pp0_it4.read()), ap_reg_ppstg_tmp_855_reg_8994_pp0_it4.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_5_fu_5225_p22() {
    p_Result_165_5_fu_5225_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_886_reg_9184.read(), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), rev4_reg_9208.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read()), tmp_886_reg_9184.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_6_fu_6187_p22() {
    p_Result_165_6_fu_6187_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read(), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_rev5_reg_9261_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read()), ap_reg_ppstg_tmp_915_reg_9223_pp0_it5.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_7_fu_6236_p22() {
    p_Result_165_7_fu_6236_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_942_reg_9415.read(), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), rev7_reg_9439.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read()), tmp_942_reg_9415.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_8_fu_6526_p22() {
    p_Result_165_8_fu_6526_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_967_reg_9454.read(), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), rev8_fu_6277_p2.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read()), tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_9_fu_7059_p22() {
    p_Result_165_9_fu_7059_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_990_reg_9611.read(), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), rev10_reg_9635.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read()), tmp_990_reg_9611.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_165_s_fu_7432_p22() {
    p_Result_165_s_fu_7432_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_1011_fu_7100_p3.read(), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), rev11_fu_7108_p2.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read()), tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_10_fu_7864_p4() {
    p_Result_166_10_fu_7864_p4 = z_V_10_fu_7858_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_12_fu_8162_p4() {
    p_Result_166_12_fu_8162_p4 = z_V_12_fu_8156_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_1_fu_4372_p4() {
    p_Result_166_1_fu_4372_p4 = z_V_1_fu_4366_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_3_fu_5158_p4() {
    p_Result_166_3_fu_5158_p4 = z_V_3_fu_5152_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_4_fu_5207_p4() {
    p_Result_166_4_fu_5207_p4 = z_V_4_fu_5201_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_6_fu_6218_p4() {
    p_Result_166_6_fu_6218_p4 = z_V_6_fu_6212_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_7_fu_6267_p4() {
    p_Result_166_7_fu_6267_p4 = z_V_7_fu_6261_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_166_9_fu_7090_p4() {
    p_Result_166_9_fu_7090_p4 = z_V_9_fu_7084_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_1_fu_1172_p22() {
    p_Result_1_fu_1172_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(sel_tmp2_reg_8284.read(), tmp_74_reg_8443.read()), tmp_72_reg_8438.read()), tmp_70_reg_8433.read()), tmp_68_reg_8428.read()), tmp_66_reg_8423.read()), tmp_64_reg_8418.read()), tmp_62_reg_8413.read()), tmp_60_reg_8408.read()), tmp_58_reg_8403.read()), tmp_56_reg_8398.read()), tmp_54_reg_8393.read()), tmp_52_reg_8388.read()), tmp_50_reg_8383.read()), tmp_48_reg_8378.read()), tmp_46_reg_8373.read()), sel_tmp2_reg_8284.read()), sel_tmp2_reg_8284.read()), sel_tmp2_reg_8284.read()), sel_tmp2_reg_8284.read()), tmp_680_reg_8278.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_2_fu_1162_p4() {
    p_Result_2_fu_1162_p4 = x_V_fu_1156_p2.read().range(20, 1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_3_fu_1511_p22() {
    p_Result_3_fu_1511_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_93_fu_1505_p2.read(), tmp_93_fu_1505_p2.read()), tmp_92_fu_1491_p2.read()), tmp_91_fu_1477_p2.read()), tmp_90_fu_1463_p2.read()), tmp_89_fu_1449_p2.read()), tmp_88_fu_1435_p2.read()), tmp_87_fu_1421_p2.read()), tmp_86_fu_1407_p2.read()), tmp_85_fu_1393_p2.read()), tmp_84_fu_1379_p2.read()), tmp_83_fu_1365_p2.read()), tmp_82_fu_1351_p2.read()), tmp_81_fu_1337_p2.read()), tmp_80_fu_1323_p2.read()), tmp_79_fu_1309_p2.read()), tmp_78_fu_1295_p2.read()), tmp_77_fu_1281_p2.read()), tmp_76_fu_1267_p2.read()), tmp_75_fu_1253_p2.read()), tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_5_fu_1573_p3() {
    p_Result_5_fu_1573_p3 = esl_concat<20,1>(data_y_int_v_V_fu_1203_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_6_fu_1213_p4() {
    p_Result_6_fu_1213_p4 = esl_concat<3,1>(esl_concat<2,1>(ap_const_lv2_3, tmp_5_fu_1115_p2.read()), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_7_fu_1847_p22() {
    p_Result_7_fu_1847_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_113_fu_1841_p2.read(), tmp_113_fu_1841_p2.read()), tmp_112_fu_1827_p2.read()), tmp_111_fu_1813_p2.read()), tmp_110_fu_1799_p2.read()), tmp_109_fu_1785_p2.read()), tmp_108_fu_1771_p2.read()), tmp_107_fu_1757_p2.read()), tmp_106_fu_1743_p2.read()), tmp_105_fu_1729_p2.read()), tmp_104_fu_1715_p2.read()), tmp_103_fu_1701_p2.read()), tmp_102_fu_1687_p2.read()), tmp_101_fu_1673_p2.read()), tmp_100_fu_1659_p2.read()), tmp_99_fu_1645_p2.read()), tmp_98_fu_1631_p2.read()), tmp_97_fu_1617_p2.read()), tmp_96_fu_1603_p2.read()), tmp_95_fu_1589_p2.read()), rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_9_fu_4292_p22() {
    p_Result_9_fu_4292_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read(), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_rev_reg_8467_pp0_it3.read()), ap_reg_ppstg_tmp_711_reg_8452_pp0_it3.read());
}

void cmpy_complex_top_cordic_base::thread_p_Result_s_24_fu_1237_p3() {
    p_Result_s_24_fu_1237_p3 = esl_concat<20,1>(p_Result_2_fu_1162_p4.read(), ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_p_Result_s_fu_1125_p22() {
    p_Result_s_fu_1125_p22 = esl_concat<20,1>(esl_concat<19,1>(esl_concat<18,1>(esl_concat<17,1>(esl_concat<16,1>(esl_concat<15,1>(esl_concat<14,1>(esl_concat<13,1>(esl_concat<12,1>(esl_concat<11,1>(esl_concat<10,1>(esl_concat<9,1>(esl_concat<8,1>(esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(not_s_fu_1120_p2.read(), tmp_43_reg_8368.read()), tmp_41_reg_8363.read()), tmp_39_reg_8358.read()), tmp_37_reg_8353.read()), tmp_35_reg_8348.read()), tmp_33_reg_8343.read()), tmp_31_reg_8338.read()), tmp_29_reg_8333.read()), tmp_23_reg_8328.read()), tmp_21_reg_8323.read()), tmp_19_reg_8318.read()), tmp_17_reg_8313.read()), tmp_15_reg_8308.read()), tmp_13_reg_8303.read()), tmp_11_reg_8298.read()), not_s_fu_1120_p2.read()), not_s_fu_1120_p2.read()), not_s_fu_1120_p2.read()), not_s_fu_1120_p2.read()), ap_const_lv1_0);
}

void cmpy_complex_top_cordic_base::thread_r_V_1_fu_155_p3() {
    r_V_1_fu_155_p3 = esl_concat<15,4>(inputData_cartesian_M_imag_V_read.read(), ap_const_lv4_0);
}

void cmpy_complex_top_cordic_base::thread_r_V_fu_147_p3() {
    r_V_fu_147_p3 = esl_concat<15,4>(inputData_cartesian_M_real_V_read.read(), ap_const_lv4_0);
}

void cmpy_complex_top_cordic_base::thread_rev10_fu_6576_p2() {
    rev10_fu_6576_p2 = (tmp_990_fu_6568_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev11_fu_7108_p2() {
    rev11_fu_7108_p2 = (tmp_1011_fu_7100_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev12_fu_7502_p2() {
    rev12_fu_7502_p2 = (tmp_1030_fu_7494_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev13_fu_7882_p2() {
    rev13_fu_7882_p2 = (tmp_1047_fu_7874_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev14_fu_2211_p2() {
    rev14_fu_2211_p2 = (tmp_1055_reg_9898.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev2_fu_3390_p2() {
    rev2_fu_3390_p2 = (tmp_822_reg_8782.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev3_fu_3684_p2() {
    rev3_fu_3684_p2 = (tmp_855_fu_3676_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev4_fu_4487_p2() {
    rev4_fu_4487_p2 = (tmp_886_fu_4479_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev5_fu_4906_p2() {
    rev5_fu_4906_p2 = (tmp_915_fu_4898_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev6_fu_1917_p2() {
    rev6_fu_1917_p2 = (tmp_750_fu_1909_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev7_fu_5514_p2() {
    rev7_fu_5514_p2 = (tmp_942_fu_5506_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev8_fu_6277_p2() {
    rev8_fu_6277_p2 = (tmp_967_reg_9454.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev9_fu_2504_p2() {
    rev9_fu_2504_p2 = (tmp_787_fu_2496_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_rev_fu_1231_p2() {
    rev_fu_1231_p2 = (tmp_711_fu_1223_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_sel_tmp1_fu_205_p2() {
    sel_tmp1_fu_205_p2 = (tmp_1_fu_193_p2.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_sel_tmp2_fu_211_p2() {
    sel_tmp2_fu_211_p2 = (tmp_2_fu_199_p2.read() & sel_tmp1_fu_205_p2.read());
}

void cmpy_complex_top_cordic_base::thread_sel_tmp3_fu_8200_p2() {
    sel_tmp3_fu_8200_p2 = (!ap_reg_phiprechg_p_Val2_s_reg_126pp0_it10.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_phiprechg_p_Val2_s_reg_126pp0_it10.read() == ap_const_lv2_2);
}

void cmpy_complex_top_cordic_base::thread_sel_tmp4_fu_8206_p2() {
    sel_tmp4_fu_8206_p2 = (!ap_reg_phiprechg_p_Val2_s_reg_126pp0_it10.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_phiprechg_p_Val2_s_reg_126pp0_it10.read() == ap_const_lv2_3);
}

void cmpy_complex_top_cordic_base::thread_sel_tmp_fu_8194_p2() {
    sel_tmp_fu_8194_p2 = (!ap_reg_phiprechg_p_Val2_s_reg_126pp0_it10.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_phiprechg_p_Val2_s_reg_126pp0_it10.read() == ap_const_lv2_0);
}

void cmpy_complex_top_cordic_base::thread_tmp_1000_fu_6716_p3() {
    tmp_1000_fu_6716_p3 = y_V_1_8_fu_6502_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_1001_fu_6792_p3() {
    tmp_1001_fu_6792_p3 = x_V_1_8_fu_6378_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_1002_fu_6806_p3() {
    tmp_1002_fu_6806_p3 = x_V_1_8_fu_6378_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_1003_fu_6820_p3() {
    tmp_1003_fu_6820_p3 = x_V_1_8_fu_6378_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_1004_fu_6834_p3() {
    tmp_1004_fu_6834_p3 = x_V_1_8_fu_6378_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_1005_fu_6848_p3() {
    tmp_1005_fu_6848_p3 = x_V_1_8_fu_6378_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_1006_fu_6862_p3() {
    tmp_1006_fu_6862_p3 = x_V_1_8_fu_6378_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_1007_fu_6876_p3() {
    tmp_1007_fu_6876_p3 = x_V_1_8_fu_6378_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_1008_fu_6890_p3() {
    tmp_1008_fu_6890_p3 = x_V_1_8_fu_6378_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_1009_fu_6904_p3() {
    tmp_1009_fu_6904_p3 = x_V_1_8_fu_6378_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_100_fu_1659_p2() {
    tmp_100_fu_1659_p2 = (tmp_736_fu_1651_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_1010_fu_6918_p3() {
    tmp_1010_fu_6918_p3 = x_V_1_8_fu_6378_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_1011_fu_7100_p3() {
    tmp_1011_fu_7100_p3 = y_V_1_9_fu_7036_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_1012_fu_7121_p3() {
    tmp_1012_fu_7121_p3 = y_V_1_9_fu_7036_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_1013_fu_7135_p3() {
    tmp_1013_fu_7135_p3 = y_V_1_9_fu_7036_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_1014_fu_7149_p3() {
    tmp_1014_fu_7149_p3 = y_V_1_9_fu_7036_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_1015_fu_7163_p3() {
    tmp_1015_fu_7163_p3 = y_V_1_9_fu_7036_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_1016_fu_7177_p3() {
    tmp_1016_fu_7177_p3 = y_V_1_9_fu_7036_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_1017_fu_7191_p3() {
    tmp_1017_fu_7191_p3 = y_V_1_9_fu_7036_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_1018_fu_7205_p3() {
    tmp_1018_fu_7205_p3 = y_V_1_9_fu_7036_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_1019_fu_7219_p3() {
    tmp_1019_fu_7219_p3 = y_V_1_9_fu_7036_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_101_fu_1673_p2() {
    tmp_101_fu_1673_p2 = (tmp_737_fu_1665_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_1020_fu_7233_p3() {
    tmp_1020_fu_7233_p3 = y_V_1_9_fu_7036_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_102_fu_1687_p2() {
    tmp_102_fu_1687_p2 = (tmp_738_fu_1679_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_1030_fu_7494_p3() {
    tmp_1030_fu_7494_p3 = y_V_1_s_fu_7408_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_103_fu_1701_p2() {
    tmp_103_fu_1701_p2 = (tmp_739_fu_1693_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_1047_fu_7874_p3() {
    tmp_1047_fu_7874_p3 = y_V_1_10_fu_7810_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_1048_fu_7896_p3() {
    tmp_1048_fu_7896_p3 = x_V_1_10_fu_7720_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_1049_fu_7910_p3() {
    tmp_1049_fu_7910_p3 = x_V_1_10_fu_7720_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_104_fu_1715_p2() {
    tmp_104_fu_1715_p2 = (tmp_740_fu_1707_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_1050_fu_7924_p3() {
    tmp_1050_fu_7924_p3 = x_V_1_10_fu_7720_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_1051_fu_7938_p3() {
    tmp_1051_fu_7938_p3 = x_V_1_10_fu_7720_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_1052_fu_7952_p3() {
    tmp_1052_fu_7952_p3 = x_V_1_10_fu_7720_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_1053_fu_7966_p3() {
    tmp_1053_fu_7966_p3 = x_V_1_10_fu_7720_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_1054_fu_7980_p3() {
    tmp_1054_fu_7980_p3 = x_V_1_10_fu_7720_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_1056_fu_8178_p3() {
    tmp_1056_fu_8178_p3 = z_V_12_fu_8156_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_105_fu_1729_p2() {
    tmp_105_fu_1729_p2 = (tmp_741_fu_1721_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_106_fu_1743_p2() {
    tmp_106_fu_1743_p2 = (tmp_742_fu_1735_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_107_fu_1757_p2() {
    tmp_107_fu_1757_p2 = (tmp_743_fu_1749_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_108_fu_1771_p2() {
    tmp_108_fu_1771_p2 = (tmp_744_fu_1763_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_109_fu_1785_p2() {
    tmp_109_fu_1785_p2 = (tmp_745_fu_1777_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_10_fu_243_p3() {
    tmp_10_fu_243_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_681_fu_223_p1.read(): tmp_45_4_fu_237_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_110_fu_1799_p2() {
    tmp_110_fu_1799_p2 = (tmp_746_fu_1791_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_111_fu_1813_p2() {
    tmp_111_fu_1813_p2 = (tmp_747_fu_1805_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_112_fu_1827_p2() {
    tmp_112_fu_1827_p2 = (tmp_748_fu_1819_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_113_fu_1841_p2() {
    tmp_113_fu_1841_p2 = (tmp_749_fu_1833_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_114_fu_8242_p4() {
    tmp_114_fu_8242_p4 = outp_phase_cr_V_fu_8172_p2.read().range(19, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_115_fu_2223_p2() {
    tmp_115_fu_2223_p2 = (tmp_751_reg_8558.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_116_fu_2227_p2() {
    tmp_116_fu_2227_p2 = (tmp_752_reg_8563.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_117_fu_2231_p2() {
    tmp_117_fu_2231_p2 = (tmp_753_reg_8568.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_118_fu_2235_p2() {
    tmp_118_fu_2235_p2 = (tmp_754_reg_8573.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_119_fu_2239_p2() {
    tmp_119_fu_2239_p2 = (tmp_755_reg_8578.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_11_fu_251_p3() {
    tmp_11_fu_251_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_682_fu_227_p1.read(): tmp_10_fu_243_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_120_fu_2243_p2() {
    tmp_120_fu_2243_p2 = (tmp_756_reg_8583.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_121_fu_2247_p2() {
    tmp_121_fu_2247_p2 = (tmp_757_reg_8588.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_122_fu_2251_p2() {
    tmp_122_fu_2251_p2 = (tmp_758_reg_8593.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_123_fu_2255_p2() {
    tmp_123_fu_2255_p2 = (tmp_759_reg_8598.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_124_fu_2259_p2() {
    tmp_124_fu_2259_p2 = (tmp_760_reg_8603.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_125_fu_2263_p2() {
    tmp_125_fu_2263_p2 = (tmp_761_reg_8608.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_126_fu_2267_p2() {
    tmp_126_fu_2267_p2 = (tmp_762_reg_8613.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_127_fu_2271_p2() {
    tmp_127_fu_2271_p2 = (tmp_763_reg_8618.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_128_fu_2275_p2() {
    tmp_128_fu_2275_p2 = (tmp_764_reg_8623.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_129_fu_2279_p2() {
    tmp_129_fu_2279_p2 = (tmp_765_reg_8628.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_12_fu_287_p3() {
    tmp_12_fu_287_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_683_fu_259_p3.read(): tmp_45_5_fu_281_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_130_fu_2283_p2() {
    tmp_130_fu_2283_p2 = (tmp_766_reg_8633.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_131_fu_2287_p2() {
    tmp_131_fu_2287_p2 = (tmp_767_reg_8638.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_132_fu_2291_p2() {
    tmp_132_fu_2291_p2 = (tmp_768_reg_8643.read() ^ tmp_750_reg_8491.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_133_fu_8252_p3() {
    tmp_133_fu_8252_p3 = (!sel_tmp4_fu_8206_p2.read()[0].is_01())? sc_lv<16>(): ((sel_tmp4_fu_8206_p2.read()[0].to_bool())? tmp_94_fu_8232_p4.read(): tmp_114_fu_8242_p4.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_135_fu_2363_p2() {
    tmp_135_fu_2363_p2 = (tmp_769_reg_8648.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_136_fu_2367_p2() {
    tmp_136_fu_2367_p2 = (tmp_770_reg_8653.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_137_fu_2371_p2() {
    tmp_137_fu_2371_p2 = (tmp_771_reg_8658.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_138_fu_2375_p2() {
    tmp_138_fu_2375_p2 = (tmp_772_reg_8663.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_139_fu_2379_p2() {
    tmp_139_fu_2379_p2 = (tmp_773_reg_8668.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_13_fu_295_p3() {
    tmp_13_fu_295_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_684_fu_267_p3.read(): tmp_12_fu_287_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_140_fu_2383_p2() {
    tmp_140_fu_2383_p2 = (tmp_774_reg_8673.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_141_fu_2387_p2() {
    tmp_141_fu_2387_p2 = (tmp_775_reg_8678.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_142_fu_2391_p2() {
    tmp_142_fu_2391_p2 = (tmp_776_reg_8683.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_143_fu_2395_p2() {
    tmp_143_fu_2395_p2 = (tmp_777_reg_8688.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_144_fu_2399_p2() {
    tmp_144_fu_2399_p2 = (tmp_778_reg_8693.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_145_fu_2403_p2() {
    tmp_145_fu_2403_p2 = (tmp_779_reg_8698.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_146_fu_2407_p2() {
    tmp_146_fu_2407_p2 = (tmp_780_reg_8703.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_147_fu_2411_p2() {
    tmp_147_fu_2411_p2 = (tmp_781_reg_8708.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_148_fu_2415_p2() {
    tmp_148_fu_2415_p2 = (tmp_782_reg_8713.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_149_fu_2419_p2() {
    tmp_149_fu_2419_p2 = (tmp_783_reg_8718.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_14_fu_331_p3() {
    tmp_14_fu_331_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_685_fu_303_p3.read(): tmp_45_6_fu_325_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_150_fu_2423_p2() {
    tmp_150_fu_2423_p2 = (tmp_784_reg_8723.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_151_fu_2427_p2() {
    tmp_151_fu_2427_p2 = (tmp_785_reg_8728.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_152_fu_2431_p2() {
    tmp_152_fu_2431_p2 = (tmp_786_reg_8733.read() ^ rev6_reg_8524.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_155_fu_2526_p2() {
    tmp_155_fu_2526_p2 = (tmp_788_fu_2518_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_156_fu_2540_p2() {
    tmp_156_fu_2540_p2 = (tmp_789_fu_2532_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_157_fu_2554_p2() {
    tmp_157_fu_2554_p2 = (tmp_790_fu_2546_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_158_fu_2568_p2() {
    tmp_158_fu_2568_p2 = (tmp_791_fu_2560_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_159_fu_2582_p2() {
    tmp_159_fu_2582_p2 = (tmp_792_fu_2574_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_15_fu_339_p3() {
    tmp_15_fu_339_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_686_fu_311_p3.read(): tmp_14_fu_331_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_160_fu_2596_p2() {
    tmp_160_fu_2596_p2 = (tmp_793_fu_2588_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_161_fu_2610_p2() {
    tmp_161_fu_2610_p2 = (tmp_794_fu_2602_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_162_fu_2624_p2() {
    tmp_162_fu_2624_p2 = (tmp_795_fu_2616_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_163_fu_2638_p2() {
    tmp_163_fu_2638_p2 = (tmp_796_fu_2630_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_164_fu_2652_p2() {
    tmp_164_fu_2652_p2 = (tmp_797_fu_2644_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_165_fu_2666_p2() {
    tmp_165_fu_2666_p2 = (tmp_798_fu_2658_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_166_fu_2680_p2() {
    tmp_166_fu_2680_p2 = (tmp_799_fu_2672_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_167_fu_2694_p2() {
    tmp_167_fu_2694_p2 = (tmp_800_fu_2686_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_168_fu_2708_p2() {
    tmp_168_fu_2708_p2 = (tmp_801_fu_2700_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_169_fu_2722_p2() {
    tmp_169_fu_2722_p2 = (tmp_802_fu_2714_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_16_fu_375_p3() {
    tmp_16_fu_375_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_687_fu_347_p3.read(): tmp_45_7_fu_369_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_170_fu_2736_p2() {
    tmp_170_fu_2736_p2 = (tmp_803_fu_2728_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_171_fu_2750_p2() {
    tmp_171_fu_2750_p2 = (tmp_804_fu_2742_p3.read() ^ tmp_787_fu_2496_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_175_fu_2834_p2() {
    tmp_175_fu_2834_p2 = (tmp_805_fu_2826_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_176_fu_2848_p2() {
    tmp_176_fu_2848_p2 = (tmp_806_fu_2840_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_177_fu_2862_p2() {
    tmp_177_fu_2862_p2 = (tmp_807_fu_2854_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_178_fu_2876_p2() {
    tmp_178_fu_2876_p2 = (tmp_808_fu_2868_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_179_fu_2890_p2() {
    tmp_179_fu_2890_p2 = (tmp_809_fu_2882_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_17_fu_383_p3() {
    tmp_17_fu_383_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_688_fu_355_p3.read(): tmp_16_fu_375_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_180_fu_2904_p2() {
    tmp_180_fu_2904_p2 = (tmp_810_fu_2896_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_181_fu_2918_p2() {
    tmp_181_fu_2918_p2 = (tmp_811_fu_2910_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_182_fu_2932_p2() {
    tmp_182_fu_2932_p2 = (tmp_812_fu_2924_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_183_fu_2946_p2() {
    tmp_183_fu_2946_p2 = (tmp_813_fu_2938_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_184_fu_2960_p2() {
    tmp_184_fu_2960_p2 = (tmp_814_fu_2952_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_185_fu_2974_p2() {
    tmp_185_fu_2974_p2 = (tmp_815_fu_2966_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_186_fu_2988_p2() {
    tmp_186_fu_2988_p2 = (tmp_816_fu_2980_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_187_fu_3002_p2() {
    tmp_187_fu_3002_p2 = (tmp_817_fu_2994_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_188_fu_3016_p2() {
    tmp_188_fu_3016_p2 = (tmp_818_fu_3008_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_189_fu_3030_p2() {
    tmp_189_fu_3030_p2 = (tmp_819_fu_3022_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_18_fu_419_p3() {
    tmp_18_fu_419_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_689_fu_391_p3.read(): tmp_45_8_fu_413_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_190_fu_3044_p2() {
    tmp_190_fu_3044_p2 = (tmp_820_fu_3036_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_191_fu_3058_p2() {
    tmp_191_fu_3058_p2 = (tmp_821_fu_3050_p3.read() ^ rev9_fu_2504_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_195_fu_3402_p2() {
    tmp_195_fu_3402_p2 = (tmp_823_reg_8814.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_196_fu_3406_p2() {
    tmp_196_fu_3406_p2 = (tmp_824_reg_8819.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_197_fu_3410_p2() {
    tmp_197_fu_3410_p2 = (tmp_825_reg_8824.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_198_fu_3414_p2() {
    tmp_198_fu_3414_p2 = (tmp_826_reg_8829.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_199_fu_3418_p2() {
    tmp_199_fu_3418_p2 = (tmp_827_reg_8834.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_19_fu_427_p3() {
    tmp_19_fu_427_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_690_fu_399_p3.read(): tmp_18_fu_419_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_1_fu_193_p2() {
    tmp_1_fu_193_p2 = (!tmp_s_fu_185_p3.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_s_fu_185_p3.read() == ap_const_lv2_0);
}

void cmpy_complex_top_cordic_base::thread_tmp_200_fu_3422_p2() {
    tmp_200_fu_3422_p2 = (tmp_828_reg_8839.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_201_fu_3426_p2() {
    tmp_201_fu_3426_p2 = (tmp_829_reg_8844.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_202_fu_3430_p2() {
    tmp_202_fu_3430_p2 = (tmp_830_reg_8849.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_203_fu_3434_p2() {
    tmp_203_fu_3434_p2 = (tmp_831_reg_8854.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_204_fu_3438_p2() {
    tmp_204_fu_3438_p2 = (tmp_832_reg_8859.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_205_fu_3442_p2() {
    tmp_205_fu_3442_p2 = (tmp_833_reg_8864.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_206_fu_3446_p2() {
    tmp_206_fu_3446_p2 = (tmp_834_reg_8869.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_207_fu_3450_p2() {
    tmp_207_fu_3450_p2 = (tmp_835_reg_8874.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_208_fu_3454_p2() {
    tmp_208_fu_3454_p2 = (tmp_836_reg_8879.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_209_fu_3458_p2() {
    tmp_209_fu_3458_p2 = (tmp_837_reg_8884.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_20_fu_463_p3() {
    tmp_20_fu_463_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_691_fu_435_p3.read(): tmp_45_9_fu_457_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_210_fu_3462_p2() {
    tmp_210_fu_3462_p2 = (tmp_838_reg_8889.read() ^ tmp_822_reg_8782.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_215_fu_3534_p2() {
    tmp_215_fu_3534_p2 = (tmp_839_reg_8894.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_216_fu_3539_p2() {
    tmp_216_fu_3539_p2 = (tmp_840_reg_8899.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_217_fu_3544_p2() {
    tmp_217_fu_3544_p2 = (tmp_841_reg_8904.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_218_fu_3549_p2() {
    tmp_218_fu_3549_p2 = (tmp_842_reg_8909.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_219_fu_3554_p2() {
    tmp_219_fu_3554_p2 = (tmp_843_reg_8914.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_21_fu_471_p3() {
    tmp_21_fu_471_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_692_fu_443_p3.read(): tmp_20_fu_463_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_220_fu_3559_p2() {
    tmp_220_fu_3559_p2 = (tmp_844_reg_8919.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_221_fu_3564_p2() {
    tmp_221_fu_3564_p2 = (tmp_845_reg_8924.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_222_fu_3569_p2() {
    tmp_222_fu_3569_p2 = (tmp_846_reg_8929.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_223_fu_3574_p2() {
    tmp_223_fu_3574_p2 = (tmp_847_reg_8934.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_224_fu_3579_p2() {
    tmp_224_fu_3579_p2 = (tmp_848_reg_8939.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_225_fu_3584_p2() {
    tmp_225_fu_3584_p2 = (tmp_849_reg_8944.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_226_fu_3589_p2() {
    tmp_226_fu_3589_p2 = (tmp_850_reg_8949.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_227_fu_3594_p2() {
    tmp_227_fu_3594_p2 = (tmp_851_reg_8954.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_228_fu_3599_p2() {
    tmp_228_fu_3599_p2 = (tmp_852_reg_8959.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_229_fu_3604_p2() {
    tmp_229_fu_3604_p2 = (tmp_853_reg_8964.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_22_fu_507_p3() {
    tmp_22_fu_507_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_693_fu_479_p3.read(): tmp_45_s_fu_501_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_230_fu_3609_p2() {
    tmp_230_fu_3609_p2 = (tmp_854_reg_8969.read() ^ rev2_fu_3390_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_235_fu_3706_p2() {
    tmp_235_fu_3706_p2 = (tmp_856_fu_3698_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_236_fu_3720_p2() {
    tmp_236_fu_3720_p2 = (tmp_857_fu_3712_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_237_fu_3734_p2() {
    tmp_237_fu_3734_p2 = (tmp_858_fu_3726_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_238_fu_3748_p2() {
    tmp_238_fu_3748_p2 = (tmp_859_fu_3740_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_239_fu_3762_p2() {
    tmp_239_fu_3762_p2 = (tmp_860_fu_3754_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_23_fu_515_p3() {
    tmp_23_fu_515_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_694_fu_487_p3.read(): tmp_22_fu_507_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_240_fu_3776_p2() {
    tmp_240_fu_3776_p2 = (tmp_861_fu_3768_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_241_fu_3790_p2() {
    tmp_241_fu_3790_p2 = (tmp_862_fu_3782_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_242_fu_3804_p2() {
    tmp_242_fu_3804_p2 = (tmp_863_fu_3796_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_243_fu_3818_p2() {
    tmp_243_fu_3818_p2 = (tmp_864_fu_3810_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_244_fu_3832_p2() {
    tmp_244_fu_3832_p2 = (tmp_865_fu_3824_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_245_fu_3846_p2() {
    tmp_245_fu_3846_p2 = (tmp_866_fu_3838_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_246_fu_3860_p2() {
    tmp_246_fu_3860_p2 = (tmp_867_fu_3852_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_247_fu_3874_p2() {
    tmp_247_fu_3874_p2 = (tmp_868_fu_3866_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_248_fu_3888_p2() {
    tmp_248_fu_3888_p2 = (tmp_869_fu_3880_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_249_fu_3902_p2() {
    tmp_249_fu_3902_p2 = (tmp_870_fu_3894_p3.read() ^ tmp_855_fu_3676_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_24_fu_551_p3() {
    tmp_24_fu_551_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_695_fu_523_p3.read(): tmp_45_1_fu_545_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_255_fu_3978_p2() {
    tmp_255_fu_3978_p2 = (tmp_871_fu_3970_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_256_fu_3992_p2() {
    tmp_256_fu_3992_p2 = (tmp_872_fu_3984_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_257_fu_4006_p2() {
    tmp_257_fu_4006_p2 = (tmp_873_fu_3998_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_258_fu_4020_p2() {
    tmp_258_fu_4020_p2 = (tmp_874_fu_4012_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_259_fu_4034_p2() {
    tmp_259_fu_4034_p2 = (tmp_875_fu_4026_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_260_fu_4048_p2() {
    tmp_260_fu_4048_p2 = (tmp_876_fu_4040_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_261_fu_4062_p2() {
    tmp_261_fu_4062_p2 = (tmp_877_fu_4054_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_262_fu_4076_p2() {
    tmp_262_fu_4076_p2 = (tmp_878_fu_4068_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_263_fu_4090_p2() {
    tmp_263_fu_4090_p2 = (tmp_879_fu_4082_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_264_fu_4104_p2() {
    tmp_264_fu_4104_p2 = (tmp_880_fu_4096_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_265_fu_4118_p2() {
    tmp_265_fu_4118_p2 = (tmp_881_fu_4110_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_266_fu_4132_p2() {
    tmp_266_fu_4132_p2 = (tmp_882_fu_4124_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_267_fu_4146_p2() {
    tmp_267_fu_4146_p2 = (tmp_883_fu_4138_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_268_fu_4160_p2() {
    tmp_268_fu_4160_p2 = (tmp_884_fu_4152_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_269_fu_4174_p2() {
    tmp_269_fu_4174_p2 = (tmp_885_fu_4166_p3.read() ^ rev3_fu_3684_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_275_fu_4508_p2() {
    tmp_275_fu_4508_p2 = (tmp_887_fu_4500_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_276_fu_4522_p2() {
    tmp_276_fu_4522_p2 = (tmp_888_fu_4514_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_277_fu_4536_p2() {
    tmp_277_fu_4536_p2 = (tmp_889_fu_4528_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_278_fu_4550_p2() {
    tmp_278_fu_4550_p2 = (tmp_890_fu_4542_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_279_fu_4564_p2() {
    tmp_279_fu_4564_p2 = (tmp_891_fu_4556_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_280_fu_4578_p2() {
    tmp_280_fu_4578_p2 = (tmp_892_fu_4570_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_281_fu_4592_p2() {
    tmp_281_fu_4592_p2 = (tmp_893_fu_4584_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_282_fu_4606_p2() {
    tmp_282_fu_4606_p2 = (tmp_894_fu_4598_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_283_fu_4620_p2() {
    tmp_283_fu_4620_p2 = (tmp_895_fu_4612_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_284_fu_4634_p2() {
    tmp_284_fu_4634_p2 = (tmp_896_fu_4626_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_285_fu_4648_p2() {
    tmp_285_fu_4648_p2 = (tmp_897_fu_4640_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_286_fu_4662_p2() {
    tmp_286_fu_4662_p2 = (tmp_898_fu_4654_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_287_fu_4676_p2() {
    tmp_287_fu_4676_p2 = (tmp_899_fu_4668_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_288_fu_4690_p2() {
    tmp_288_fu_4690_p2 = (tmp_900_fu_4682_p3.read() ^ tmp_886_fu_4479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_295_fu_4766_p2() {
    tmp_295_fu_4766_p2 = (tmp_901_reg_9109.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_296_fu_4771_p2() {
    tmp_296_fu_4771_p2 = (tmp_902_reg_9114.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_297_fu_4776_p2() {
    tmp_297_fu_4776_p2 = (tmp_903_reg_9119.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_298_fu_4781_p2() {
    tmp_298_fu_4781_p2 = (tmp_904_reg_9124.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_299_fu_4786_p2() {
    tmp_299_fu_4786_p2 = (tmp_905_reg_9129.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_29_fu_559_p3() {
    tmp_29_fu_559_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_696_fu_531_p3.read(): tmp_24_fu_551_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_2_fu_199_p2() {
    tmp_2_fu_199_p2 = (!tmp_s_fu_185_p3.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_s_fu_185_p3.read() == ap_const_lv2_2);
}

void cmpy_complex_top_cordic_base::thread_tmp_300_fu_4791_p2() {
    tmp_300_fu_4791_p2 = (tmp_906_reg_9134.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_301_fu_4796_p2() {
    tmp_301_fu_4796_p2 = (tmp_907_reg_9139.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_302_fu_4801_p2() {
    tmp_302_fu_4801_p2 = (tmp_908_reg_9144.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_303_fu_4806_p2() {
    tmp_303_fu_4806_p2 = (tmp_909_reg_9149.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_304_fu_4811_p2() {
    tmp_304_fu_4811_p2 = (tmp_910_reg_9154.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_305_fu_4816_p2() {
    tmp_305_fu_4816_p2 = (tmp_911_reg_9159.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_306_fu_4821_p2() {
    tmp_306_fu_4821_p2 = (tmp_912_reg_9164.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_307_fu_4826_p2() {
    tmp_307_fu_4826_p2 = (tmp_913_reg_9169.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_308_fu_4831_p2() {
    tmp_308_fu_4831_p2 = (tmp_914_reg_9174.read() ^ rev4_fu_4487_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_30_fu_595_p3() {
    tmp_30_fu_595_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_697_fu_567_p3.read(): tmp_45_2_fu_589_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_315_fu_5273_p2() {
    tmp_315_fu_5273_p2 = (tmp_916_reg_9280.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_316_fu_5277_p2() {
    tmp_316_fu_5277_p2 = (tmp_917_reg_9285.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_317_fu_5281_p2() {
    tmp_317_fu_5281_p2 = (tmp_918_reg_9290.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_318_fu_5285_p2() {
    tmp_318_fu_5285_p2 = (tmp_919_reg_9295.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_319_fu_5289_p2() {
    tmp_319_fu_5289_p2 = (tmp_920_reg_9300.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_31_fu_603_p3() {
    tmp_31_fu_603_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_698_fu_575_p3.read(): tmp_30_fu_595_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_320_fu_5293_p2() {
    tmp_320_fu_5293_p2 = (tmp_921_reg_9305.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_321_fu_5297_p2() {
    tmp_321_fu_5297_p2 = (tmp_922_reg_9310.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_322_fu_5301_p2() {
    tmp_322_fu_5301_p2 = (tmp_923_reg_9315.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_323_fu_5305_p2() {
    tmp_323_fu_5305_p2 = (tmp_924_reg_9320.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_324_fu_5309_p2() {
    tmp_324_fu_5309_p2 = (tmp_925_reg_9325.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_325_fu_5313_p2() {
    tmp_325_fu_5313_p2 = (tmp_926_reg_9330.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_326_fu_5317_p2() {
    tmp_326_fu_5317_p2 = (tmp_927_reg_9335.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_327_fu_5321_p2() {
    tmp_327_fu_5321_p2 = (tmp_928_reg_9340.read() ^ tmp_915_reg_9223.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_32_fu_639_p3() {
    tmp_32_fu_639_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_699_fu_611_p3.read(): tmp_45_3_fu_633_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_332_fu_5393_p2() {
    tmp_332_fu_5393_p2 = (tmp_929_reg_9345.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_333_fu_5397_p2() {
    tmp_333_fu_5397_p2 = (tmp_930_reg_9350.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_334_fu_5401_p2() {
    tmp_334_fu_5401_p2 = (tmp_931_reg_9355.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_335_fu_5405_p2() {
    tmp_335_fu_5405_p2 = (tmp_932_reg_9360.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_336_fu_5409_p2() {
    tmp_336_fu_5409_p2 = (tmp_933_reg_9365.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_337_fu_5413_p2() {
    tmp_337_fu_5413_p2 = (tmp_934_reg_9370.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_338_fu_5417_p2() {
    tmp_338_fu_5417_p2 = (tmp_935_reg_9375.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_339_fu_5421_p2() {
    tmp_339_fu_5421_p2 = (tmp_936_reg_9380.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_33_fu_647_p3() {
    tmp_33_fu_647_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_700_fu_619_p3.read(): tmp_32_fu_639_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_340_fu_5425_p2() {
    tmp_340_fu_5425_p2 = (tmp_937_reg_9385.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_341_fu_5429_p2() {
    tmp_341_fu_5429_p2 = (tmp_938_reg_9390.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_342_fu_5433_p2() {
    tmp_342_fu_5433_p2 = (tmp_939_reg_9395.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_343_fu_5437_p2() {
    tmp_343_fu_5437_p2 = (tmp_940_reg_9400.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_344_fu_5441_p2() {
    tmp_344_fu_5441_p2 = (tmp_941_reg_9405.read() ^ rev5_reg_9261.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_345_fu_5536_p2() {
    tmp_345_fu_5536_p2 = (tmp_943_fu_5528_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_346_fu_5550_p2() {
    tmp_346_fu_5550_p2 = (tmp_944_fu_5542_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_347_fu_5564_p2() {
    tmp_347_fu_5564_p2 = (tmp_945_fu_5556_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_348_fu_5578_p2() {
    tmp_348_fu_5578_p2 = (tmp_946_fu_5570_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_349_fu_5592_p2() {
    tmp_349_fu_5592_p2 = (tmp_947_fu_5584_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_34_fu_683_p3() {
    tmp_34_fu_683_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_701_fu_655_p3.read(): tmp_45_10_fu_677_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_350_fu_5606_p2() {
    tmp_350_fu_5606_p2 = (tmp_948_fu_5598_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_351_fu_5620_p2() {
    tmp_351_fu_5620_p2 = (tmp_949_fu_5612_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_352_fu_5634_p2() {
    tmp_352_fu_5634_p2 = (tmp_950_fu_5626_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_353_fu_5648_p2() {
    tmp_353_fu_5648_p2 = (tmp_951_fu_5640_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_354_fu_5662_p2() {
    tmp_354_fu_5662_p2 = (tmp_952_fu_5654_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_355_fu_5676_p2() {
    tmp_355_fu_5676_p2 = (tmp_953_fu_5668_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_356_fu_5690_p2() {
    tmp_356_fu_5690_p2 = (tmp_954_fu_5682_p3.read() ^ tmp_942_fu_5506_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_357_fu_5774_p2() {
    tmp_357_fu_5774_p2 = (tmp_955_fu_5766_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_358_fu_5788_p2() {
    tmp_358_fu_5788_p2 = (tmp_956_fu_5780_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_359_fu_5802_p2() {
    tmp_359_fu_5802_p2 = (tmp_957_fu_5794_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_35_fu_691_p3() {
    tmp_35_fu_691_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_702_fu_663_p3.read(): tmp_34_fu_683_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_360_fu_5816_p2() {
    tmp_360_fu_5816_p2 = (tmp_958_fu_5808_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_361_fu_5830_p2() {
    tmp_361_fu_5830_p2 = (tmp_959_fu_5822_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_362_fu_5844_p2() {
    tmp_362_fu_5844_p2 = (tmp_960_fu_5836_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_363_fu_5858_p2() {
    tmp_363_fu_5858_p2 = (tmp_961_fu_5850_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_364_fu_5872_p2() {
    tmp_364_fu_5872_p2 = (tmp_962_fu_5864_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_365_fu_5886_p2() {
    tmp_365_fu_5886_p2 = (tmp_963_fu_5878_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_366_fu_5900_p2() {
    tmp_366_fu_5900_p2 = (tmp_964_fu_5892_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_367_fu_5914_p2() {
    tmp_367_fu_5914_p2 = (tmp_965_fu_5906_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_368_fu_5928_p2() {
    tmp_368_fu_5928_p2 = (tmp_966_fu_5920_p3.read() ^ rev7_fu_5514_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_369_fu_6289_p2() {
    tmp_369_fu_6289_p2 = (tmp_968_reg_9491.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_36_fu_727_p3() {
    tmp_36_fu_727_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_703_fu_699_p3.read(): tmp_45_11_fu_721_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_370_fu_6293_p2() {
    tmp_370_fu_6293_p2 = (tmp_969_reg_9496.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_371_fu_6297_p2() {
    tmp_371_fu_6297_p2 = (tmp_970_reg_9501.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_372_fu_6301_p2() {
    tmp_372_fu_6301_p2 = (tmp_971_reg_9506.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_373_fu_6305_p2() {
    tmp_373_fu_6305_p2 = (tmp_972_reg_9511.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_374_fu_6309_p2() {
    tmp_374_fu_6309_p2 = (tmp_973_reg_9516.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_375_fu_6313_p2() {
    tmp_375_fu_6313_p2 = (tmp_974_reg_9521.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_376_fu_6317_p2() {
    tmp_376_fu_6317_p2 = (tmp_975_reg_9526.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_377_fu_6321_p2() {
    tmp_377_fu_6321_p2 = (tmp_976_reg_9531.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_378_fu_6325_p2() {
    tmp_378_fu_6325_p2 = (tmp_977_reg_9536.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_379_fu_6329_p2() {
    tmp_379_fu_6329_p2 = (tmp_978_reg_9541.read() ^ tmp_967_reg_9454.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_37_fu_735_p3() {
    tmp_37_fu_735_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_704_fu_707_p3.read(): tmp_36_fu_727_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_380_fu_6401_p2() {
    tmp_380_fu_6401_p2 = (tmp_979_reg_9546.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_381_fu_6406_p2() {
    tmp_381_fu_6406_p2 = (tmp_980_reg_9551.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_382_fu_6411_p2() {
    tmp_382_fu_6411_p2 = (tmp_981_reg_9556.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_383_fu_6416_p2() {
    tmp_383_fu_6416_p2 = (tmp_982_reg_9561.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_384_fu_6421_p2() {
    tmp_384_fu_6421_p2 = (tmp_983_reg_9566.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_385_fu_6426_p2() {
    tmp_385_fu_6426_p2 = (tmp_984_reg_9571.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_386_fu_6431_p2() {
    tmp_386_fu_6431_p2 = (tmp_985_reg_9576.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_387_fu_6436_p2() {
    tmp_387_fu_6436_p2 = (tmp_986_reg_9581.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_388_fu_6441_p2() {
    tmp_388_fu_6441_p2 = (tmp_987_reg_9586.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_389_fu_6446_p2() {
    tmp_389_fu_6446_p2 = (tmp_988_reg_9591.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_38_fu_771_p3() {
    tmp_38_fu_771_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_705_fu_743_p3.read(): tmp_45_12_fu_765_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_390_fu_6451_p2() {
    tmp_390_fu_6451_p2 = (tmp_989_reg_9596.read() ^ rev8_fu_6277_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_391_fu_6598_p2() {
    tmp_391_fu_6598_p2 = (tmp_991_fu_6590_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_392_fu_6612_p2() {
    tmp_392_fu_6612_p2 = (tmp_992_fu_6604_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_393_fu_6626_p2() {
    tmp_393_fu_6626_p2 = (tmp_993_fu_6618_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_394_fu_6640_p2() {
    tmp_394_fu_6640_p2 = (tmp_994_fu_6632_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_395_fu_6654_p2() {
    tmp_395_fu_6654_p2 = (tmp_995_fu_6646_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_396_fu_6668_p2() {
    tmp_396_fu_6668_p2 = (tmp_996_fu_6660_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_397_fu_6682_p2() {
    tmp_397_fu_6682_p2 = (tmp_997_fu_6674_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_398_fu_6696_p2() {
    tmp_398_fu_6696_p2 = (tmp_998_fu_6688_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_399_fu_6710_p2() {
    tmp_399_fu_6710_p2 = (tmp_999_fu_6702_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_39_fu_779_p3() {
    tmp_39_fu_779_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_706_fu_751_p3.read(): tmp_38_fu_771_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_3_fu_217_p2() {
    tmp_3_fu_217_p2 = (sel_tmp2_fu_211_p2.read() | tmp_1_fu_193_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_400_fu_6724_p2() {
    tmp_400_fu_6724_p2 = (tmp_1000_fu_6716_p3.read() ^ tmp_990_fu_6568_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_401_fu_6800_p2() {
    tmp_401_fu_6800_p2 = (tmp_1001_fu_6792_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_402_fu_6814_p2() {
    tmp_402_fu_6814_p2 = (tmp_1002_fu_6806_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_403_fu_6828_p2() {
    tmp_403_fu_6828_p2 = (tmp_1003_fu_6820_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_404_fu_6842_p2() {
    tmp_404_fu_6842_p2 = (tmp_1004_fu_6834_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_405_fu_6856_p2() {
    tmp_405_fu_6856_p2 = (tmp_1005_fu_6848_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_406_fu_6870_p2() {
    tmp_406_fu_6870_p2 = (tmp_1006_fu_6862_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_407_fu_6884_p2() {
    tmp_407_fu_6884_p2 = (tmp_1007_fu_6876_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_408_fu_6898_p2() {
    tmp_408_fu_6898_p2 = (tmp_1008_fu_6890_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_409_fu_6912_p2() {
    tmp_409_fu_6912_p2 = (tmp_1009_fu_6904_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_40_fu_815_p3() {
    tmp_40_fu_815_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_707_fu_787_p3.read(): tmp_45_13_fu_809_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_410_fu_6926_p2() {
    tmp_410_fu_6926_p2 = (tmp_1010_fu_6918_p3.read() ^ rev10_fu_6576_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_411_fu_7129_p2() {
    tmp_411_fu_7129_p2 = (tmp_1012_fu_7121_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_412_fu_7143_p2() {
    tmp_412_fu_7143_p2 = (tmp_1013_fu_7135_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_413_fu_7157_p2() {
    tmp_413_fu_7157_p2 = (tmp_1014_fu_7149_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_414_fu_7171_p2() {
    tmp_414_fu_7171_p2 = (tmp_1015_fu_7163_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_415_fu_7185_p2() {
    tmp_415_fu_7185_p2 = (tmp_1016_fu_7177_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_416_fu_7199_p2() {
    tmp_416_fu_7199_p2 = (tmp_1017_fu_7191_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_417_fu_7213_p2() {
    tmp_417_fu_7213_p2 = (tmp_1018_fu_7205_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_418_fu_7227_p2() {
    tmp_418_fu_7227_p2 = (tmp_1019_fu_7219_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_419_fu_7241_p2() {
    tmp_419_fu_7241_p2 = (tmp_1020_fu_7233_p3.read() ^ tmp_1011_fu_7100_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_41_fu_823_p3() {
    tmp_41_fu_823_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_708_fu_795_p3.read(): tmp_40_fu_815_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_420_fu_7317_p2() {
    tmp_420_fu_7317_p2 = (tmp_1021_reg_9706.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_421_fu_7322_p2() {
    tmp_421_fu_7322_p2 = (tmp_1022_reg_9711.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_422_fu_7327_p2() {
    tmp_422_fu_7327_p2 = (tmp_1023_reg_9716.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_423_fu_7332_p2() {
    tmp_423_fu_7332_p2 = (tmp_1024_reg_9721.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_424_fu_7337_p2() {
    tmp_424_fu_7337_p2 = (tmp_1025_reg_9726.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_425_fu_7342_p2() {
    tmp_425_fu_7342_p2 = (tmp_1026_reg_9731.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_426_fu_7347_p2() {
    tmp_426_fu_7347_p2 = (tmp_1027_reg_9736.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_427_fu_7352_p2() {
    tmp_427_fu_7352_p2 = (tmp_1028_reg_9741.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_428_fu_7357_p2() {
    tmp_428_fu_7357_p2 = (tmp_1029_reg_9746.read() ^ rev11_fu_7108_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_429_fu_7643_p2() {
    tmp_429_fu_7643_p2 = (tmp_1031_reg_9813.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_42_fu_859_p3() {
    tmp_42_fu_859_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_709_fu_831_p3.read(): tmp_45_14_fu_853_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_430_fu_7647_p2() {
    tmp_430_fu_7647_p2 = (tmp_1032_reg_9818.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_431_fu_7651_p2() {
    tmp_431_fu_7651_p2 = (tmp_1033_reg_9823.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_432_fu_7655_p2() {
    tmp_432_fu_7655_p2 = (tmp_1034_reg_9828.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_433_fu_7659_p2() {
    tmp_433_fu_7659_p2 = (tmp_1035_reg_9833.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_434_fu_7663_p2() {
    tmp_434_fu_7663_p2 = (tmp_1036_reg_9838.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_435_fu_7667_p2() {
    tmp_435_fu_7667_p2 = (tmp_1037_reg_9843.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_436_fu_7671_p2() {
    tmp_436_fu_7671_p2 = (tmp_1038_reg_9848.read() ^ tmp_1030_reg_9766.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_437_fu_7733_p2() {
    tmp_437_fu_7733_p2 = (tmp_1039_reg_9853.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_438_fu_7737_p2() {
    tmp_438_fu_7737_p2 = (tmp_1040_reg_9858.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_439_fu_7741_p2() {
    tmp_439_fu_7741_p2 = (tmp_1041_reg_9863.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_43_10_fu_671_p2() {
    tmp_43_10_fu_671_p2 = (tmp_701_fu_655_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_11_fu_715_p2() {
    tmp_43_11_fu_715_p2 = (tmp_703_fu_699_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_12_fu_759_p2() {
    tmp_43_12_fu_759_p2 = (tmp_705_fu_743_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_13_fu_803_p2() {
    tmp_43_13_fu_803_p2 = (tmp_707_fu_787_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_14_fu_847_p2() {
    tmp_43_14_fu_847_p2 = (tmp_709_fu_831_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_1_fu_539_p2() {
    tmp_43_1_fu_539_p2 = (tmp_695_fu_523_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_2_fu_583_p2() {
    tmp_43_2_fu_583_p2 = (tmp_697_fu_567_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_3_fu_627_p2() {
    tmp_43_3_fu_627_p2 = (tmp_699_fu_611_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_4_fu_231_p2() {
    tmp_43_4_fu_231_p2 = (tmp_681_fu_223_p1.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_5_fu_275_p2() {
    tmp_43_5_fu_275_p2 = (tmp_683_fu_259_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_6_fu_319_p2() {
    tmp_43_6_fu_319_p2 = (tmp_685_fu_303_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_7_fu_363_p2() {
    tmp_43_7_fu_363_p2 = (tmp_687_fu_347_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_8_fu_407_p2() {
    tmp_43_8_fu_407_p2 = (tmp_689_fu_391_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_9_fu_451_p2() {
    tmp_43_9_fu_451_p2 = (tmp_691_fu_435_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_43_fu_867_p3() {
    tmp_43_fu_867_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_710_fu_839_p3.read(): tmp_42_fu_859_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_43_s_fu_495_p2() {
    tmp_43_s_fu_495_p2 = (tmp_693_fu_479_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_440_fu_7745_p2() {
    tmp_440_fu_7745_p2 = (tmp_1042_reg_9868.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_441_fu_7749_p2() {
    tmp_441_fu_7749_p2 = (tmp_1043_reg_9873.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_442_fu_7753_p2() {
    tmp_442_fu_7753_p2 = (tmp_1044_reg_9878.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_443_fu_7757_p2() {
    tmp_443_fu_7757_p2 = (tmp_1045_reg_9883.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_444_fu_7761_p2() {
    tmp_444_fu_7761_p2 = (tmp_1046_reg_9888.read() ^ rev12_reg_9799.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_445_fu_7904_p2() {
    tmp_445_fu_7904_p2 = (tmp_1048_fu_7896_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_446_fu_7918_p2() {
    tmp_446_fu_7918_p2 = (tmp_1049_fu_7910_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_447_fu_7932_p2() {
    tmp_447_fu_7932_p2 = (tmp_1050_fu_7924_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_448_fu_7946_p2() {
    tmp_448_fu_7946_p2 = (tmp_1051_fu_7938_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_449_fu_7960_p2() {
    tmp_449_fu_7960_p2 = (tmp_1052_fu_7952_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_450_fu_7974_p2() {
    tmp_450_fu_7974_p2 = (tmp_1053_fu_7966_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_451_fu_7988_p2() {
    tmp_451_fu_7988_p2 = (tmp_1054_fu_7980_p3.read() ^ rev13_fu_7882_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_452_fu_8260_p4() {
    tmp_452_fu_8260_p4 = newSel1_fu_8226_p2.read().range(19, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_10_fu_677_p2() {
    tmp_45_10_fu_677_p2 = (tmp_702_fu_663_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_11_fu_721_p2() {
    tmp_45_11_fu_721_p2 = (tmp_704_fu_707_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_12_fu_765_p2() {
    tmp_45_12_fu_765_p2 = (tmp_706_fu_751_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_13_fu_809_p2() {
    tmp_45_13_fu_809_p2 = (tmp_708_fu_795_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_14_fu_853_p2() {
    tmp_45_14_fu_853_p2 = (tmp_710_fu_839_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_1_fu_545_p2() {
    tmp_45_1_fu_545_p2 = (tmp_696_fu_531_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_2_fu_589_p2() {
    tmp_45_2_fu_589_p2 = (tmp_698_fu_575_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_3_fu_633_p2() {
    tmp_45_3_fu_633_p2 = (tmp_700_fu_619_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_4_fu_237_p2() {
    tmp_45_4_fu_237_p2 = (tmp_682_fu_227_p1.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_5_fu_281_p2() {
    tmp_45_5_fu_281_p2 = (tmp_684_fu_267_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_6_fu_325_p2() {
    tmp_45_6_fu_325_p2 = (tmp_686_fu_311_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_7_fu_369_p2() {
    tmp_45_7_fu_369_p2 = (tmp_688_fu_355_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_8_fu_413_p2() {
    tmp_45_8_fu_413_p2 = (tmp_690_fu_399_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_9_fu_457_p2() {
    tmp_45_9_fu_457_p2 = (tmp_692_fu_443_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_45_fu_875_p3() {
    tmp_45_fu_875_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_682_fu_227_p1.read(): tmp_681_fu_223_p1.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_45_s_fu_501_p2() {
    tmp_45_s_fu_501_p2 = (tmp_694_fu_487_p3.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_46_fu_883_p3() {
    tmp_46_fu_883_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_4_fu_231_p2.read(): tmp_45_fu_875_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_47_fu_891_p3() {
    tmp_47_fu_891_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_684_fu_267_p3.read(): tmp_683_fu_259_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_48_fu_899_p3() {
    tmp_48_fu_899_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_5_fu_275_p2.read(): tmp_47_fu_891_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_49_fu_907_p3() {
    tmp_49_fu_907_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_686_fu_311_p3.read(): tmp_685_fu_303_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_50_fu_915_p3() {
    tmp_50_fu_915_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_6_fu_319_p2.read(): tmp_49_fu_907_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_51_fu_923_p3() {
    tmp_51_fu_923_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_688_fu_355_p3.read(): tmp_687_fu_347_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_52_fu_931_p3() {
    tmp_52_fu_931_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_7_fu_363_p2.read(): tmp_51_fu_923_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_53_fu_939_p3() {
    tmp_53_fu_939_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_690_fu_399_p3.read(): tmp_689_fu_391_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_54_fu_947_p3() {
    tmp_54_fu_947_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_8_fu_407_p2.read(): tmp_53_fu_939_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_55_fu_955_p3() {
    tmp_55_fu_955_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_692_fu_443_p3.read(): tmp_691_fu_435_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_56_fu_963_p3() {
    tmp_56_fu_963_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_9_fu_451_p2.read(): tmp_55_fu_955_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_57_fu_971_p3() {
    tmp_57_fu_971_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_694_fu_487_p3.read(): tmp_693_fu_479_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_58_fu_979_p3() {
    tmp_58_fu_979_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_s_fu_495_p2.read(): tmp_57_fu_971_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_59_fu_987_p3() {
    tmp_59_fu_987_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_696_fu_531_p3.read(): tmp_695_fu_523_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_5_fu_1115_p2() {
    tmp_5_fu_1115_p2 = (tmp_680_reg_8278.read() ^ ap_const_lv1_1);
}

void cmpy_complex_top_cordic_base::thread_tmp_60_fu_995_p3() {
    tmp_60_fu_995_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_1_fu_539_p2.read(): tmp_59_fu_987_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_61_fu_1003_p3() {
    tmp_61_fu_1003_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_698_fu_575_p3.read(): tmp_697_fu_567_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_62_fu_1011_p3() {
    tmp_62_fu_1011_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_2_fu_583_p2.read(): tmp_61_fu_1003_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_63_fu_1019_p3() {
    tmp_63_fu_1019_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_700_fu_619_p3.read(): tmp_699_fu_611_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_64_fu_1027_p3() {
    tmp_64_fu_1027_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_3_fu_627_p2.read(): tmp_63_fu_1019_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_65_fu_1035_p3() {
    tmp_65_fu_1035_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_702_fu_663_p3.read(): tmp_701_fu_655_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_66_fu_1043_p3() {
    tmp_66_fu_1043_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_10_fu_671_p2.read(): tmp_65_fu_1035_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_67_fu_1051_p3() {
    tmp_67_fu_1051_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_704_fu_707_p3.read(): tmp_703_fu_699_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_680_fu_177_p3() {
    tmp_680_fu_177_p3 = inp_x_min_y_ext_V_fu_171_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_681_fu_223_p1() {
    tmp_681_fu_223_p1 = inputData_cartesian_M_real_V_read.read().range(1-1, 0);
}

void cmpy_complex_top_cordic_base::thread_tmp_682_fu_227_p1() {
    tmp_682_fu_227_p1 = inputData_cartesian_M_imag_V_read.read().range(1-1, 0);
}

void cmpy_complex_top_cordic_base::thread_tmp_683_fu_259_p3() {
    tmp_683_fu_259_p3 = inputData_cartesian_M_real_V_read.read().range(1, 1);
}

void cmpy_complex_top_cordic_base::thread_tmp_684_fu_267_p3() {
    tmp_684_fu_267_p3 = inputData_cartesian_M_imag_V_read.read().range(1, 1);
}

void cmpy_complex_top_cordic_base::thread_tmp_685_fu_303_p3() {
    tmp_685_fu_303_p3 = inputData_cartesian_M_real_V_read.read().range(2, 2);
}

void cmpy_complex_top_cordic_base::thread_tmp_686_fu_311_p3() {
    tmp_686_fu_311_p3 = inputData_cartesian_M_imag_V_read.read().range(2, 2);
}

void cmpy_complex_top_cordic_base::thread_tmp_687_fu_347_p3() {
    tmp_687_fu_347_p3 = inputData_cartesian_M_real_V_read.read().range(3, 3);
}

void cmpy_complex_top_cordic_base::thread_tmp_688_fu_355_p3() {
    tmp_688_fu_355_p3 = inputData_cartesian_M_imag_V_read.read().range(3, 3);
}

void cmpy_complex_top_cordic_base::thread_tmp_689_fu_391_p3() {
    tmp_689_fu_391_p3 = inputData_cartesian_M_real_V_read.read().range(4, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_68_fu_1059_p3() {
    tmp_68_fu_1059_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_11_fu_715_p2.read(): tmp_67_fu_1051_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_690_fu_399_p3() {
    tmp_690_fu_399_p3 = inputData_cartesian_M_imag_V_read.read().range(4, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_691_fu_435_p3() {
    tmp_691_fu_435_p3 = inputData_cartesian_M_real_V_read.read().range(5, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_692_fu_443_p3() {
    tmp_692_fu_443_p3 = inputData_cartesian_M_imag_V_read.read().range(5, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_693_fu_479_p3() {
    tmp_693_fu_479_p3 = inputData_cartesian_M_real_V_read.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_694_fu_487_p3() {
    tmp_694_fu_487_p3 = inputData_cartesian_M_imag_V_read.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_695_fu_523_p3() {
    tmp_695_fu_523_p3 = inputData_cartesian_M_real_V_read.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_696_fu_531_p3() {
    tmp_696_fu_531_p3 = inputData_cartesian_M_imag_V_read.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_697_fu_567_p3() {
    tmp_697_fu_567_p3 = inputData_cartesian_M_real_V_read.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_698_fu_575_p3() {
    tmp_698_fu_575_p3 = inputData_cartesian_M_imag_V_read.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_699_fu_611_p3() {
    tmp_699_fu_611_p3 = inputData_cartesian_M_real_V_read.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_69_fu_1067_p3() {
    tmp_69_fu_1067_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_706_fu_751_p3.read(): tmp_705_fu_743_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_700_fu_619_p3() {
    tmp_700_fu_619_p3 = inputData_cartesian_M_imag_V_read.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_701_fu_655_p3() {
    tmp_701_fu_655_p3 = inputData_cartesian_M_real_V_read.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_702_fu_663_p3() {
    tmp_702_fu_663_p3 = inputData_cartesian_M_imag_V_read.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_703_fu_699_p3() {
    tmp_703_fu_699_p3 = inputData_cartesian_M_real_V_read.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_704_fu_707_p3() {
    tmp_704_fu_707_p3 = inputData_cartesian_M_imag_V_read.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_705_fu_743_p3() {
    tmp_705_fu_743_p3 = inputData_cartesian_M_real_V_read.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_706_fu_751_p3() {
    tmp_706_fu_751_p3 = inputData_cartesian_M_imag_V_read.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_707_fu_787_p3() {
    tmp_707_fu_787_p3 = inputData_cartesian_M_real_V_read.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_708_fu_795_p3() {
    tmp_708_fu_795_p3 = inputData_cartesian_M_imag_V_read.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_709_fu_831_p3() {
    tmp_709_fu_831_p3 = inputData_cartesian_M_real_V_read.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_70_fu_1075_p3() {
    tmp_70_fu_1075_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_12_fu_759_p2.read(): tmp_69_fu_1067_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_710_fu_839_p3() {
    tmp_710_fu_839_p3 = inputData_cartesian_M_imag_V_read.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_711_fu_1223_p3() {
    tmp_711_fu_1223_p3 = y_V_fu_1197_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_712_fu_1245_p3() {
    tmp_712_fu_1245_p3 = y_V_fu_1197_p2.read().range(2, 2);
}

void cmpy_complex_top_cordic_base::thread_tmp_713_fu_1259_p3() {
    tmp_713_fu_1259_p3 = y_V_fu_1197_p2.read().range(3, 3);
}

void cmpy_complex_top_cordic_base::thread_tmp_714_fu_1273_p3() {
    tmp_714_fu_1273_p3 = y_V_fu_1197_p2.read().range(4, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_715_fu_1287_p3() {
    tmp_715_fu_1287_p3 = y_V_fu_1197_p2.read().range(5, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_716_fu_1301_p3() {
    tmp_716_fu_1301_p3 = y_V_fu_1197_p2.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_717_fu_1315_p3() {
    tmp_717_fu_1315_p3 = y_V_fu_1197_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_718_fu_1329_p3() {
    tmp_718_fu_1329_p3 = y_V_fu_1197_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_719_fu_1343_p3() {
    tmp_719_fu_1343_p3 = y_V_fu_1197_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_71_fu_1083_p3() {
    tmp_71_fu_1083_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_708_fu_795_p3.read(): tmp_707_fu_787_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_720_fu_1357_p3() {
    tmp_720_fu_1357_p3 = y_V_fu_1197_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_721_fu_1371_p3() {
    tmp_721_fu_1371_p3 = y_V_fu_1197_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_722_fu_1385_p3() {
    tmp_722_fu_1385_p3 = y_V_fu_1197_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_723_fu_1399_p3() {
    tmp_723_fu_1399_p3 = y_V_fu_1197_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_724_fu_1413_p3() {
    tmp_724_fu_1413_p3 = y_V_fu_1197_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_725_fu_1427_p3() {
    tmp_725_fu_1427_p3 = y_V_fu_1197_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_726_fu_1441_p3() {
    tmp_726_fu_1441_p3 = y_V_fu_1197_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_727_fu_1455_p3() {
    tmp_727_fu_1455_p3 = y_V_fu_1197_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_728_fu_1469_p3() {
    tmp_728_fu_1469_p3 = y_V_fu_1197_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_729_fu_1483_p3() {
    tmp_729_fu_1483_p3 = y_V_fu_1197_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_72_fu_1091_p3() {
    tmp_72_fu_1091_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_13_fu_803_p2.read(): tmp_71_fu_1083_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_730_fu_1497_p3() {
    tmp_730_fu_1497_p3 = y_V_fu_1197_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_731_fu_1581_p3() {
    tmp_731_fu_1581_p3 = x_V_fu_1156_p2.read().range(2, 2);
}

void cmpy_complex_top_cordic_base::thread_tmp_732_fu_1595_p3() {
    tmp_732_fu_1595_p3 = x_V_fu_1156_p2.read().range(3, 3);
}

void cmpy_complex_top_cordic_base::thread_tmp_733_fu_1609_p3() {
    tmp_733_fu_1609_p3 = x_V_fu_1156_p2.read().range(4, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_734_fu_1623_p3() {
    tmp_734_fu_1623_p3 = x_V_fu_1156_p2.read().range(5, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_735_fu_1637_p3() {
    tmp_735_fu_1637_p3 = x_V_fu_1156_p2.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_736_fu_1651_p3() {
    tmp_736_fu_1651_p3 = x_V_fu_1156_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_737_fu_1665_p3() {
    tmp_737_fu_1665_p3 = x_V_fu_1156_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_738_fu_1679_p3() {
    tmp_738_fu_1679_p3 = x_V_fu_1156_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_739_fu_1693_p3() {
    tmp_739_fu_1693_p3 = x_V_fu_1156_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_73_fu_1099_p3() {
    tmp_73_fu_1099_p3 = (!tmp_1_fu_193_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_1_fu_193_p2.read()[0].to_bool())? tmp_710_fu_839_p3.read(): tmp_709_fu_831_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_740_fu_1707_p3() {
    tmp_740_fu_1707_p3 = x_V_fu_1156_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_741_fu_1721_p3() {
    tmp_741_fu_1721_p3 = x_V_fu_1156_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_742_fu_1735_p3() {
    tmp_742_fu_1735_p3 = x_V_fu_1156_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_743_fu_1749_p3() {
    tmp_743_fu_1749_p3 = x_V_fu_1156_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_744_fu_1763_p3() {
    tmp_744_fu_1763_p3 = x_V_fu_1156_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_745_fu_1777_p3() {
    tmp_745_fu_1777_p3 = x_V_fu_1156_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_746_fu_1791_p3() {
    tmp_746_fu_1791_p3 = x_V_fu_1156_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_747_fu_1805_p3() {
    tmp_747_fu_1805_p3 = x_V_fu_1156_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_748_fu_1819_p3() {
    tmp_748_fu_1819_p3 = x_V_fu_1156_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_749_fu_1833_p3() {
    tmp_749_fu_1833_p3 = x_V_fu_1156_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_74_fu_1107_p3() {
    tmp_74_fu_1107_p3 = (!sel_tmp2_fu_211_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp2_fu_211_p2.read()[0].to_bool())? tmp_43_14_fu_847_p2.read(): tmp_73_fu_1099_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_750_fu_1909_p3() {
    tmp_750_fu_1909_p3 = y_V_1_fu_1893_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_75_fu_1253_p2() {
    tmp_75_fu_1253_p2 = (tmp_712_fu_1245_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_76_fu_1267_p2() {
    tmp_76_fu_1267_p2 = (tmp_713_fu_1259_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_77_fu_1281_p2() {
    tmp_77_fu_1281_p2 = (tmp_714_fu_1273_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_787_fu_2496_p3() {
    tmp_787_fu_2496_p3 = y_V_1_1_fu_2480_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_788_fu_2518_p3() {
    tmp_788_fu_2518_p3 = y_V_1_1_fu_2480_p2.read().range(4, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_789_fu_2532_p3() {
    tmp_789_fu_2532_p3 = y_V_1_1_fu_2480_p2.read().range(5, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_78_fu_1295_p2() {
    tmp_78_fu_1295_p2 = (tmp_715_fu_1287_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_790_fu_2546_p3() {
    tmp_790_fu_2546_p3 = y_V_1_1_fu_2480_p2.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_791_fu_2560_p3() {
    tmp_791_fu_2560_p3 = y_V_1_1_fu_2480_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_792_fu_2574_p3() {
    tmp_792_fu_2574_p3 = y_V_1_1_fu_2480_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_793_fu_2588_p3() {
    tmp_793_fu_2588_p3 = y_V_1_1_fu_2480_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_794_fu_2602_p3() {
    tmp_794_fu_2602_p3 = y_V_1_1_fu_2480_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_795_fu_2616_p3() {
    tmp_795_fu_2616_p3 = y_V_1_1_fu_2480_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_796_fu_2630_p3() {
    tmp_796_fu_2630_p3 = y_V_1_1_fu_2480_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_797_fu_2644_p3() {
    tmp_797_fu_2644_p3 = y_V_1_1_fu_2480_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_798_fu_2658_p3() {
    tmp_798_fu_2658_p3 = y_V_1_1_fu_2480_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_799_fu_2672_p3() {
    tmp_799_fu_2672_p3 = y_V_1_1_fu_2480_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_79_fu_1309_p2() {
    tmp_79_fu_1309_p2 = (tmp_716_fu_1301_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_800_fu_2686_p3() {
    tmp_800_fu_2686_p3 = y_V_1_1_fu_2480_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_801_fu_2700_p3() {
    tmp_801_fu_2700_p3 = y_V_1_1_fu_2480_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_802_fu_2714_p3() {
    tmp_802_fu_2714_p3 = y_V_1_1_fu_2480_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_803_fu_2728_p3() {
    tmp_803_fu_2728_p3 = y_V_1_1_fu_2480_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_804_fu_2742_p3() {
    tmp_804_fu_2742_p3 = y_V_1_1_fu_2480_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_805_fu_2826_p3() {
    tmp_805_fu_2826_p3 = x_V_1_1_fu_2340_p2.read().range(4, 4);
}

void cmpy_complex_top_cordic_base::thread_tmp_806_fu_2840_p3() {
    tmp_806_fu_2840_p3 = x_V_1_1_fu_2340_p2.read().range(5, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_807_fu_2854_p3() {
    tmp_807_fu_2854_p3 = x_V_1_1_fu_2340_p2.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_808_fu_2868_p3() {
    tmp_808_fu_2868_p3 = x_V_1_1_fu_2340_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_809_fu_2882_p3() {
    tmp_809_fu_2882_p3 = x_V_1_1_fu_2340_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_80_fu_1323_p2() {
    tmp_80_fu_1323_p2 = (tmp_717_fu_1315_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_810_fu_2896_p3() {
    tmp_810_fu_2896_p3 = x_V_1_1_fu_2340_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_811_fu_2910_p3() {
    tmp_811_fu_2910_p3 = x_V_1_1_fu_2340_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_812_fu_2924_p3() {
    tmp_812_fu_2924_p3 = x_V_1_1_fu_2340_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_813_fu_2938_p3() {
    tmp_813_fu_2938_p3 = x_V_1_1_fu_2340_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_814_fu_2952_p3() {
    tmp_814_fu_2952_p3 = x_V_1_1_fu_2340_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_815_fu_2966_p3() {
    tmp_815_fu_2966_p3 = x_V_1_1_fu_2340_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_816_fu_2980_p3() {
    tmp_816_fu_2980_p3 = x_V_1_1_fu_2340_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_817_fu_2994_p3() {
    tmp_817_fu_2994_p3 = x_V_1_1_fu_2340_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_818_fu_3008_p3() {
    tmp_818_fu_3008_p3 = x_V_1_1_fu_2340_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_819_fu_3022_p3() {
    tmp_819_fu_3022_p3 = x_V_1_1_fu_2340_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_81_fu_1337_p2() {
    tmp_81_fu_1337_p2 = (tmp_718_fu_1329_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_820_fu_3036_p3() {
    tmp_820_fu_3036_p3 = x_V_1_1_fu_2340_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_821_fu_3050_p3() {
    tmp_821_fu_3050_p3 = x_V_1_1_fu_2340_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_82_fu_1351_p2() {
    tmp_82_fu_1351_p2 = (tmp_719_fu_1343_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_83_fu_1365_p2() {
    tmp_83_fu_1365_p2 = (tmp_720_fu_1357_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_84_fu_1379_p2() {
    tmp_84_fu_1379_p2 = (tmp_721_fu_1371_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_855_fu_3676_p3() {
    tmp_855_fu_3676_p3 = y_V_1_3_fu_3660_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_856_fu_3698_p3() {
    tmp_856_fu_3698_p3 = y_V_1_3_fu_3660_p2.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_857_fu_3712_p3() {
    tmp_857_fu_3712_p3 = y_V_1_3_fu_3660_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_858_fu_3726_p3() {
    tmp_858_fu_3726_p3 = y_V_1_3_fu_3660_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_859_fu_3740_p3() {
    tmp_859_fu_3740_p3 = y_V_1_3_fu_3660_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_85_fu_1393_p2() {
    tmp_85_fu_1393_p2 = (tmp_722_fu_1385_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_860_fu_3754_p3() {
    tmp_860_fu_3754_p3 = y_V_1_3_fu_3660_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_861_fu_3768_p3() {
    tmp_861_fu_3768_p3 = y_V_1_3_fu_3660_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_862_fu_3782_p3() {
    tmp_862_fu_3782_p3 = y_V_1_3_fu_3660_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_863_fu_3796_p3() {
    tmp_863_fu_3796_p3 = y_V_1_3_fu_3660_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_864_fu_3810_p3() {
    tmp_864_fu_3810_p3 = y_V_1_3_fu_3660_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_865_fu_3824_p3() {
    tmp_865_fu_3824_p3 = y_V_1_3_fu_3660_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_866_fu_3838_p3() {
    tmp_866_fu_3838_p3 = y_V_1_3_fu_3660_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_867_fu_3852_p3() {
    tmp_867_fu_3852_p3 = y_V_1_3_fu_3660_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_868_fu_3866_p3() {
    tmp_868_fu_3866_p3 = y_V_1_3_fu_3660_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_869_fu_3880_p3() {
    tmp_869_fu_3880_p3 = y_V_1_3_fu_3660_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_86_fu_1407_p2() {
    tmp_86_fu_1407_p2 = (tmp_723_fu_1399_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_870_fu_3894_p3() {
    tmp_870_fu_3894_p3 = y_V_1_3_fu_3660_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_871_fu_3970_p3() {
    tmp_871_fu_3970_p3 = x_V_1_3_fu_3511_p2.read().range(6, 6);
}

void cmpy_complex_top_cordic_base::thread_tmp_872_fu_3984_p3() {
    tmp_872_fu_3984_p3 = x_V_1_3_fu_3511_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_873_fu_3998_p3() {
    tmp_873_fu_3998_p3 = x_V_1_3_fu_3511_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_874_fu_4012_p3() {
    tmp_874_fu_4012_p3 = x_V_1_3_fu_3511_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_875_fu_4026_p3() {
    tmp_875_fu_4026_p3 = x_V_1_3_fu_3511_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_876_fu_4040_p3() {
    tmp_876_fu_4040_p3 = x_V_1_3_fu_3511_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_877_fu_4054_p3() {
    tmp_877_fu_4054_p3 = x_V_1_3_fu_3511_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_878_fu_4068_p3() {
    tmp_878_fu_4068_p3 = x_V_1_3_fu_3511_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_879_fu_4082_p3() {
    tmp_879_fu_4082_p3 = x_V_1_3_fu_3511_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_87_fu_1421_p2() {
    tmp_87_fu_1421_p2 = (tmp_724_fu_1413_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_880_fu_4096_p3() {
    tmp_880_fu_4096_p3 = x_V_1_3_fu_3511_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_881_fu_4110_p3() {
    tmp_881_fu_4110_p3 = x_V_1_3_fu_3511_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_882_fu_4124_p3() {
    tmp_882_fu_4124_p3 = x_V_1_3_fu_3511_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_883_fu_4138_p3() {
    tmp_883_fu_4138_p3 = x_V_1_3_fu_3511_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_884_fu_4152_p3() {
    tmp_884_fu_4152_p3 = x_V_1_3_fu_3511_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_885_fu_4166_p3() {
    tmp_885_fu_4166_p3 = x_V_1_3_fu_3511_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_886_fu_4479_p3() {
    tmp_886_fu_4479_p3 = y_V_1_4_fu_4463_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_887_fu_4500_p3() {
    tmp_887_fu_4500_p3 = y_V_1_4_fu_4463_p2.read().range(7, 7);
}

void cmpy_complex_top_cordic_base::thread_tmp_888_fu_4514_p3() {
    tmp_888_fu_4514_p3 = y_V_1_4_fu_4463_p2.read().range(8, 8);
}

void cmpy_complex_top_cordic_base::thread_tmp_889_fu_4528_p3() {
    tmp_889_fu_4528_p3 = y_V_1_4_fu_4463_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_88_fu_1435_p2() {
    tmp_88_fu_1435_p2 = (tmp_725_fu_1427_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_890_fu_4542_p3() {
    tmp_890_fu_4542_p3 = y_V_1_4_fu_4463_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_891_fu_4556_p3() {
    tmp_891_fu_4556_p3 = y_V_1_4_fu_4463_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_892_fu_4570_p3() {
    tmp_892_fu_4570_p3 = y_V_1_4_fu_4463_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_893_fu_4584_p3() {
    tmp_893_fu_4584_p3 = y_V_1_4_fu_4463_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_894_fu_4598_p3() {
    tmp_894_fu_4598_p3 = y_V_1_4_fu_4463_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_895_fu_4612_p3() {
    tmp_895_fu_4612_p3 = y_V_1_4_fu_4463_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_896_fu_4626_p3() {
    tmp_896_fu_4626_p3 = y_V_1_4_fu_4463_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_897_fu_4640_p3() {
    tmp_897_fu_4640_p3 = y_V_1_4_fu_4463_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_898_fu_4654_p3() {
    tmp_898_fu_4654_p3 = y_V_1_4_fu_4463_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_899_fu_4668_p3() {
    tmp_899_fu_4668_p3 = y_V_1_4_fu_4463_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_89_fu_1449_p2() {
    tmp_89_fu_1449_p2 = (tmp_726_fu_1441_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_900_fu_4682_p3() {
    tmp_900_fu_4682_p3 = y_V_1_4_fu_4463_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_90_fu_1463_p2() {
    tmp_90_fu_1463_p2 = (tmp_727_fu_1455_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_915_fu_4898_p3() {
    tmp_915_fu_4898_p3 = y_V_1_5_fu_4882_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_91_fu_1477_p2() {
    tmp_91_fu_1477_p2 = (tmp_728_fu_1469_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_92_fu_1491_p2() {
    tmp_92_fu_1491_p2 = (tmp_729_fu_1483_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_93_fu_1505_p2() {
    tmp_93_fu_1505_p2 = (tmp_730_fu_1497_p3.read() ^ tmp_711_fu_1223_p3.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_942_fu_5506_p3() {
    tmp_942_fu_5506_p3 = y_V_1_6_fu_5490_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_943_fu_5528_p3() {
    tmp_943_fu_5528_p3 = y_V_1_6_fu_5490_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_944_fu_5542_p3() {
    tmp_944_fu_5542_p3 = y_V_1_6_fu_5490_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_945_fu_5556_p3() {
    tmp_945_fu_5556_p3 = y_V_1_6_fu_5490_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_946_fu_5570_p3() {
    tmp_946_fu_5570_p3 = y_V_1_6_fu_5490_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_947_fu_5584_p3() {
    tmp_947_fu_5584_p3 = y_V_1_6_fu_5490_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_948_fu_5598_p3() {
    tmp_948_fu_5598_p3 = y_V_1_6_fu_5490_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_949_fu_5612_p3() {
    tmp_949_fu_5612_p3 = y_V_1_6_fu_5490_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_94_fu_8232_p4() {
    tmp_94_fu_8232_p4 = z_V_12_fu_8156_p2.read().range(20, 5);
}

void cmpy_complex_top_cordic_base::thread_tmp_950_fu_5626_p3() {
    tmp_950_fu_5626_p3 = y_V_1_6_fu_5490_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_951_fu_5640_p3() {
    tmp_951_fu_5640_p3 = y_V_1_6_fu_5490_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_952_fu_5654_p3() {
    tmp_952_fu_5654_p3 = y_V_1_6_fu_5490_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_953_fu_5668_p3() {
    tmp_953_fu_5668_p3 = y_V_1_6_fu_5490_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_954_fu_5682_p3() {
    tmp_954_fu_5682_p3 = y_V_1_6_fu_5490_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_955_fu_5766_p3() {
    tmp_955_fu_5766_p3 = x_V_1_6_fu_5370_p2.read().range(9, 9);
}

void cmpy_complex_top_cordic_base::thread_tmp_956_fu_5780_p3() {
    tmp_956_fu_5780_p3 = x_V_1_6_fu_5370_p2.read().range(10, 10);
}

void cmpy_complex_top_cordic_base::thread_tmp_957_fu_5794_p3() {
    tmp_957_fu_5794_p3 = x_V_1_6_fu_5370_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_958_fu_5808_p3() {
    tmp_958_fu_5808_p3 = x_V_1_6_fu_5370_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_959_fu_5822_p3() {
    tmp_959_fu_5822_p3 = x_V_1_6_fu_5370_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_95_fu_1589_p2() {
    tmp_95_fu_1589_p2 = (tmp_731_fu_1581_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_960_fu_5836_p3() {
    tmp_960_fu_5836_p3 = x_V_1_6_fu_5370_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_961_fu_5850_p3() {
    tmp_961_fu_5850_p3 = x_V_1_6_fu_5370_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_962_fu_5864_p3() {
    tmp_962_fu_5864_p3 = x_V_1_6_fu_5370_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_963_fu_5878_p3() {
    tmp_963_fu_5878_p3 = x_V_1_6_fu_5370_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_964_fu_5892_p3() {
    tmp_964_fu_5892_p3 = x_V_1_6_fu_5370_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_965_fu_5906_p3() {
    tmp_965_fu_5906_p3 = x_V_1_6_fu_5370_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_966_fu_5920_p3() {
    tmp_966_fu_5920_p3 = x_V_1_6_fu_5370_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_96_fu_1603_p2() {
    tmp_96_fu_1603_p2 = (tmp_732_fu_1595_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_97_fu_1617_p2() {
    tmp_97_fu_1617_p2 = (tmp_733_fu_1609_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_98_fu_1631_p2() {
    tmp_98_fu_1631_p2 = (tmp_734_fu_1623_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_990_fu_6568_p3() {
    tmp_990_fu_6568_p3 = y_V_1_8_fu_6502_p2.read().range(20, 20);
}

void cmpy_complex_top_cordic_base::thread_tmp_991_fu_6590_p3() {
    tmp_991_fu_6590_p3 = y_V_1_8_fu_6502_p2.read().range(11, 11);
}

void cmpy_complex_top_cordic_base::thread_tmp_992_fu_6604_p3() {
    tmp_992_fu_6604_p3 = y_V_1_8_fu_6502_p2.read().range(12, 12);
}

void cmpy_complex_top_cordic_base::thread_tmp_993_fu_6618_p3() {
    tmp_993_fu_6618_p3 = y_V_1_8_fu_6502_p2.read().range(13, 13);
}

void cmpy_complex_top_cordic_base::thread_tmp_994_fu_6632_p3() {
    tmp_994_fu_6632_p3 = y_V_1_8_fu_6502_p2.read().range(14, 14);
}

void cmpy_complex_top_cordic_base::thread_tmp_995_fu_6646_p3() {
    tmp_995_fu_6646_p3 = y_V_1_8_fu_6502_p2.read().range(15, 15);
}

void cmpy_complex_top_cordic_base::thread_tmp_996_fu_6660_p3() {
    tmp_996_fu_6660_p3 = y_V_1_8_fu_6502_p2.read().range(16, 16);
}

void cmpy_complex_top_cordic_base::thread_tmp_997_fu_6674_p3() {
    tmp_997_fu_6674_p3 = y_V_1_8_fu_6502_p2.read().range(17, 17);
}

void cmpy_complex_top_cordic_base::thread_tmp_998_fu_6688_p3() {
    tmp_998_fu_6688_p3 = y_V_1_8_fu_6502_p2.read().range(18, 18);
}

void cmpy_complex_top_cordic_base::thread_tmp_999_fu_6702_p3() {
    tmp_999_fu_6702_p3 = y_V_1_8_fu_6502_p2.read().range(19, 19);
}

void cmpy_complex_top_cordic_base::thread_tmp_99_fu_1645_p2() {
    tmp_99_fu_1645_p2 = (tmp_735_fu_1637_p3.read() ^ rev_fu_1231_p2.read());
}

void cmpy_complex_top_cordic_base::thread_tmp_fu_8186_p3() {
    tmp_fu_8186_p3 = (!tmp_1056_fu_8178_p3.read()[0].is_01())? sc_lv<20>(): ((tmp_1056_fu_8178_p3.read()[0].to_bool())? ap_const_lv20_6487F: ap_const_lv20_9B781);
}

void cmpy_complex_top_cordic_base::thread_tmp_s_fu_185_p3() {
    tmp_s_fu_185_p3 = esl_concat<1,1>(tmp_680_fu_177_p3.read(), ap_const_lv1_0);
}

void cmpy_complex_top_cordic_base::thread_x_V_1_10_fu_7720_p2() {
    x_V_1_10_fu_7720_p2 = (!p_Result_149_10_fu_7636_p3.read().is_01() || !p_Result_153_10_fu_7675_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_10_fu_7636_p3.read()) + sc_biguint<21>(p_Result_153_10_fu_7675_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_1_fu_2340_p2() {
    x_V_1_1_fu_2340_p2 = (!p_Result_149_1_fu_2216_p3.read().is_01() || !p_Result_153_1_fu_2295_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_1_fu_2216_p3.read()) + sc_biguint<21>(p_Result_153_1_fu_2295_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_2_fu_2802_p2() {
    x_V_1_2_fu_2802_p2 = (!p_Result_149_2_fu_2510_p3.read().is_01() || !p_Result_153_2_fu_2756_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_2_fu_2510_p3.read()) + sc_biguint<21>(p_Result_153_2_fu_2756_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_3_fu_3511_p2() {
    x_V_1_3_fu_3511_p2 = (!p_Result_149_3_fu_3395_p3.read().is_01() || !p_Result_153_3_fu_3466_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_3_fu_3395_p3.read()) + sc_biguint<21>(p_Result_153_3_fu_3466_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_4_fu_3954_p2() {
    x_V_1_4_fu_3954_p2 = (!p_Result_149_4_fu_3690_p3.read().is_01() || !p_Result_153_4_fu_3908_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_4_fu_3690_p3.read()) + sc_biguint<21>(p_Result_153_4_fu_3908_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_5_fu_4742_p2() {
    x_V_1_5_fu_4742_p2 = (!p_Result_149_5_fu_4493_p3.read().is_01() || !p_Result_153_5_fu_4696_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_5_fu_4493_p3.read()) + sc_biguint<21>(p_Result_153_5_fu_4696_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_6_fu_5370_p2() {
    x_V_1_6_fu_5370_p2 = (!p_Result_149_6_fu_5266_p3.read().is_01() || !p_Result_153_6_fu_5325_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_6_fu_5266_p3.read()) + sc_biguint<21>(p_Result_153_6_fu_5325_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_7_fu_5742_p2() {
    x_V_1_7_fu_5742_p2 = (!p_Result_149_7_fu_5520_p3.read().is_01() || !p_Result_153_7_fu_5696_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_7_fu_5520_p3.read()) + sc_biguint<21>(p_Result_153_7_fu_5696_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_8_fu_6378_p2() {
    x_V_1_8_fu_6378_p2 = (!p_Result_149_8_fu_6282_p3.read().is_01() || !p_Result_153_8_fu_6333_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_8_fu_6282_p3.read()) + sc_biguint<21>(p_Result_153_8_fu_6333_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_9_fu_6776_p2() {
    x_V_1_9_fu_6776_p2 = (!p_Result_149_9_fu_6582_p3.read().is_01() || !p_Result_153_9_fu_6730_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_9_fu_6582_p3.read()) + sc_biguint<21>(p_Result_153_9_fu_6730_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_fu_1557_p2() {
    x_V_1_fu_1557_p2 = (!p_Result_s_24_fu_1237_p3.read().is_01() || !p_Result_3_fu_1511_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_s_24_fu_1237_p3.read()) + sc_biguint<21>(p_Result_3_fu_1511_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_1_s_fu_7293_p2() {
    x_V_1_s_fu_7293_p2 = (!p_Result_149_s_fu_7114_p3.read().is_01() || !p_Result_153_s_fu_7247_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_149_s_fu_7114_p3.read()) + sc_biguint<21>(p_Result_153_s_fu_7247_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_x_V_fu_1156_p2() {
    x_V_fu_1156_p2 = (!ap_const_lv21_1.is_01() || !p_Result_s_fu_1125_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(p_Result_s_fu_1125_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_10_fu_7810_p2() {
    y_V_1_10_fu_7810_p2 = (!p_Result_155_10_fu_7726_p3.read().is_01() || !p_Result_159_10_fu_7765_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_10_fu_7726_p3.read()) + sc_biguint<21>(p_Result_159_10_fu_7765_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_11_fu_8040_p2() {
    y_V_1_11_fu_8040_p2 = (!p_Result_155_11_fu_7888_p3.read().is_01() || !p_Result_159_11_fu_7994_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_11_fu_7888_p3.read()) + sc_biguint<21>(p_Result_159_11_fu_7994_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_1_fu_2480_p2() {
    y_V_1_1_fu_2480_p2 = (!p_Result_155_1_fu_2356_p3.read().is_01() || !p_Result_159_1_fu_2435_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_1_fu_2356_p3.read()) + sc_biguint<21>(p_Result_159_1_fu_2435_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_2_fu_3110_p2() {
    y_V_1_2_fu_3110_p2 = (!p_Result_155_2_fu_2818_p3.read().is_01() || !p_Result_159_2_fu_3064_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_2_fu_2818_p3.read()) + sc_biguint<21>(p_Result_159_2_fu_3064_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_3_fu_3660_p2() {
    y_V_1_3_fu_3660_p2 = (!p_Result_155_3_fu_3527_p3.read().is_01() || !p_Result_159_3_fu_3614_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_3_fu_3527_p3.read()) + sc_biguint<21>(p_Result_159_3_fu_3614_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_4_fu_4463_p2() {
    y_V_1_4_fu_4463_p2 = (!p_Result_155_4_fu_4431_p3.read().is_01() || !p_Result_159_4_fu_4438_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_4_fu_4431_p3.read()) + sc_biguint<21>(p_Result_159_4_fu_4438_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_5_fu_4882_p2() {
    y_V_1_5_fu_4882_p2 = (!p_Result_155_5_fu_4758_p3.read().is_01() || !p_Result_159_5_fu_4836_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_5_fu_4758_p3.read()) + sc_biguint<21>(p_Result_159_5_fu_4836_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_6_fu_5490_p2() {
    y_V_1_6_fu_5490_p2 = (!p_Result_155_6_fu_5386_p3.read().is_01() || !p_Result_159_6_fu_5445_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_6_fu_5386_p3.read()) + sc_biguint<21>(p_Result_159_6_fu_5445_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_7_fu_5980_p2() {
    y_V_1_7_fu_5980_p2 = (!p_Result_155_7_fu_5758_p3.read().is_01() || !p_Result_159_7_fu_5934_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_7_fu_5758_p3.read()) + sc_biguint<21>(p_Result_159_7_fu_5934_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_8_fu_6502_p2() {
    y_V_1_8_fu_6502_p2 = (!p_Result_155_8_fu_6394_p3.read().is_01() || !p_Result_159_8_fu_6456_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_8_fu_6394_p3.read()) + sc_biguint<21>(p_Result_159_8_fu_6456_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_9_fu_7036_p2() {
    y_V_1_9_fu_7036_p2 = (!p_Result_155_9_fu_7004_p3.read().is_01() || !p_Result_159_9_fu_7011_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_9_fu_7004_p3.read()) + sc_biguint<21>(p_Result_159_9_fu_7011_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_fu_1893_p2() {
    y_V_1_fu_1893_p2 = (!p_Result_7_fu_1847_p22.read().is_01() || !p_Result_5_fu_1573_p3.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_7_fu_1847_p22.read()) + sc_biguint<21>(p_Result_5_fu_1573_p3.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_1_s_fu_7408_p2() {
    y_V_1_s_fu_7408_p2 = (!p_Result_155_s_fu_7309_p3.read().is_01() || !p_Result_159_s_fu_7362_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_155_s_fu_7309_p3.read()) + sc_biguint<21>(p_Result_159_s_fu_7362_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_y_V_fu_1197_p2() {
    y_V_fu_1197_p2 = (!ap_const_lv21_1.is_01() || !p_Result_1_fu_1172_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(p_Result_1_fu_1172_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_10_fu_7858_p2() {
    z_V_10_fu_7858_p2 = (!p_Result_161_10_fu_7826_p3.read().is_01() || !p_Result_165_10_fu_7833_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_10_fu_7826_p3.read()) + sc_biguint<21>(p_Result_165_10_fu_7833_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_11_fu_8100_p2() {
    z_V_11_fu_8100_p2 = (!p_Result_161_11_fu_8046_p3.read().is_01() || !p_Result_165_11_fu_8054_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_11_fu_8046_p3.read()) + sc_biguint<21>(p_Result_165_11_fu_8054_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_12_fu_8156_p2() {
    z_V_12_fu_8156_p2 = (!p_Result_161_12_fu_8124_p3.read().is_01() || !p_Result_165_12_fu_8131_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_12_fu_8124_p3.read()) + sc_biguint<21>(p_Result_165_12_fu_8131_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_1_fu_4366_p2() {
    z_V_1_fu_4366_p2 = (!p_Result_161_1_fu_4333_p3.read().is_01() || !p_Result_165_1_fu_4341_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_1_fu_4333_p3.read()) + sc_biguint<21>(p_Result_165_1_fu_4341_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_2_fu_4415_p2() {
    z_V_2_fu_4415_p2 = (!p_Result_161_2_fu_4382_p3.read().is_01() || !p_Result_165_2_fu_4390_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_2_fu_4382_p3.read()) + sc_biguint<21>(p_Result_165_2_fu_4390_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_3_fu_5152_p2() {
    z_V_3_fu_5152_p2 = (!p_Result_161_3_fu_5120_p3.read().is_01() || !p_Result_165_3_fu_5127_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_3_fu_5120_p3.read()) + sc_biguint<21>(p_Result_165_3_fu_5127_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_4_fu_5201_p2() {
    z_V_4_fu_5201_p2 = (!p_Result_161_4_fu_5168_p3.read().is_01() || !p_Result_165_4_fu_5176_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_4_fu_5168_p3.read()) + sc_biguint<21>(p_Result_165_4_fu_5176_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_5_fu_5250_p2() {
    z_V_5_fu_5250_p2 = (!p_Result_161_5_fu_5217_p3.read().is_01() || !p_Result_165_5_fu_5225_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_5_fu_5217_p3.read()) + sc_biguint<21>(p_Result_165_5_fu_5225_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_6_fu_6212_p2() {
    z_V_6_fu_6212_p2 = (!p_Result_161_6_fu_6180_p3.read().is_01() || !p_Result_165_6_fu_6187_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_6_fu_6180_p3.read()) + sc_biguint<21>(p_Result_165_6_fu_6187_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_7_fu_6261_p2() {
    z_V_7_fu_6261_p2 = (!p_Result_161_7_fu_6228_p3.read().is_01() || !p_Result_165_7_fu_6236_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_7_fu_6228_p3.read()) + sc_biguint<21>(p_Result_165_7_fu_6236_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_8_fu_6552_p2() {
    z_V_8_fu_6552_p2 = (!p_Result_161_8_fu_6518_p3.read().is_01() || !p_Result_165_8_fu_6526_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_8_fu_6518_p3.read()) + sc_biguint<21>(p_Result_165_8_fu_6526_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_9_fu_7084_p2() {
    z_V_9_fu_7084_p2 = (!p_Result_161_9_fu_7052_p3.read().is_01() || !p_Result_165_9_fu_7059_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_9_fu_7052_p3.read()) + sc_biguint<21>(p_Result_165_9_fu_7059_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_fu_4317_p2() {
    z_V_fu_4317_p2 = (!ap_const_lv21_1.is_01() || !p_Result_9_fu_4292_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(ap_const_lv21_1) + sc_biguint<21>(p_Result_9_fu_4292_p22.read()));
}

void cmpy_complex_top_cordic_base::thread_z_V_s_fu_7478_p2() {
    z_V_s_fu_7478_p2 = (!p_Result_161_s_fu_7424_p3.read().is_01() || !p_Result_165_s_fu_7432_p22.read().is_01())? sc_lv<21>(): (sc_biguint<21>(p_Result_161_s_fu_7424_p3.read()) + sc_biguint<21>(p_Result_165_s_fu_7432_p22.read()));
}

}

