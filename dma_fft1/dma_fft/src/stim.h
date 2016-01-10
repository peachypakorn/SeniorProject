
// Linear combination of 2 sine waves
//float sig_two_sine_waves[8192] =
//{
//        2.4207 ,   2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,
//       -0.7210 ,  -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,
//		-1.6137 ,  -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,
//		 1.5750 ,   1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,
//		 1.4269 ,   1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,
//	    -4.3681 ,  -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,
//		 3.7082 ,   3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,
//		 0.5024 ,   0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,
//       -4.2518 ,  -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,
//        3.6676 ,   3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,
//        0.7550 ,   1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,
//       -4.4955 ,  -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,
//        3.6940 ,   3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,
//        0.8327 ,   0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,
//       -4.5535 ,  -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,
//        4.0389 ,   4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,
//       -0.3797 ,  -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,
//        2.3420 ,  -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,
//        1.5753 ,   2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,
//        1.2572 ,   1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,
//       -2.8465 ,  -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,
//        1.8880 ,   2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,
//       -0.2406 ,  -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,
//        0.2688 ,  -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,
//       -1.7983 ,  -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,
//        2.4207 ,   2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,
//       -0.7210 ,  -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,
//       -1.6137 ,  -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,
//        1.5750 ,   1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,
//        1.4269 ,   1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,
//       -4.3681 ,  -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,
//        3.7082 ,   3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,
//        0.5024 ,   0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,
//       -4.2518 ,  -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,
//        3.6676 ,   3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,
//        0.7550 ,   1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,
//       -4.4955 ,  -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,
//        3.6940 ,   3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,
//        0.8327 ,   0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,
//       -4.5535 ,  -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,
//        4.0389 ,   4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,
//       -0.3797 ,  -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,
//       -2.3420 ,  -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,
//        1.5753 ,   2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,
//        1.2572 ,   1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,
//       -2.8465 ,  -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,
//        1.8880 ,   2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,
//       -0.2406 ,  -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,
//        0.2688 ,  -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,
//       -1.7983 ,  -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,
//        2.4207 ,   2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,
//       -0.7210 ,  -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,   -4.2518 ,   -3.7817 ,   -3.1697 ,   -2.4376 ,
//       -1.6137 ,  -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,    3.6676 ,    3.2356 ,    2.7199 ,    2.1546 ,
//        1.5750 ,   1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,    0.7550 ,    1.0407 ,    1.2649 ,    1.4008 ,
//        1.4269 ,   1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,   -4.4955 ,   -4.7197 ,   -4.7765 ,   -4.6588 ,
//       -4.3681 ,  -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,    3.6940 ,    3.8881 ,    3.9463 ,    3.8805 ,
//        3.7082 ,   3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,    0.8327 ,    0.7852 ,    0.7266 ,    0.6381 ,
//        0.5024 ,   0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641 ,   -4.5535 ,   -4.7105 ,   -4.7180 ,   -4.5659 ,
//       -4.2518 ,  -3.7817 ,   -3.1697 ,   -2.4376 ,   -1.6137 ,   -0.7317 ,    0.1714 ,    1.0572 ,    1.8880 ,    2.6285 ,    3.2486 ,    3.7241 ,    4.0389 ,    4.1851 ,    4.1639 ,    3.9854 ,
//        3.6676 ,   3.2356 ,    2.7199 ,    2.1546 ,    1.5750 ,    1.0162 ,    0.5101 ,    0.0841 ,   -0.2406 ,   -0.4505 ,   -0.5402 ,   -0.5128 ,   -0.3797 ,   -0.1595 ,    0.1229 ,    0.4383 ,
//        0.7550 ,   1.0407 ,    1.2649 ,    1.4008 ,    1.4269 ,    1.3290 ,    1.1006 ,    0.7436 ,    0.2688 ,   -0.3054 ,   -0.9533 ,   -1.6439 ,   -2.3420 ,   -3.0112 ,   -3.6149 ,   -4.1195 ,
//       -4.4955 ,  -4.7197 ,   -4.7765 ,   -4.6588 ,   -4.3681 ,   -3.9148 ,   -3.3174 ,   -2.6015 ,   -1.7983 ,   -0.9426 ,   -0.0711 ,    0.7796 ,    1.5753 ,    2.2857 ,    2.8863 ,    3.3592 ,
//        3.6940 ,   3.8881 ,    3.9463 ,    3.8805 ,    3.7082 ,    3.4511 ,    3.1340 ,    2.7823 ,    2.4207 ,    2.0717 ,    1.7535 ,    1.4794 ,    1.2572 ,    1.0884 ,    0.9686 ,    0.8881 ,
//        0.8327 ,   0.7852 ,    0.7266 ,    0.6381 ,    0.5024 ,    0.3053 ,    0.0373 ,   -0.3055 ,   -0.7210 ,   -1.2004 ,   -1.7289 ,   -2.2859 ,   -2.8465 ,   -3.3826 ,   -3.8648 ,   -4.2641
//};

#define FFT_MAX_NUM_PTS      8192
// Linear combination of 2 sine waves
//int sig_two_sine_waves[FFT_MAX_NUM_PTS] =
//{
//    16384,     8612,     -1337,     2582,     10328,     4163,     -8996,     -9664,     -540,     -1274,     -12721,     -15195,     -3892,     2413,     -4918,     -9055,
//    1598,     12103,     7531,     -477,     4968,     15313,     11869,     -469,     -1931,     6696,     5809,     -7273,     -13070,     -4700,     42,     -8965,
//    -15760,     -7071,     3652,     290,     -7166,     -1007,     11851,     11952,     2047,     1859,     12330,     13864,     1745,     -5174,     1799,     5871,
//    -4551,     -14548,     -9241,     -337,     -4812,     -14199,     -9902,     3105,     4990,     -3500,     -2774,     9864,     14974,     5739,     37,     8075,
//    13985,     4576,     -6634,     -3480,     4066,     -1714,     -13939,     -13211,     -2360,     -1197,     -10754,     -11522,     1144,     8342,     1350,     -3034,
//    6811,     16020,     9788,     -93,     3445,     12024,     7121,     -6232,     -8171,     562,     353,     -11540,     -15751,     -5543,     1114,     -6077,
//    -11327,     -1506,     9829,     6503,     -1499,     3586,     14942,     13251,     1432,     -611,     8234,     8526,     -4337,     -11432,     -4051,     976,
//    -8035,     -16295,     -9087,     1702,     -1077,     -9118,     -3949,     9374,     10990,     1670,     1084,     12048,     15282,     4141,     -3318,     3277,
//    8192,     -1671,     -12752,     -8898,     -145,     -4325,     -14707,     -12064,     596,     3291,     -5154,     -5332,     7346,     13976,     5891,     -10,
//    8035,     15329,     7247,     -4246,     -1933,     5923,     868,     -12054,     -13017,     -2857,     -1319,     -11310,     -13638,     -1747,     6240,     -100,
//    -5057,     4471,     14956,     10299,     614,     3817,     13270,     9831,     -3415,     -6433,     1982,     2426,     -9715,     -15586,     -6591,     285,
//    -6811,     -13271,     -4546,     7337,     5125,     -2927,     1652,     13862,     13945,     2817,     316,     9437,     11071,     -1276,     -9435,     -2970,
//    2399,     -6469,     -16106,     -10495,     163,     -2140,     -10849,     -6894,     6596,     9560,     800,     -250,     11081,     16016,     6045,     -1757,
//    4551,     10434,     1397,     -10504,     -8015,     585,     -3227,     -14524,     -13632,     -1558,     1771,     -6716,     -7970,     4466,     12417,     5465,
//    -624,     7359,     16028,     9456,     -2067,     -450,     7814,     3697,     -9654,     -12196,     -2766,     -863,     -11238,     -15201,     -4335,     4203,
//    -1598,     -7250,     1722,     13266,     10161,     746,     3619,     13939,     12125,     -730,     -4626,     3560,     4809,     -7338,     -14732,     -7007,
//    0,     -7007,     -14732,     -7338,     4809,     3560,     -4626,     -730,     12125,     13939,     3619,     746,     10161,     13266,     1722,     -7250,
//    -1598,     4203,     -4335,     -15201,     -11238,     -863,     -2766,     -12196,     -9654,     3697,     7814,     -450,     -2067,     9456,     16028,     7359,
//    -624,     5465,     12417,     4466,     -7970,     -6716,     1771,     -1558,     -13632,     -14524,     -3227,     585,     -8015,     -10504,     1397,     10434,
//    4551,     -1757,     6045,     16016,     11081,     -250,     800,     9560,     6596,     -6894,     -10849,     -2140,     163,     -10495,     -16106,     -6469,
//    2399,     -2970,     -9435,     -1276,     11071,     9437,     316,     2817,     13945,     13862,     1652,     -2927,     5125,     7337,     -4546,     -13271,
//    -6811,     285,     -6591,     -15586,     -9715,     2426,     1982,     -6433,     -3415,     9831,     13270,     3817,     614,     10299,     14956,     4471,
//    -5057,     -100,     6240,     -1747,     -13638,     -11310,     -1319,     -2857,     -13017,     -12054,     868,     5923,     -1933,     -4246,     7247,     15329,
//    8035,     -10,     5891,     13976,     7346,     -5332,     -5154,     3291,     596,     -12064,     -14707,     -4325,     -145,     -8898,     -12752,     -1671,
//    8192,     3277,     -3318,     4141,     15282,     12048,     1084,     1670,     10990,     9374,     -3949,     -9118,     -1077,     1702,     -9087,     -16295,
//    -8035,     976,     -4051,     -11432,     -4337,     8526,     8234,     -611,     1432,     13251,     14942,     3586,     -1499,     6503,     9829,     -1506,
//    -11327,     -6077,     1114,     -5543,     -15751,     -11540,     353,     562,     -8171,     -6232,     7121,     12024,     3445,     -93,     9788,     16020,
//    6811,     -3034,     1350,     8342,     1144,     -11522,     -10754,     -1197,     -2360,     -13211,     -13939,     -1714,     4066,     -3480,     -6634,     4576,
//    13985,     8075,     37,     5739,     14974,     9864,     -2774,     -3500,     4990,     3105,     -9902,     -14199,     -4812,     -337,     -9241,     -14548,
//    -4551,     5871,     1799,     -5174,     1745,     13864,     12330,     1859,     2047,     11952,     11851,     -1007,     -7166,     290,     3652,     -7071,
//    -15760,     -8965,     42,     -4700,     -13070,     -7273,     5809,     6696,     -1931,     -469,     11869,     15313,     4968,     -477,     7531,     12103,
//    1598,     -9055,     -4918,     2413,     -3892,     -15195,     -12721,     -1274,     -540,     -9664,     -8996,     4163,     10328,     2582,     -1337,     8612,
//    16384,     8612,     -1337,     2582,     10328,     4163,     -8996,     -9664,     -540,     -1274,     -12721,     -15195,     -3892,     2413,     -4918,     -9055,
//    1598,     12103,     7531,     -477,     4968,     15313,     11869,     -469,     -1931,     6696,     5809,     -7273,     -13070,     -4700,     42,     -8965,
//    -15760,     -7071,     3652,     290,     -7166,     -1007,     11851,     11952,     2047,     1859,     12330,     13864,     1745,     -5174,     1799,     5871,
//    -4551,     -14548,     -9241,     -337,     -4812,     -14199,     -9902,     3105,     4990,     -3500,     -2774,     9864,     14974,     5739,     37,     8075,
//    13985,     4576,     -6634,     -3480,     4066,     -1714,     -13939,     -13211,     -2360,     -1197,     -10754,     -11522,     1144,     8342,     1350,     -3034,
//    6811,     16020,     9788,     -93,     3445,     12024,     7121,     -6232,     -8171,     562,     353,     -11540,     -15751,     -5543,     1114,     -6077,
//    -11327,     -1506,     9829,     6503,     -1499,     3586,     14942,     13251,     1432,     -611,     8234,     8526,     -4337,     -11432,     -4051,     976,
//    -8035,     -16295,     -9087,     1702,     -1077,     -9118,     -3949,     9374,     10990,     1670,     1084,     12048,     15282,     4141,     -3318,     3277,
//    8192,     -1671,     -12752,     -8898,     -145,     -4325,     -14707,     -12064,     596,     3291,     -5154,     -5332,     7346,     13976,     5891,     -10,
//    8035,     15329,     7247,     -4246,     -1933,     5923,     868,     -12054,     -13017,     -2857,     -1319,     -11310,     -13638,     -1747,     6240,     -100,
//    -5057,     4471,     14956,     10299,     614,     3817,     13270,     9831,     -3415,     -6433,     1982,     2426,     -9715,     -15586,     -6591,     285,
//    -6811,     -13271,     -4546,     7337,     5125,     -2927,     1652,     13862,     13945,     2817,     316,     9437,     11071,     -1276,     -9435,     -2970,
//    2399,     -6469,     -16106,     -10495,     163,     -2140,     -10849,     -6894,     6596,     9560,     800,     -250,     11081,     16016,     6045,     -1757,
//    4551,     10434,     1397,     -10504,     -8015,     585,     -3227,     -14524,     -13632,     -1558,     1771,     -6716,     -7970,     4466,     12417,     5465,
//    -624,     7359,     16028,     9456,     -2067,     -450,     7814,     3697,     -9654,     -12196,     -2766,     -863,     -11238,     -15201,     -4335,     4203,
//    -1598,     -7250,     1722,     13266,     10161,     746,     3619,     13939,     12125,     -730,     -4626,     3560,     4809,     -7338,     -14732,     -7007,
//    0,     -7007,     -14732,     -7338,     4809,     3560,     -4626,     -730,     12125,     13939,     3619,     746,     10161,     13266,     1722,     -7250,
//    -1598,     4203,     -4335,     -15201,     -11238,     -863,     -2766,     -12196,     -9654,     3697,     7814,     -450,     -2067,     9456,     16028,     7359,
//    -624,     5465,     12417,     4466,     -7970,     -6716,     1771,     -1558,     -13632,     -14524,     -3227,     585,     -8015,     -10504,     1397,     10434,
//    4551,     -1757,     6045,     16016,     11081,     -250,     800,     9560,     6596,     -6894,     -10849,     -2140,     163,     -10495,     -16106,     -6469,
//    2399,     -2970,     -9435,     -1276,     11071,     9437,     316,     2817,     13945,     13862,     1652,     -2927,     5125,     7337,     -4546,     -13271,
//    -6811,     285,     -6591,     -15586,     -9715,     2426,     1982,     -6433,     -3415,     9831,     13270,     3817,     614,     10299,     14956,     4471,
//    -5057,     -100,     6240,     -1747,     -13638,     -11310,     -1319,     -2857,     -13017,     -12054,     868,     5923,     -1933,     -4246,     7247,     15329,
//    8035,     -10,     5891,     13976,     7346,     -5332,     -5154,     3291,     596,     -12064,     -14707,     -4325,     -145,     -8898,     -12752,     -1671,
//    8192,     3277,     -3318,     4141,     15282,     12048,     1084,     1670,     10990,     9374,     -3949,     -9118,     -1077,     1702,     -9087,     -16295,
//    -8035,     976,     -4051,     -11432,     -4337,     8526,     8234,     -611,     1432,     13251,     14942,     3586,     -1499,     6503,     9829,     -1506,
//    -11327,     -6077,     1114,     -5543,     -15751,     -11540,     353,     562,     -8171,     -6232,     7121,     12024,     3445,     -93,     9788,     16020,
//    6811,     -3034,     1350,     8342,     1144,     -11522,     -10754,     -1197,     -2360,     -13211,     -13939,     -1714,     4066,     -3480,     -6634,     4576,
//    13985,     8075,     37,     5739,     14974,     9864,     -2774,     -3500,     4990,     3105,     -9902,     -14199,     -4812,     -337,     -9241,     -14548,
//    -4551,     5871,     1799,     -5174,     1745,     13864,     12330,     1859,     2047,     11952,     11851,     -1007,     -7166,     290,     3652,     -7071,
//    -15760,     -8965,     42,     -4700,     -13070,     -7273,     5809,     6696,     -1931,     -469,     11869,     15313,     4968,     -477,     7531,     12103,
//    1598,     -9055,     -4918,     2413,     -3892,     -15195,     -12721,     -1274,     -540,     -9664,     -8996,     4163,     10328,     2582,     -1337,     -1337
//};
//
int sig_two_sine_waves[FFT_MAX_NUM_PTS] ={
     9915   ,     8486  ,      7182    ,    6060   ,     5150   ,     4458    ,    3967     ,   3638    ,    3411    ,    3216   ,     2976   ,     2614    ,    2058   ,     1251    ,     153    ,   -1251 ,
    -2953   ,    -4917  ,     -7081    ,   -9363   ,   -11659   ,   -13855    ,  -15830     , -17466    ,  -18651    ,  -19294   ,   -19325   ,   -18702    ,  -17415   ,   -15490    ,  -12983    ,   -9984 ,
    -6610   ,    -2997  ,       702    ,    4330   ,     7733   ,    10766    ,   13306     ,  15254    ,   16543    ,   17142   ,    17055   ,    16324    ,   15022   ,    13253    ,   11141    ,    8825 ,
     6451   ,     4162  ,      2089    ,     345   ,     -986   ,    -1845    ,   -2213     ,  -2100    ,   -1555    ,    -654   ,      503   ,     1795    ,    3092   ,     4263    ,    5181    ,    5737 ,
     5845   ,     5444  ,      4508    ,    3046   ,     1101   ,    -1251    ,   -3905     ,  -6733    ,   -9593    ,  -12334   ,   -14807   ,   -16873    ,  -18413   ,   -19332    ,  -19565    ,  -19082 ,
   -17892   ,   -16035  ,    -13588    ,  -10656   ,    -7366   ,    -3861    ,    -291     ,   3193    ,    6452    ,    9362   ,    11822   ,    13759    ,   15131   ,    15926    ,   16164    ,   15895 ,
    15189   ,    14136  ,     12837    ,   11396   ,     9915   ,     8486    ,    7182     ,   6060    ,    5150    ,    4458   ,     3967   ,     3638    ,    3411   ,     3216    ,    2976    ,    2614 ,
     2058   ,     1251  ,       153    ,   -1251   ,    -2953   ,    -4917    ,   -7081     ,  -9363    ,  -11659    ,  -13855   ,   -15830   ,   -17466    ,  -18651   ,   -19294    ,  -19325    ,  -18702 ,
   -17415   ,   -15490  ,    -12983    ,   -9984   ,    -6610   ,    -2997    ,     702     ,   4330    ,    7733    ,   10766   ,    13306   ,    15254    ,   16543   ,    17142    ,   17055    ,   16324 ,
    15022   ,    13253  ,     11141    ,    8825   ,     6451   ,     4162    ,    2089     ,    345    ,    -986    ,   -1845   ,    -2213   ,    -2100    ,   -1555   ,     -654    ,     503    ,    1795 ,
     3092   ,     4263  ,      5181    ,    5737   ,     5845   ,     5444    ,    4508     ,   3046    ,    1101    ,   -1251   ,    -3905   ,    -6733    ,   -9593   ,   -12334    ,  -14807    ,  -16873 ,
   -18413   ,   -19332  ,    -19565    ,  -19082   ,   -17892   ,   -16035    ,  -13588     , -10656    ,   -7366    ,   -3861   ,     -291   ,     3193    ,    6452   ,     9362    ,   11822    ,   13759 ,
    15131   ,    15926  ,     16164    ,   15895   ,    15189   ,    14136    ,   12837     ,  11396    ,    9915    ,    8486   ,     7182   ,     6060    ,    5150   ,     4458    ,    3967    ,    3638 ,
     3411   ,     3216  ,      2976    ,    2614   ,     2058   ,     1251    ,     153     ,  -1251    ,   -2953    ,   -4917   ,    -7081   ,    -9363    ,  -11659   ,   -13855    ,  -15830    ,  -17466 ,
   -18651   ,   -19294  ,    -19325    ,  -18702   ,   -17415   ,   -15490    ,  -12983     ,  -9984    ,   -6610    ,   -2997   ,      702   ,     4330    ,    7733   ,    10766    ,   13306    ,   15254 ,
    16543   ,    17142  ,     17055    ,   16324   ,    15022   ,    13253    ,   11141     ,   8825    ,    6451    ,    4162   ,     2089   ,      345    ,    -986   ,    -1845    ,   -2213    ,   -2100 ,
    -1555   ,     -654  ,       503    ,    1795   ,     3092   ,     4263    ,    5181     ,   5737    ,    5845    ,    5444   ,     4508   ,     3046    ,    1101   ,    -1251    ,   -3905    ,   -6733 ,
    -9593   ,   -12334  ,    -14807    ,  -16873   ,   -18413   ,   -19332    ,  -19565     , -19082    ,  -17892    ,  -16035   ,   -13588   ,   -10656    ,   -7366   ,    -3861    ,    -291    ,    3193 ,
     6452   ,     9362  ,     11822    ,   13759   ,    15131   ,    15926    ,   16164     ,  15895    ,   15189    ,   14136   ,    12837   ,    11396    ,    9915   ,     8486    ,    7182    ,    6060 ,
     5150   ,     4458  ,      3967    ,    3638   ,     3411   ,     3216    ,    2976     ,   2614    ,    2058    ,    1251   ,      153   ,    -1251    ,   -2953   ,    -4917    ,   -7081    ,   -9363 ,
   -11659   ,   -13855  ,    -15830    ,  -17466   ,   -18651   ,   -19294    ,  -19325     , -18702    ,  -17415    ,  -15490   ,   -12983   ,    -9984    ,   -6610   ,    -2997    ,     702    ,    4330 ,
     7733   ,    10766  ,     13306    ,   15254   ,    16543   ,    17142    ,   17055     ,  16324    ,   15022    ,   13253   ,    11141   ,     8825    ,    6451   ,     4162    ,    2089    ,     345 ,
     -986   ,    -1845  ,     -2213    ,   -2100   ,    -1555   ,     -654    ,     503     ,   1795    ,    3092    ,    4263   ,     5181   ,     5737    ,    5845   ,     5444    ,    4508    ,    3046 ,
     1101   ,    -1251  ,     -3905    ,   -6733   ,    -9593   ,   -12334    ,  -14807     , -16873    ,  -18413    ,  -19332   ,   -19565   ,   -19082    ,  -17892   ,   -16035    ,  -13588    ,  -10656 ,
    -7366   ,    -3861  ,      -291    ,    3193   ,     6452   ,     9362    ,   11822     ,  13759    ,   15131    ,   15926   ,    16164   ,    15895    ,   15189   ,    14136    ,   12837    ,   11396 ,
     9915   ,     8486  ,      7182    ,    6060   ,     5150   ,     4458    ,    3967     ,   3638    ,    3411    ,    3216   ,     2976   ,     2614    ,    2058   ,     1251    ,     153    ,   -1251 ,
    -2953   ,    -4917  ,     -7081    ,   -9363   ,   -11659   ,   -13855    ,  -15830     , -17466    ,  -18651    ,  -19294   ,   -19325   ,   -18702    ,  -17415   ,   -15490    ,  -12983    ,   -9984 ,
    -6610   ,    -2997  ,       702    ,    4330   ,     7733   ,    10766    ,   13306     ,  15254    ,   16543    ,   17142   ,    17055   ,    16324    ,   15022   ,    13253    ,   11141    ,    8825 ,
     6451   ,     4162  ,      2089    ,     345   ,     -986   ,    -1845    ,   -2213     ,  -2100    ,   -1555    ,    -654   ,      503   ,     1795    ,    3092   ,     4263    ,    5181    ,    5737 ,
     5845   ,     5444  ,      4508    ,    3046   ,     1101   ,    -1251    ,   -3905     ,  -6733    ,   -9593    ,  -12334   ,   -14807   ,   -16873    ,  -18413   ,   -19332    ,  -19565    ,  -19082 ,
   -17892   ,   -16035  ,    -13588    ,  -10656   ,    -7366   ,    -3861    ,    -291     ,   3193    ,    6452    ,    9362   ,    11822   ,    13759    ,   15131   ,    15926    ,   16164    ,   15895 ,
    15189   ,    14136  ,     12837    ,   11396   ,     9915   ,     8486    ,    7182     ,   6060    ,    5150    ,    4458   ,     3967   ,     3638    ,    3411   ,     3216    ,    2976    ,    2614 ,
     2058   ,     1251  ,       153    ,   -1251   ,    -2953   ,    -4917    ,   -7081     ,  -9363    ,  -11659    ,  -13855   ,   -15830   ,   -17466    ,  -18651   ,   -19294    ,  -19325    ,  -18702 ,
   -17415   ,   -15490  ,    -12983    ,   -9984   ,    -6610   ,    -2997    ,     702     ,   4330    ,    7733    ,   10766   ,    13306   ,    15254    ,   16543   ,    17142    ,   17055    ,   16324 ,
    15022   ,    13253  ,     11141    ,    8825   ,     6451   ,     4162    ,    2089     ,    345    ,    -986    ,   -1845   ,    -2213   ,    -2100    ,   -1555   ,     -654    ,     503    ,    1795 ,
     3092   ,     4263  ,      5181    ,    5737   ,     5845   ,     5444    ,    4508     ,   3046    ,    1101    ,   -1251   ,    -3905   ,    -6733    ,   -9593   ,   -12334    ,  -14807    ,  -16873 ,
   -18413   ,   -19332  ,    -19565    ,  -19082   ,   -17892   ,   -16035    ,  -13588     , -10656    ,   -7366    ,   -3861   ,     -291   ,     3193    ,    6452   ,     9362    ,   11822    ,   13759 ,
    15131   ,    15926  ,     16164    ,   15895   ,    15189   ,    14136    ,   12837     ,  11396    ,    9915    ,    8486   ,     7182   ,     6060    ,    5150   ,     4458    ,    3967    ,    3638 ,
     3411   ,     3216  ,      2976    ,    2614   ,     2058   ,     1251    ,     153     ,  -1251    ,   -2953    ,   -4917   ,    -7081   ,    -9363    ,  -11659   ,   -13855    ,  -15830    ,  -17466 ,
   -18651   ,   -19294  ,    -19325    ,  -18702   ,   -17415   ,   -15490    ,  -12983     ,  -9984    ,   -6610    ,   -2997   ,      702   ,     4330    ,    7733   ,    10766    ,   13306    ,   15254 ,
    16543   ,    17142  ,     17055    ,   16324   ,    15022   ,    13253    ,   11141     ,   8825    ,    6451    ,    4162   ,     2089   ,      345    ,    -986   ,    -1845    ,   -2213    ,   -2100 ,
    -1555   ,     -654  ,       503    ,    1795   ,     3092   ,     4263    ,    5181     ,   5737    ,    5845    ,    5444   ,     4508   ,     3046    ,    1101   ,    -1251    ,   -3905    ,   -6733 ,
    -9593   ,   -12334  ,    -14807    ,  -16873   ,   -18413   ,   -19332    ,  -19565     , -19082    ,  -17892    ,  -16035   ,   -13588   ,   -10656    ,   -7366   ,    -3861    ,    -291    ,    3193 ,
     6452   ,     9362  ,     11822    ,   13759   ,    15131   ,    15926    ,   16164     ,  15895    ,   15189    ,   14136   ,    12837   ,    11396    ,    9915   ,     8486    ,    7182    ,    6060 ,
     5150   ,     4458  ,      3967    ,    3638   ,     3411   ,     3216    ,    2976     ,   2614    ,    2058    ,    1251   ,      153   ,    -1251    ,   -2953   ,    -4917    ,   -7081    ,   -9363 ,
   -11659   ,   -13855  ,    -15830    ,  -17466   ,   -18651   ,   -19294    ,  -19325     , -18702    ,  -17415    ,  -15490   ,   -12983   ,    -9984    ,   -6610   ,    -2997    ,     702    ,    4330 ,
     7733   ,    10766  ,     13306    ,   15254   ,    16543   ,    17142    ,   17055     ,  16324    ,   15022    ,   13253   ,    11141   ,     8825    ,    6451   ,     4162    ,    2089    ,     345 ,
     -986   ,    -1845  ,     -2213    ,   -2100   ,    -1555   ,     -654    ,     503     ,   1795    ,    3092    ,    4263   ,     5181   ,     5737    ,    5845   ,     5444    ,    4508    ,    3046 ,
     1101   ,    -1251  ,     -3905    ,   -6733   ,    -9593   ,   -12334    ,  -14807     , -16873    ,  -18413    ,  -19332   ,   -19565   ,   -19082    ,  -17892   ,   -16035    ,  -13588    ,  -10656 ,
    -7366   ,    -3861  ,      -291    ,    3193   ,     6452   ,     9362    ,   11822     ,  13759    ,   15131    ,   15926   ,    16164   ,    15895    ,   15189   ,    14136    ,   12837    ,   11396 ,
     9915   ,     8486  ,      7182    ,    6060   ,     5150   ,     4458    ,    3967     ,   3638    ,    3411    ,    3216   ,     2976   ,     2614    ,    2058   ,     1251    ,     153    ,   -1251 ,
    -2953   ,    -4917  ,     -7081    ,   -9363   ,   -11659   ,   -13855    ,  -15830     , -17466    ,  -18651    ,  -19294   ,   -19325   ,   -18702    ,  -17415   ,   -15490    ,  -12983    ,   -9984 ,
    -6610   ,    -2997  ,       702    ,    4330   ,     7733   ,    10766    ,   13306     ,  15254    ,   16543    ,   17142   ,    17055   ,    16324    ,   15022   ,    13253    ,   11141    ,    8825 ,
     6451   ,     4162  ,      2089    ,     345   ,     -986   ,    -1845    ,   -2213     ,  -2100    ,   -1555    ,    -654   ,      503   ,     1795    ,    3092   ,     4263    ,    5181    ,    5737 ,
     5845   ,     5444  ,      4508    ,    3046   ,     1101   ,    -1251    ,   -3905     ,  -6733    ,   -9593    ,  -12334   ,   -14807   ,   -16873    ,  -18413   ,   -19332    ,  -19565    ,  -19082 ,
   -17892   ,   -16035  ,    -13588    ,  -10656   ,    -7366   ,    -3861    ,    -291     ,   3193    ,    6452    ,    9362   ,    11822   ,    13759    ,   15131   ,    15926    ,   16164    ,   15895 ,
    15189   ,    14136  ,     12837    ,   11396   ,     9915   ,     8486    ,    7182     ,   6060    ,    5150    ,    4458   ,     3967   ,     3638    ,    3411   ,     3216    ,    2976    ,    2614 ,
     2058   ,     1251  ,       153    ,   -1251   ,    -2953   ,    -4917    ,   -7081     ,  -9363    ,  -11659    ,  -13855   ,   -15830   ,   -17466    ,  -18651   ,   -19294    ,  -19325    ,  -18702 ,
   -17415   ,   -15490  ,    -12983    ,   -9984   ,    -6610   ,    -2997    ,     702     ,   4330    ,    7733    ,   10766   ,    13306   ,    15254    ,   16543   ,    17142    ,   17055    ,   16324 ,
    15022   ,    13253  ,     11141    ,    8825   ,     6451   ,     4162    ,    2089     ,    345    ,    -986    ,   -1845   ,    -2213   ,    -2100    ,   -1555   ,     -654    ,     503    ,    1795 ,
     3092   ,     4263  ,      5181    ,    5737   ,     5845   ,     5444    ,    4508     ,   3046    ,    1101    ,   -1251   ,    -3905   ,    -6733    ,   -9593   ,   -12334    ,  -14807    ,  -16873 ,
   -18413   ,   -19332  ,    -19565    ,  -19082   ,   -17892   ,   -16035    ,  -13588     , -10656    ,   -7366    ,   -3861   ,     -291   ,     3193    ,    6452   ,     9362    ,   11822    ,   13759 ,
    15131   ,    15926  ,     16164    ,   15895   ,    15189   ,    14136    ,   12837     ,  11396    ,    9915    ,    8486   ,     7182   ,     6060    ,    5150   ,     4458    ,    3967    ,    3638 ,
    3411    ,    3216   ,     2976     ,   2614    ,    2058    ,    1251     ,    153      , -1251     ,  -2953     ,  -4917    ,   -7081    ,   -9363     , -11659    ,  -13855     , -15830     , -17466


};
