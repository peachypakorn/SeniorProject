<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="11">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>pyrconstuct_top</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>3</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>imgIn</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>imgIn</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_2">
				<Value>
					<Obj>
						<type>1</type>
						<id>2</id>
						<name>pyrFilOut_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>40</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_3">
				<Value>
					<Obj>
						<type>1</type>
						<id>3</id>
						<name>nL</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>nL</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>22</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>6</id>
						<name>fft_config2_data_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>175</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="10" tracking_level="0" version="0">
								<first>f:/FPGA</first>
								<second class_id="11" tracking_level="0" version="0">
									<count>1</count>
									<item_version>0</item_version>
									<item class_id="12" tracking_level="0" version="0">
										<first class_id="13" tracking_level="0" version="0">
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>175</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fft_config2.data.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>64</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>7</id>
						<name>fft_config_data_V_channel</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>65</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>11</id>
						<name>imgOutTmpFFTStream_channel</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>48</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>66</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>14</id>
						<name>imgInTmp2_channel</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>67</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>17</id>
						<name>imgInTmp_channel</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>68</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>20</id>
						<name>ifftPyrOut_channel</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>48</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>69</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_10">
				<Value>
					<Obj>
						<type>0</type>
						<id>25</id>
						<name>imgOutTmpBlockRam_M_real_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>170</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>170</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>imgOutTmpBlockRam._M_real.V</originalName>
						<rtlName></rtlName>
						<coreName>RAM</coreName>
					</Obj>
					<bitwidth>24</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>70</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_11">
				<Value>
					<Obj>
						<type>0</type>
						<id>26</id>
						<name>imgOutTmpBlockRam_M_imag_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>170</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>170</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>imgOutTmpBlockRam._M_imag.V</originalName>
						<rtlName></rtlName>
						<coreName>RAM</coreName>
					</Obj>
					<bitwidth>24</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>71</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_12">
				<Value>
					<Obj>
						<type>0</type>
						<id>27</id>
						<name>fftPyrOut_M_real_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>172</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>172</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fftPyrOut._M_real.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>24</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>72</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_13">
				<Value>
					<Obj>
						<type>0</type>
						<id>30</id>
						<name>fftPyrOut_M_imag_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>172</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>172</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fftPyrOut._M_imag.V</originalName>
						<rtlName></rtlName>
						<coreName>FIFO</coreName>
					</Obj>
					<bitwidth>24</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>73</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_14">
				<Value>
					<Obj>
						<type>0</type>
						<id>33</id>
						<name>fft_status_data_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>176</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>176</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fft_status.data.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>74</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_15">
				<Value>
					<Obj>
						<type>0</type>
						<id>34</id>
						<name>fft_status2_data_V</name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>177</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>177</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fft_status2.data.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>8</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>75</item>
				</oprand_edges>
				<opcode>alloca</opcode>
			</item>
			<item class_id_reference="9" object_id="_16">
				<Value>
					<Obj>
						<type>0</type>
						<id>38</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>2</count>
					<item_version>0</item_version>
					<item>77</item>
					<item>78</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_17">
				<Value>
					<Obj>
						<type>0</type>
						<id>39</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>80</item>
					<item>81</item>
					<item>82</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_18">
				<Value>
					<Obj>
						<type>0</type>
						<id>45</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>8</count>
					<item_version>0</item_version>
					<item>84</item>
					<item>85</item>
					<item>86</item>
					<item>87</item>
					<item>88</item>
					<item>453</item>
					<item>454</item>
					<item>455</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_19">
				<Value>
					<Obj>
						<type>0</type>
						<id>46</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>6</count>
					<item_version>0</item_version>
					<item>90</item>
					<item>91</item>
					<item>92</item>
					<item>93</item>
					<item>452</item>
					<item>456</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_20">
				<Value>
					<Obj>
						<type>0</type>
						<id>47</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>9</count>
					<item_version>0</item_version>
					<item>95</item>
					<item>96</item>
					<item>97</item>
					<item>98</item>
					<item>99</item>
					<item>118</item>
					<item>119</item>
					<item>447</item>
					<item>457</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_21">
				<Value>
					<Obj>
						<type>0</type>
						<id>52</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>6</count>
					<item_version>0</item_version>
					<item>101</item>
					<item>102</item>
					<item>103</item>
					<item>104</item>
					<item>451</item>
					<item>458</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_22">
				<Value>
					<Obj>
						<type>0</type>
						<id>53</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>2</count>
					<item_version>0</item_version>
					<item>106</item>
					<item>107</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_23">
				<Value>
					<Obj>
						<type>0</type>
						<id>59</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>8</count>
					<item_version>0</item_version>
					<item>109</item>
					<item>110</item>
					<item>111</item>
					<item>112</item>
					<item>113</item>
					<item>449</item>
					<item>450</item>
					<item>459</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_24">
				<Value>
					<Obj>
						<type>0</type>
						<id>60</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>115</item>
					<item>116</item>
					<item>117</item>
					<item>448</item>
					<item>460</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_25">
				<Value>
					<Obj>
						<type>0</type>
						<id>61</id>
						<name></name>
						<fileName>PyramidCon_x/pyramidbuild.cpp</fileName>
						<fileDirectory>f:/FPGA</fileDirectory>
						<lineNumber>277</lineNumber>
						<contextFuncName>pyrconstuct_top</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>PyramidCon_x/pyramidbuild.cpp</first>
											<second>pyrconstuct_top</second>
										</first>
										<second>277</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>10</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_26">
				<Value>
					<Obj>
						<type>2</type>
						<id>63</id>
						<name>empty</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>64</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>1</content>
			</item>
			<item class_id_reference="16" object_id="_27">
				<Value>
					<Obj>
						<type>2</type>
						<id>76</id>
						<name>pyrconstuct_top_Block_codeRepl26_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Block_codeRepl26_proc&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_28">
				<Value>
					<Obj>
						<type>2</type>
						<id>79</id>
						<name>pyrconstuct_top_Loop_1_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Loop_1_proc&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_29">
				<Value>
					<Obj>
						<type>2</type>
						<id>83</id>
						<name>fft_config1_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fft&lt;config1&gt;&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_30">
				<Value>
					<Obj>
						<type>2</type>
						<id>89</id>
						<name>pyrconstuct_top_Loop_2_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Loop_2_proc&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_31">
				<Value>
					<Obj>
						<type>2</type>
						<id>94</id>
						<name>pyrconstuct_top_Loop_3_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Loop_3_proc&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_32">
				<Value>
					<Obj>
						<type>2</type>
						<id>100</id>
						<name>pyrconstuct_top_Loop_4_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Loop_4_proc&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_33">
				<Value>
					<Obj>
						<type>2</type>
						<id>105</id>
						<name>pyrconstuct_top_Block_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Block__proc&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_34">
				<Value>
					<Obj>
						<type>2</type>
						<id>108</id>
						<name>fft_config2_s</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fft&lt;config2&gt;&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_35">
				<Value>
					<Obj>
						<type>2</type>
						<id>114</id>
						<name>pyrconstuct_top_Loop_5_proc</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pyrconstuct_top_Loop_5_proc&gt;</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_36">
				<Obj>
					<type>3</type>
					<id>62</id>
					<name>pyrconstuct_top</name>
					<fileName></fileName>
					<fileDirectory></fileDirectory>
					<lineNumber>0</lineNumber>
					<contextFuncName></contextFuncName>
					<inlineStackInfo>
						<count>0</count>
						<item_version>0</item_version>
					</inlineStackInfo>
					<originalName></originalName>
					<rtlName></rtlName>
					<coreName></coreName>
				</Obj>
				<node_objs>
					<count>22</count>
					<item_version>0</item_version>
					<item>6</item>
					<item>7</item>
					<item>11</item>
					<item>14</item>
					<item>17</item>
					<item>20</item>
					<item>25</item>
					<item>26</item>
					<item>27</item>
					<item>30</item>
					<item>33</item>
					<item>34</item>
					<item>38</item>
					<item>39</item>
					<item>45</item>
					<item>46</item>
					<item>47</item>
					<item>52</item>
					<item>53</item>
					<item>59</item>
					<item>60</item>
					<item>61</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>61</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_37">
				<id>64</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>6</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_38">
				<id>65</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>7</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_39">
				<id>66</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>11</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_40">
				<id>67</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>14</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_41">
				<id>68</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>17</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_42">
				<id>69</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>20</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_43">
				<id>70</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>25</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_44">
				<id>71</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>26</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_45">
				<id>72</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>27</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_46">
				<id>73</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>30</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_47">
				<id>74</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>33</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_48">
				<id>75</id>
				<edge_type>1</edge_type>
				<source_obj>63</source_obj>
				<sink_obj>34</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_49">
				<id>77</id>
				<edge_type>1</edge_type>
				<source_obj>76</source_obj>
				<sink_obj>38</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_50">
				<id>78</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>38</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_51">
				<id>80</id>
				<edge_type>1</edge_type>
				<source_obj>79</source_obj>
				<sink_obj>39</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_52">
				<id>81</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>39</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_53">
				<id>82</id>
				<edge_type>1</edge_type>
				<source_obj>17</source_obj>
				<sink_obj>39</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_54">
				<id>84</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_55">
				<id>85</id>
				<edge_type>1</edge_type>
				<source_obj>17</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_56">
				<id>86</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_57">
				<id>87</id>
				<edge_type>1</edge_type>
				<source_obj>33</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_58">
				<id>88</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_59">
				<id>90</id>
				<edge_type>1</edge_type>
				<source_obj>89</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_60">
				<id>91</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_61">
				<id>92</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_62">
				<id>93</id>
				<edge_type>1</edge_type>
				<source_obj>26</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_63">
				<id>95</id>
				<edge_type>1</edge_type>
				<source_obj>94</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_64">
				<id>96</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_65">
				<id>97</id>
				<edge_type>1</edge_type>
				<source_obj>26</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_66">
				<id>98</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_67">
				<id>99</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_68">
				<id>101</id>
				<edge_type>1</edge_type>
				<source_obj>100</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_69">
				<id>102</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_70">
				<id>103</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_71">
				<id>104</id>
				<edge_type>1</edge_type>
				<source_obj>14</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_72">
				<id>106</id>
				<edge_type>1</edge_type>
				<source_obj>105</source_obj>
				<sink_obj>53</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_73">
				<id>107</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>53</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_74">
				<id>109</id>
				<edge_type>1</edge_type>
				<source_obj>108</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_75">
				<id>110</id>
				<edge_type>1</edge_type>
				<source_obj>14</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_76">
				<id>111</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_77">
				<id>112</id>
				<edge_type>1</edge_type>
				<source_obj>34</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_78">
				<id>113</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_79">
				<id>115</id>
				<edge_type>1</edge_type>
				<source_obj>114</source_obj>
				<sink_obj>60</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_80">
				<id>116</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>60</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_81">
				<id>117</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>60</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_82">
				<id>118</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_83">
				<id>119</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_84">
				<id>447</id>
				<edge_type>4</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_85">
				<id>448</id>
				<edge_type>4</edge_type>
				<source_obj>59</source_obj>
				<sink_obj>60</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_86">
				<id>449</id>
				<edge_type>4</edge_type>
				<source_obj>53</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_87">
				<id>450</id>
				<edge_type>4</edge_type>
				<source_obj>52</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_88">
				<id>451</id>
				<edge_type>4</edge_type>
				<source_obj>47</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_89">
				<id>452</id>
				<edge_type>4</edge_type>
				<source_obj>45</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_90">
				<id>453</id>
				<edge_type>4</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_91">
				<id>454</id>
				<edge_type>4</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_92">
				<id>455</id>
				<edge_type>4</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>45</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_93">
				<id>456</id>
				<edge_type>4</edge_type>
				<source_obj>45</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_94">
				<id>457</id>
				<edge_type>4</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>47</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_95">
				<id>458</id>
				<edge_type>4</edge_type>
				<source_obj>47</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_96">
				<id>459</id>
				<edge_type>4</edge_type>
				<source_obj>52</source_obj>
				<sink_obj>59</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_97">
				<id>460</id>
				<edge_type>4</edge_type>
				<source_obj>59</source_obj>
				<sink_obj>60</sink_obj>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_98">
			<mId>1</mId>
			<mTag>pyrconstuct_top</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>62</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>2042</mMinLatency>
			<mMaxLatency>-1</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="23" tracking_level="1" version="0" object_id="_99">
				<port_list class_id="24" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="25" tracking_level="0" version="0">
					<count>9</count>
					<item_version>0</item_version>
					<item class_id="26" tracking_level="1" version="0" object_id="_100">
						<type>0</type>
						<name>pyrconstuct_top_Block_codeRepl26_proc_U0</name>
						<ssdmobj_id>38</ssdmobj_id>
						<pins class_id="27" tracking_level="0" version="0">
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="28" tracking_level="1" version="0" object_id="_101">
								<port class_id="29" tracking_level="1" version="0" object_id="_102">
									<name>fft_config_data_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id="30" tracking_level="1" version="0" object_id="_103">
									<type>0</type>
									<name>pyrconstuct_top_Block_codeRepl26_proc_U0</name>
									<ssdmobj_id>38</ssdmobj_id>
								</inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_104">
						<type>0</type>
						<name>pyrconstuct_top_Loop_1_proc_U0</name>
						<ssdmobj_id>39</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_105">
								<port class_id_reference="29" object_id="_106">
									<name>imgIn</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_107">
									<type>0</type>
									<name>pyrconstuct_top_Loop_1_proc_U0</name>
									<ssdmobj_id>39</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_108">
								<port class_id_reference="29" object_id="_109">
									<name>imgInTmp</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_107"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_110">
						<type>0</type>
						<name>fft_config1_U0</name>
						<ssdmobj_id>45</ssdmobj_id>
						<pins>
							<count>4</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_111">
								<port class_id_reference="29" object_id="_112">
									<name>xn</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_113">
									<type>0</type>
									<name>fft_config1_U0</name>
									<ssdmobj_id>45</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_114">
								<port class_id_reference="29" object_id="_115">
									<name>xk</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_113"></inst>
							</item>
							<item class_id_reference="28" object_id="_116">
								<port class_id_reference="29" object_id="_117">
									<name>status_data_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_113"></inst>
							</item>
							<item class_id_reference="28" object_id="_118">
								<port class_id_reference="29" object_id="_119">
									<name>config_ch_data_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_113"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_120">
						<type>0</type>
						<name>pyrconstuct_top_Loop_2_proc_U0</name>
						<ssdmobj_id>46</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_121">
								<port class_id_reference="29" object_id="_122">
									<name>imgOutTmpFFTStream</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_123">
									<type>0</type>
									<name>pyrconstuct_top_Loop_2_proc_U0</name>
									<ssdmobj_id>46</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_124">
								<port class_id_reference="29" object_id="_125">
									<name>imgOutTmpBlockRam_M_real_V</name>
									<dir>2</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_123"></inst>
							</item>
							<item class_id_reference="28" object_id="_126">
								<port class_id_reference="29" object_id="_127">
									<name>imgOutTmpBlockRam_M_imag_V</name>
									<dir>2</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_123"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_128">
						<type>0</type>
						<name>pyrconstuct_top_Loop_3_proc_U0</name>
						<ssdmobj_id>47</ssdmobj_id>
						<pins>
							<count>6</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_129">
								<port class_id_reference="29" object_id="_130">
									<name>imgOutTmpBlockRam_M_real_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_131">
									<type>0</type>
									<name>pyrconstuct_top_Loop_3_proc_U0</name>
									<ssdmobj_id>47</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_132">
								<port class_id_reference="29" object_id="_133">
									<name>imgOutTmpBlockRam_M_imag_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_131"></inst>
							</item>
							<item class_id_reference="28" object_id="_134">
								<port class_id_reference="29" object_id="_135">
									<name>fftPyrOut_M_real_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_131"></inst>
							</item>
							<item class_id_reference="28" object_id="_136">
								<port class_id_reference="29" object_id="_137">
									<name>fftPyrOut_M_imag_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_131"></inst>
							</item>
							<item class_id_reference="28" object_id="_138">
								<port class_id_reference="29" object_id="_139">
									<name>limits</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_131"></inst>
							</item>
							<item class_id_reference="28" object_id="_140">
								<port class_id_reference="29" object_id="_141">
									<name>consFilters_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_131"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_142">
						<type>0</type>
						<name>pyrconstuct_top_Loop_4_proc_U0</name>
						<ssdmobj_id>52</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_143">
								<port class_id_reference="29" object_id="_144">
									<name>fftPyrOut_M_real_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_145">
									<type>0</type>
									<name>pyrconstuct_top_Loop_4_proc_U0</name>
									<ssdmobj_id>52</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_146">
								<port class_id_reference="29" object_id="_147">
									<name>fftPyrOut_M_imag_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_145"></inst>
							</item>
							<item class_id_reference="28" object_id="_148">
								<port class_id_reference="29" object_id="_149">
									<name>imgInTmp2</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_145"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_150">
						<type>0</type>
						<name>pyrconstuct_top_Block_proc_U0</name>
						<ssdmobj_id>53</ssdmobj_id>
						<pins>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_151">
								<port class_id_reference="29" object_id="_152">
									<name>fft_config2_data_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_153">
									<type>0</type>
									<name>pyrconstuct_top_Block_proc_U0</name>
									<ssdmobj_id>53</ssdmobj_id>
								</inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_154">
						<type>0</type>
						<name>fft_config2_U0</name>
						<ssdmobj_id>59</ssdmobj_id>
						<pins>
							<count>4</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_155">
								<port class_id_reference="29" object_id="_156">
									<name>xn</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_157">
									<type>0</type>
									<name>fft_config2_U0</name>
									<ssdmobj_id>59</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_158">
								<port class_id_reference="29" object_id="_159">
									<name>xk</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_157"></inst>
							</item>
							<item class_id_reference="28" object_id="_160">
								<port class_id_reference="29" object_id="_161">
									<name>status_data_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_157"></inst>
							</item>
							<item class_id_reference="28" object_id="_162">
								<port class_id_reference="29" object_id="_163">
									<name>config_ch_data_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_157"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_164">
						<type>0</type>
						<name>pyrconstuct_top_Loop_5_proc_U0</name>
						<ssdmobj_id>60</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_165">
								<port class_id_reference="29" object_id="_166">
									<name>ifftPyrOut</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id="_167">
									<type>0</type>
									<name>pyrconstuct_top_Loop_5_proc_U0</name>
									<ssdmobj_id>60</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_168">
								<port class_id_reference="29" object_id="_169">
									<name>pyrFilOut_V</name>
									<dir>3</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_167"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="31" tracking_level="0" version="0">
					<count>12</count>
					<item_version>0</item_version>
					<item class_id="32" tracking_level="1" version="0" object_id="_170">
						<type>1</type>
						<name>fft_config_data_V_channel</name>
						<ssdmobj_id>7</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>8</bitwidth>
						<source class_id_reference="28" object_id="_171">
							<port class_id_reference="29" object_id="_172">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_103"></inst>
						</source>
						<sink class_id_reference="28" object_id="_173">
							<port class_id_reference="29" object_id="_174">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_113"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_175">
						<type>1</type>
						<name>imgInTmp_channel</name>
						<ssdmobj_id>17</ssdmobj_id>
						<ctype>0</ctype>
						<depth>512</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_176">
							<port class_id_reference="29" object_id="_177">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_107"></inst>
						</source>
						<sink class_id_reference="28" object_id="_178">
							<port class_id_reference="29" object_id="_179">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_113"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_180">
						<type>1</type>
						<name>imgOutTmpFFTStream_channel</name>
						<ssdmobj_id>11</ssdmobj_id>
						<ctype>0</ctype>
						<depth>512</depth>
						<bitwidth>48</bitwidth>
						<source class_id_reference="28" object_id="_181">
							<port class_id_reference="29" object_id="_182">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_113"></inst>
						</source>
						<sink class_id_reference="28" object_id="_183">
							<port class_id_reference="29" object_id="_184">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_123"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_185">
						<type>1</type>
						<name>fft_status_data_V</name>
						<ssdmobj_id>33</ssdmobj_id>
						<ctype>3</ctype>
						<depth>0</depth>
						<bitwidth>0</bitwidth>
						<source class_id="-1"></source>
						<sink class_id="-1"></sink>
					</item>
					<item class_id_reference="32" object_id="_186">
						<type>1</type>
						<name>imgOutTmpBlockRam_M_real_V</name>
						<ssdmobj_id>25</ssdmobj_id>
						<ctype>1</ctype>
						<depth>0</depth>
						<bitwidth>0</bitwidth>
						<source class_id_reference="28" object_id="_187">
							<port class_id_reference="29" object_id="_188">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_123"></inst>
						</source>
						<sink class_id_reference="28" object_id="_189">
							<port class_id_reference="29" object_id="_190">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_131"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_191">
						<type>1</type>
						<name>imgOutTmpBlockRam_M_imag_V</name>
						<ssdmobj_id>26</ssdmobj_id>
						<ctype>1</ctype>
						<depth>0</depth>
						<bitwidth>0</bitwidth>
						<source class_id_reference="28" object_id="_192">
							<port class_id_reference="29" object_id="_193">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_123"></inst>
						</source>
						<sink class_id_reference="28" object_id="_194">
							<port class_id_reference="29" object_id="_195">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_131"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_196">
						<type>1</type>
						<name>fftPyrOut_M_real_V</name>
						<ssdmobj_id>27</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1520</depth>
						<bitwidth>24</bitwidth>
						<source class_id_reference="28" object_id="_197">
							<port class_id_reference="29" object_id="_198">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_131"></inst>
						</source>
						<sink class_id_reference="28" object_id="_199">
							<port class_id_reference="29" object_id="_200">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_145"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_201">
						<type>1</type>
						<name>fftPyrOut_M_imag_V</name>
						<ssdmobj_id>30</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1520</depth>
						<bitwidth>24</bitwidth>
						<source class_id_reference="28" object_id="_202">
							<port class_id_reference="29" object_id="_203">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_131"></inst>
						</source>
						<sink class_id_reference="28" object_id="_204">
							<port class_id_reference="29" object_id="_205">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_145"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_206">
						<type>1</type>
						<name>imgInTmp2_channel</name>
						<ssdmobj_id>14</ssdmobj_id>
						<ctype>0</ctype>
						<depth>512</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_207">
							<port class_id_reference="29" object_id="_208">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_145"></inst>
						</source>
						<sink class_id_reference="28" object_id="_209">
							<port class_id_reference="29" object_id="_210">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_157"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_211">
						<type>1</type>
						<name>fft_config2_data_V</name>
						<ssdmobj_id>6</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_212">
							<port class_id_reference="29" object_id="_213">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_153"></inst>
						</source>
						<sink class_id_reference="28" object_id="_214">
							<port class_id_reference="29" object_id="_215">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_157"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_216">
						<type>1</type>
						<name>ifftPyrOut_channel</name>
						<ssdmobj_id>20</ssdmobj_id>
						<ctype>0</ctype>
						<depth>512</depth>
						<bitwidth>48</bitwidth>
						<source class_id_reference="28" object_id="_217">
							<port class_id_reference="29" object_id="_218">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_157"></inst>
						</source>
						<sink class_id_reference="28" object_id="_219">
							<port class_id_reference="29" object_id="_220">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_167"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_221">
						<type>1</type>
						<name>fft_status2_data_V</name>
						<ssdmobj_id>34</ssdmobj_id>
						<ctype>3</ctype>
						<depth>0</depth>
						<bitwidth>0</bitwidth>
						<source class_id="-1"></source>
						<sink class_id="-1"></sink>
					</item>
				</channel_list>
				<net_list class_id="33" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</net_list>
			</mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="34" tracking_level="1" version="0" object_id="_222">
		<states class_id="35" tracking_level="0" version="0">
			<count>14</count>
			<item_version>0</item_version>
			<item class_id="36" tracking_level="1" version="0" object_id="_223">
				<id>1</id>
				<operations class_id="37" tracking_level="0" version="0">
					<count>13</count>
					<item_version>0</item_version>
					<item class_id="38" tracking_level="1" version="0" object_id="_224">
						<id>6</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_225">
						<id>7</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_226">
						<id>11</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_227">
						<id>14</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_228">
						<id>17</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_229">
						<id>20</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_230">
						<id>25</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_231">
						<id>26</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_232">
						<id>27</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_233">
						<id>30</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_234">
						<id>33</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_235">
						<id>34</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_236">
						<id>39</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_237">
				<id>2</id>
				<operations>
					<count>2</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_238">
						<id>38</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_239">
						<id>39</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_240">
				<id>3</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_241">
						<id>45</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_242">
				<id>4</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_243">
						<id>45</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_244">
				<id>5</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_245">
						<id>46</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_246">
				<id>6</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_247">
						<id>46</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_248">
				<id>7</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_249">
						<id>47</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_250">
				<id>8</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_251">
						<id>47</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_252">
				<id>9</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_253">
						<id>52</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_254">
				<id>10</id>
				<operations>
					<count>2</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_255">
						<id>52</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
					<item class_id_reference="38" object_id="_256">
						<id>53</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_257">
				<id>11</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_258">
						<id>59</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_259">
				<id>12</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_260">
						<id>59</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_261">
				<id>13</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_262">
						<id>60</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="36" object_id="_263">
				<id>14</id>
				<operations>
					<count>36</count>
					<item_version>0</item_version>
					<item class_id_reference="38" object_id="_264">
						<id>8</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_265">
						<id>9</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_266">
						<id>10</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_267">
						<id>12</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_268">
						<id>13</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_269">
						<id>15</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_270">
						<id>16</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_271">
						<id>18</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_272">
						<id>19</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_273">
						<id>21</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_274">
						<id>22</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_275">
						<id>23</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_276">
						<id>24</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_277">
						<id>28</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_278">
						<id>29</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_279">
						<id>31</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_280">
						<id>32</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_281">
						<id>35</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_282">
						<id>36</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_283">
						<id>37</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_284">
						<id>40</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_285">
						<id>41</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_286">
						<id>42</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_287">
						<id>43</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_288">
						<id>44</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_289">
						<id>48</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_290">
						<id>49</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_291">
						<id>50</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_292">
						<id>51</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_293">
						<id>54</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_294">
						<id>55</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_295">
						<id>56</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_296">
						<id>57</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_297">
						<id>58</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="38" object_id="_298">
						<id>60</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
					<item class_id_reference="38" object_id="_299">
						<id>61</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
		</states>
		<transitions class_id="39" tracking_level="0" version="0">
			<count>13</count>
			<item_version>0</item_version>
			<item class_id="40" tracking_level="1" version="0" object_id="_300">
				<inState>1</inState>
				<outState>2</outState>
				<condition class_id="41" tracking_level="0" version="0">
					<id>0</id>
					<sop class_id="42" tracking_level="0" version="0">
						<count>1</count>
						<item_version>0</item_version>
						<item class_id="43" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_301">
				<inState>2</inState>
				<outState>3</outState>
				<condition>
					<id>1</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_302">
				<inState>3</inState>
				<outState>4</outState>
				<condition>
					<id>2</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_303">
				<inState>4</inState>
				<outState>5</outState>
				<condition>
					<id>3</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_304">
				<inState>5</inState>
				<outState>6</outState>
				<condition>
					<id>4</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_305">
				<inState>6</inState>
				<outState>7</outState>
				<condition>
					<id>5</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_306">
				<inState>7</inState>
				<outState>8</outState>
				<condition>
					<id>6</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_307">
				<inState>8</inState>
				<outState>9</outState>
				<condition>
					<id>7</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_308">
				<inState>9</inState>
				<outState>10</outState>
				<condition>
					<id>8</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_309">
				<inState>10</inState>
				<outState>11</outState>
				<condition>
					<id>9</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_310">
				<inState>11</inState>
				<outState>12</outState>
				<condition>
					<id>10</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_311">
				<inState>12</inState>
				<outState>13</outState>
				<condition>
					<id>11</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="40" object_id="_312">
				<inState>13</inState>
				<outState>14</outState>
				<condition>
					<id>12</id>
					<sop>
						<count>1</count>
						<item_version>0</item_version>
						<item>
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
		</transitions>
	</fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="45" tracking_level="0" version="0">
		<count>22</count>
		<item_version>0</item_version>
		<item class_id="46" tracking_level="0" version="0">
			<first>6</first>
			<second class_id="47" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>7</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>11</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>14</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>17</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>20</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>25</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>26</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>27</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>30</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>33</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>34</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>38</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>39</first>
			<second>
				<first>0</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>45</first>
			<second>
				<first>2</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>46</first>
			<second>
				<first>4</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>47</first>
			<second>
				<first>6</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>52</first>
			<second>
				<first>8</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>53</first>
			<second>
				<first>9</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>59</first>
			<second>
				<first>10</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>60</first>
			<second>
				<first>12</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>61</first>
			<second>
				<first>13</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="48" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="49" tracking_level="0" version="0">
			<first>62</first>
			<second class_id="50" tracking_level="0" version="0">
				<first>0</first>
				<second>13</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="51" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="52" tracking_level="1" version="0" object_id="_313">
			<region_name>pyrconstuct_top</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>62</item>
			</basic_blocks>
			<nodes>
				<count>56</count>
				<item_version>0</item_version>
				<item>6</item>
				<item>7</item>
				<item>8</item>
				<item>9</item>
				<item>10</item>
				<item>11</item>
				<item>12</item>
				<item>13</item>
				<item>14</item>
				<item>15</item>
				<item>16</item>
				<item>17</item>
				<item>18</item>
				<item>19</item>
				<item>20</item>
				<item>21</item>
				<item>22</item>
				<item>23</item>
				<item>24</item>
				<item>25</item>
				<item>26</item>
				<item>27</item>
				<item>28</item>
				<item>29</item>
				<item>30</item>
				<item>31</item>
				<item>32</item>
				<item>33</item>
				<item>34</item>
				<item>35</item>
				<item>36</item>
				<item>37</item>
				<item>38</item>
				<item>39</item>
				<item>40</item>
				<item>41</item>
				<item>42</item>
				<item>43</item>
				<item>44</item>
				<item>45</item>
				<item>46</item>
				<item>47</item>
				<item>48</item>
				<item>49</item>
				<item>50</item>
				<item>51</item>
				<item>52</item>
				<item>53</item>
				<item>54</item>
				<item>55</item>
				<item>56</item>
				<item>57</item>
				<item>58</item>
				<item>59</item>
				<item>60</item>
				<item>61</item>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>16</region_type>
			<interval>0</interval>
			<pipe_depth>0</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="53" tracking_level="0" version="0">
		<count>21</count>
		<item_version>0</item_version>
		<item class_id="54" tracking_level="0" version="0">
			<first>80</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>6</item>
			</second>
		</item>
		<item>
			<first>84</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>7</item>
			</second>
		</item>
		<item>
			<first>88</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>11</item>
			</second>
		</item>
		<item>
			<first>92</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>14</item>
			</second>
		</item>
		<item>
			<first>96</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>17</item>
			</second>
		</item>
		<item>
			<first>100</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>20</item>
			</second>
		</item>
		<item>
			<first>104</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>25</item>
			</second>
		</item>
		<item>
			<first>108</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>26</item>
			</second>
		</item>
		<item>
			<first>112</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>116</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>120</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>124</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>128</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>47</item>
				<item>47</item>
			</second>
		</item>
		<item>
			<first>140</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>60</item>
				<item>60</item>
			</second>
		</item>
		<item>
			<first>147</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>52</item>
				<item>52</item>
			</second>
		</item>
		<item>
			<first>154</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>46</item>
				<item>46</item>
			</second>
		</item>
		<item>
			<first>161</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>39</item>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>168</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>38</item>
			</second>
		</item>
		<item>
			<first>173</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>53</item>
			</second>
		</item>
		<item>
			<first>178</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>45</item>
				<item>45</item>
			</second>
		</item>
		<item>
			<first>186</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>59</item>
				<item>59</item>
			</second>
		</item>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="56" tracking_level="0" version="0">
		<count>12</count>
		<item_version>0</item_version>
		<item class_id="57" tracking_level="0" version="0">
			<first>fftPyrOut_M_imag_V_fu_116</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>fftPyrOut_M_real_V_fu_112</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>fft_config2_data_V_fu_80</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>6</item>
			</second>
		</item>
		<item>
			<first>fft_config_data_V_channel_fu_84</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>7</item>
			</second>
		</item>
		<item>
			<first>fft_status2_data_V_fu_124</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>fft_status_data_V_fu_120</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>ifftPyrOut_channel_fu_100</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>20</item>
			</second>
		</item>
		<item>
			<first>imgInTmp2_channel_fu_92</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>14</item>
			</second>
		</item>
		<item>
			<first>imgInTmp_channel_fu_96</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>17</item>
			</second>
		</item>
		<item>
			<first>imgOutTmpBlockRam_M_imag_V_alloca_fu_108</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>26</item>
			</second>
		</item>
		<item>
			<first>imgOutTmpBlockRam_M_real_V_alloca_fu_104</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>25</item>
			</second>
		</item>
		<item>
			<first>imgOutTmpFFTStream_channel_fu_88</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>11</item>
			</second>
		</item>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>9</count>
		<item_version>0</item_version>
		<item>
			<first>grp_fft_config1_s_fu_178</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>45</item>
				<item>45</item>
			</second>
		</item>
		<item>
			<first>grp_fft_config2_s_fu_186</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>59</item>
				<item>59</item>
			</second>
		</item>
		<item>
			<first>grp_pyrconstuct_top_Loop_1_proc_fu_161</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>39</item>
				<item>39</item>
			</second>
		</item>
		<item>
			<first>grp_pyrconstuct_top_Loop_2_proc_fu_154</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>46</item>
				<item>46</item>
			</second>
		</item>
		<item>
			<first>grp_pyrconstuct_top_Loop_3_proc_fu_128</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>47</item>
				<item>47</item>
			</second>
		</item>
		<item>
			<first>grp_pyrconstuct_top_Loop_4_proc_fu_147</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>52</item>
				<item>52</item>
			</second>
		</item>
		<item>
			<first>grp_pyrconstuct_top_Loop_5_proc_fu_140</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>60</item>
				<item>60</item>
			</second>
		</item>
		<item>
			<first>stg_28_pyrconstuct_top_Block_codeRepl26_proc_fu_168</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>38</item>
			</second>
		</item>
		<item>
			<first>stg_38_pyrconstuct_top_Block_proc_fu_173</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>53</item>
			</second>
		</item>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="58" tracking_level="0" version="0">
		<count>2</count>
		<item_version>0</item_version>
		<item class_id="59" tracking_level="0" version="0">
			<first class_id="60" tracking_level="0" version="0">
				<first>consFilters_V</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>47</item>
			</second>
		</item>
		<item>
			<first>
				<first>limits</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>47</item>
			</second>
		</item>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>10</count>
		<item_version>0</item_version>
		<item>
			<first>194</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>6</item>
			</second>
		</item>
		<item>
			<first>200</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>7</item>
			</second>
		</item>
		<item>
			<first>206</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>11</item>
			</second>
		</item>
		<item>
			<first>212</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>14</item>
			</second>
		</item>
		<item>
			<first>218</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>17</item>
			</second>
		</item>
		<item>
			<first>224</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>20</item>
			</second>
		</item>
		<item>
			<first>230</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>236</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>242</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>247</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>10</count>
		<item_version>0</item_version>
		<item>
			<first>fftPyrOut_M_imag_V_reg_236</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>30</item>
			</second>
		</item>
		<item>
			<first>fftPyrOut_M_real_V_reg_230</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>27</item>
			</second>
		</item>
		<item>
			<first>fft_config2_data_V_reg_194</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>6</item>
			</second>
		</item>
		<item>
			<first>fft_config_data_V_channel_reg_200</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>7</item>
			</second>
		</item>
		<item>
			<first>fft_status2_data_V_reg_247</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>34</item>
			</second>
		</item>
		<item>
			<first>fft_status_data_V_reg_242</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>33</item>
			</second>
		</item>
		<item>
			<first>ifftPyrOut_channel_reg_224</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>20</item>
			</second>
		</item>
		<item>
			<first>imgInTmp2_channel_reg_212</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>14</item>
			</second>
		</item>
		<item>
			<first>imgInTmp_channel_reg_218</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>17</item>
			</second>
		</item>
		<item>
			<first>imgOutTmpFFTStream_channel_reg_206</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>11</item>
			</second>
		</item>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="61" tracking_level="0" version="0">
		<count>3</count>
		<item_version>0</item_version>
		<item class_id="62" tracking_level="0" version="0">
			<first>imgIn</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>39</item>
					</second>
				</item>
			</second>
		</item>
		<item>
			<first>nL</first>
			<second>
				<count>0</count>
				<item_version>0</item_version>
			</second>
		</item>
		<item>
			<first>pyrFilOut_V</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>call</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>60</item>
					</second>
				</item>
			</second>
		</item>
	</dp_port_io_nodes>
	<port2core class_id="63" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</port2core>
	<node2core>
		<count>10</count>
		<item_version>0</item_version>
		<item class_id="64" tracking_level="0" version="0">
			<first>6</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>7</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>11</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>14</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>17</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>20</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>25</first>
			<second>RAM</second>
		</item>
		<item>
			<first>26</first>
			<second>RAM</second>
		</item>
		<item>
			<first>27</first>
			<second>FIFO</second>
		</item>
		<item>
			<first>30</first>
			<second>FIFO</second>
		</item>
	</node2core>
</syndb>
</boost_serialization>

