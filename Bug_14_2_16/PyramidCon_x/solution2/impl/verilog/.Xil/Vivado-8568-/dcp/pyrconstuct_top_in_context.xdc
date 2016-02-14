create_clock -period 5.00000011102230600 [get_ports ap_clk]
set_property -quiet IS_IP_OOC_CELL TRUE [get_cells -of [get_ports -no_traverse -quiet ap_clk]]
