<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="11">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>cmpy_complex_top_myatan2_complex_ap_fixed_s</name>
		<ret_bitwidth>20</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>xin</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>xin</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>24</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>9</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_2">
				<Value>
					<Obj>
						<type>0</type>
						<id>3</id>
						<name>xin_read</name>
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
					<bitwidth>24</bitwidth>
				</Value>
				<oprand_edges>
					<count>2</count>
					<item_version>0</item_version>
					<item>14</item>
					<item>15</item>
				</oprand_edges>
				<opcode>read</opcode>
			</item>
			<item class_id_reference="9" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>4</id>
						<name>tmp</name>
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
					<bitwidth>10</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>16</item>
				</oprand_edges>
				<opcode>trunc</opcode>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>5</id>
						<name>x_cartesian_M_real_V</name>
						<fileName>DispCheck/disp.cpp</fileName>
						<fileDirectory>f:/FPGA/exp</fileDirectory>
						<lineNumber>88</lineNumber>
						<contextFuncName>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="11" tracking_level="0" version="0">
								<first>f:/FPGA/exp</first>
								<second class_id="12" tracking_level="0" version="0">
									<count>1</count>
									<item_version>0</item_version>
									<item class_id="13" tracking_level="0" version="0">
										<first class_id="14" tracking_level="0" version="0">
											<first>DispCheck/disp.cpp</first>
											<second>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</second>
										</first>
										<second>88</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>x.cartesian._M_real.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>15</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>18</item>
					<item>19</item>
					<item>21</item>
				</oprand_edges>
				<opcode>bitconcatenate</opcode>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>6</id>
						<name>tmp_1</name>
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
					<bitwidth>10</bitwidth>
				</Value>
				<oprand_edges>
					<count>4</count>
					<item_version>0</item_version>
					<item>23</item>
					<item>24</item>
					<item>26</item>
					<item>28</item>
				</oprand_edges>
				<opcode>partselect</opcode>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>7</id>
						<name>x_cartesian_M_imag_V</name>
						<fileName>DispCheck/disp.cpp</fileName>
						<fileDirectory>f:/FPGA/exp</fileDirectory>
						<lineNumber>89</lineNumber>
						<contextFuncName>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA/exp</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</second>
										</first>
										<second>89</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>x.cartesian._M_imag.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>15</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>29</item>
					<item>30</item>
					<item>31</item>
				</oprand_edges>
				<opcode>bitconcatenate</opcode>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>8</id>
						<name>p_Val2_s</name>
						<fileName>C:/Xilinx2016/Vivado_HLS/2015.4/common/technology/autopilot/hls/dsp/hls_atan2_cordic.h</fileName>
						<fileDirectory>f:/FPGA/exp</fileDirectory>
						<lineNumber>71</lineNumber>
						<contextFuncName>atan2&amp;lt;0, 16, 16, 0&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA/exp</first>
								<second>
									<count>3</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>C:/Xilinx2016/Vivado_HLS/2015.4/common/technology/autopilot/hls/dsp/hls_atan2_cordic.h</first>
											<second>atan2&amp;lt;0, 16, 16, 0&amp;gt;</second>
										</first>
										<second>71</second>
									</item>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>atan2_top</second>
										</first>
										<second>53</second>
									</item>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</second>
										</first>
										<second>94</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>atanX.phase.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>33</item>
					<item>34</item>
					<item>35</item>
				</oprand_edges>
				<opcode>call</opcode>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>9</id>
						<name>tmp_2</name>
						<fileName>C:/Xilinx2016/Vivado_HLS/2015.4/common/technology/autopilot/hls/dsp/hls_atan2_cordic.h</fileName>
						<fileDirectory>f:/FPGA/exp</fileDirectory>
						<lineNumber>71</lineNumber>
						<contextFuncName>atan2&amp;lt;0, 16, 16, 0&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA/exp</first>
								<second>
									<count>3</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>C:/Xilinx2016/Vivado_HLS/2015.4/common/technology/autopilot/hls/dsp/hls_atan2_cordic.h</first>
											<second>atan2&amp;lt;0, 16, 16, 0&amp;gt;</second>
										</first>
										<second>71</second>
									</item>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>atan2_top</second>
										</first>
										<second>53</second>
									</item>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</second>
										</first>
										<second>94</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>15</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>36</item>
				</oprand_edges>
				<opcode>trunc</opcode>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>10</id>
						<name>ssdm_int_V_write_assign</name>
						<fileName>DispCheck/disp.cpp</fileName>
						<fileDirectory>f:/FPGA/exp</fileDirectory>
						<lineNumber>98</lineNumber>
						<contextFuncName>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA/exp</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</second>
										</first>
										<second>98</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>ssdm_int&amp;lt;20 + 1024 * 0, true&amp;gt;.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>20</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>38</item>
					<item>39</item>
					<item>40</item>
				</oprand_edges>
				<opcode>bitconcatenate</opcode>
			</item>
			<item class_id_reference="9" object_id="_10">
				<Value>
					<Obj>
						<type>0</type>
						<id>11</id>
						<name></name>
						<fileName>DispCheck/disp.cpp</fileName>
						<fileDirectory>f:/FPGA/exp</fileDirectory>
						<lineNumber>99</lineNumber>
						<contextFuncName>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>f:/FPGA/exp</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>DispCheck/disp.cpp</first>
											<second>myatan2&amp;lt;std::complex&amp;lt;ap_fixed&amp;lt;10, 1, 5, 3, 0&amp;gt; &amp;gt;, ap_fixed&amp;lt;20, 2, 0, 3, 0&amp;gt; &amp;gt;</second>
										</first>
										<second>99</second>
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
					<count>1</count>
					<item_version>0</item_version>
					<item>41</item>
				</oprand_edges>
				<opcode>ret</opcode>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>4</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_11">
				<Value>
					<Obj>
						<type>2</type>
						<id>20</id>
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
					<bitwidth>5</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>0</content>
			</item>
			<item class_id_reference="16" object_id="_12">
				<Value>
					<Obj>
						<type>2</type>
						<id>25</id>
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
					<bitwidth>32</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>10</content>
			</item>
			<item class_id_reference="16" object_id="_13">
				<Value>
					<Obj>
						<type>2</type>
						<id>27</id>
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
					<bitwidth>32</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>19</content>
			</item>
			<item class_id_reference="16" object_id="_14">
				<Value>
					<Obj>
						<type>2</type>
						<id>32</id>
						<name>cmpy_complex_top_cordic_base</name>
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
					<bitwidth>16</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:cmpy_complex_top_cordic_base&gt;</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_15">
				<Obj>
					<type>3</type>
					<id>12</id>
					<name>cmpy_complex_top_myatan2&lt;complex,ap_fixed &gt;</name>
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
					<count>9</count>
					<item_version>0</item_version>
					<item>3</item>
					<item>4</item>
					<item>5</item>
					<item>6</item>
					<item>7</item>
					<item>8</item>
					<item>9</item>
					<item>10</item>
					<item>11</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>16</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_16">
				<id>15</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>3</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_17">
				<id>16</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>4</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_18">
				<id>19</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>5</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_19">
				<id>21</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>5</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_20">
				<id>24</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>6</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_21">
				<id>26</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>6</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_22">
				<id>28</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>6</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_23">
				<id>30</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>7</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_24">
				<id>31</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>7</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_25">
				<id>33</id>
				<edge_type>1</edge_type>
				<source_obj>32</source_obj>
				<sink_obj>8</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_26">
				<id>34</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>8</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_27">
				<id>35</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>8</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_28">
				<id>36</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>9</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_29">
				<id>39</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>10</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_30">
				<id>40</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>10</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_31">
				<id>41</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>11</sink_obj>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_32">
			<mId>1</mId>
			<mTag>cmpy_complex_top_myatan2&lt;complex,ap_fixed &gt;</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>12</item>
			</basic_blocks>
			<mII>1</mII>
			<mDepth>11</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>10</mMinLatency>
			<mMaxLatency>-1</mMaxLatency>
			<mIsDfPipe>0</mIsDfPipe>
			<mDfPipe class_id="-1"></mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="24" tracking_level="1" version="0" object_id="_33">
		<states class_id="25" tracking_level="0" version="0">
			<count>11</count>
			<item_version>0</item_version>
			<item class_id="26" tracking_level="1" version="0" object_id="_34">
				<id>1</id>
				<operations class_id="27" tracking_level="0" version="0">
					<count>6</count>
					<item_version>0</item_version>
					<item class_id="28" tracking_level="1" version="0" object_id="_35">
						<id>3</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_36">
						<id>4</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_37">
						<id>5</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_38">
						<id>6</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_39">
						<id>7</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_40">
						<id>8</id>
						<stage>11</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_41">
				<id>2</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_42">
						<id>8</id>
						<stage>10</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_43">
				<id>3</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_44">
						<id>8</id>
						<stage>9</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_45">
				<id>4</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_46">
						<id>8</id>
						<stage>8</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_47">
				<id>5</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_48">
						<id>8</id>
						<stage>7</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_49">
				<id>6</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_50">
						<id>8</id>
						<stage>6</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_51">
				<id>7</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_52">
						<id>8</id>
						<stage>5</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_53">
				<id>8</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_54">
						<id>8</id>
						<stage>4</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_55">
				<id>9</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_56">
						<id>8</id>
						<stage>3</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_57">
				<id>10</id>
				<operations>
					<count>1</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_58">
						<id>8</id>
						<stage>2</stage>
						<latency>11</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="26" object_id="_59">
				<id>11</id>
				<operations>
					<count>5</count>
					<item_version>0</item_version>
					<item class_id_reference="28" object_id="_60">
						<id>2</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_61">
						<id>8</id>
						<stage>1</stage>
						<latency>11</latency>
					</item>
					<item class_id_reference="28" object_id="_62">
						<id>9</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_63">
						<id>10</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="28" object_id="_64">
						<id>11</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
		</states>
		<transitions class_id="29" tracking_level="0" version="0">
			<count>10</count>
			<item_version>0</item_version>
			<item class_id="30" tracking_level="1" version="0" object_id="_65">
				<inState>1</inState>
				<outState>2</outState>
				<condition class_id="31" tracking_level="0" version="0">
					<id>10</id>
					<sop class_id="32" tracking_level="0" version="0">
						<count>1</count>
						<item_version>0</item_version>
						<item class_id="33" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
			<item class_id_reference="30" object_id="_66">
				<inState>2</inState>
				<outState>3</outState>
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
			<item class_id_reference="30" object_id="_67">
				<inState>3</inState>
				<outState>4</outState>
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
			<item class_id_reference="30" object_id="_68">
				<inState>4</inState>
				<outState>5</outState>
				<condition>
					<id>13</id>
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
			<item class_id_reference="30" object_id="_69">
				<inState>5</inState>
				<outState>6</outState>
				<condition>
					<id>14</id>
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
			<item class_id_reference="30" object_id="_70">
				<inState>6</inState>
				<outState>7</outState>
				<condition>
					<id>15</id>
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
			<item class_id_reference="30" object_id="_71">
				<inState>7</inState>
				<outState>8</outState>
				<condition>
					<id>16</id>
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
			<item class_id_reference="30" object_id="_72">
				<inState>8</inState>
				<outState>9</outState>
				<condition>
					<id>17</id>
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
			<item class_id_reference="30" object_id="_73">
				<inState>9</inState>
				<outState>10</outState>
				<condition>
					<id>18</id>
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
			<item class_id_reference="30" object_id="_74">
				<inState>10</inState>
				<outState>11</outState>
				<condition>
					<id>19</id>
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
	<node_label_latency class_id="35" tracking_level="0" version="0">
		<count>9</count>
		<item_version>0</item_version>
		<item class_id="36" tracking_level="0" version="0">
			<first>3</first>
			<second class_id="37" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>4</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>5</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>6</first>
			<second>
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
			<first>8</first>
			<second>
				<first>0</first>
				<second>10</second>
			</second>
		</item>
		<item>
			<first>9</first>
			<second>
				<first>10</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>10</first>
			<second>
				<first>10</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>11</first>
			<second>
				<first>10</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="38" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="39" tracking_level="0" version="0">
			<first>12</first>
			<second class_id="40" tracking_level="0" version="0">
				<first>0</first>
				<second>10</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="41" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="42" tracking_level="1" version="0" object_id="_75">
			<region_name>cmpy_complex_top_myatan2&lt;complex,ap_fixed &gt;</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>12</item>
			</basic_blocks>
			<nodes>
				<count>0</count>
				<item_version>0</item_version>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>8</region_type>
			<interval>1</interval>
			<pipe_depth>11</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="43" tracking_level="0" version="0">
		<count>8</count>
		<item_version>0</item_version>
		<item class_id="44" tracking_level="0" version="0">
			<first>26</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>3</item>
			</second>
		</item>
		<item>
			<first>32</first>
			<second>
				<count>11</count>
				<item_version>0</item_version>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
			</second>
		</item>
		<item>
			<first>38</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>4</item>
			</second>
		</item>
		<item>
			<first>42</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>5</item>
			</second>
		</item>
		<item>
			<first>51</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>6</item>
			</second>
		</item>
		<item>
			<first>61</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>7</item>
			</second>
		</item>
		<item>
			<first>70</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>9</item>
			</second>
		</item>
		<item>
			<first>74</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>10</item>
			</second>
		</item>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="46" tracking_level="0" version="0">
		<count>6</count>
		<item_version>0</item_version>
		<item class_id="47" tracking_level="0" version="0">
			<first>ssdm_int_V_write_assign_fu_74</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>10</item>
			</second>
		</item>
		<item>
			<first>tmp_1_fu_51</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>6</item>
			</second>
		</item>
		<item>
			<first>tmp_2_fu_70</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>9</item>
			</second>
		</item>
		<item>
			<first>tmp_fu_38</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>4</item>
			</second>
		</item>
		<item>
			<first>x_cartesian_M_imag_V_fu_61</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>7</item>
			</second>
		</item>
		<item>
			<first>x_cartesian_M_real_V_fu_42</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>5</item>
			</second>
		</item>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>1</count>
		<item_version>0</item_version>
		<item>
			<first>grp_cmpy_complex_top_cordic_base_fu_32</first>
			<second>
				<count>11</count>
				<item_version>0</item_version>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
				<item>8</item>
			</second>
		</item>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>1</count>
		<item_version>0</item_version>
		<item>
			<first>xin_read_read_fu_26</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>3</item>
			</second>
		</item>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="48" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="49" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="50" tracking_level="0" version="0">
			<first>xin</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>read</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>3</item>
					</second>
				</item>
			</second>
		</item>
	</dp_port_io_nodes>
	<port2core class_id="51" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</port2core>
	<node2core>
		<count>0</count>
		<item_version>0</item_version>
	</node2core>
</syndb>
</boost_serialization>

