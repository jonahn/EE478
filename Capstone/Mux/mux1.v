module mux1(counter_0_3,LFSR_0_3,select,mux_out_0_3, reset_counter, final_reset_counter/*, rGPIO, LFSR_clk, counter_clk*/);

input [3:0] counter_0_3;
input [3:0] LFSR_0_3;
input select;
input reset_counter;
output final_reset_counter;
//input rGPIO;
output [3:0] mux_out_0_3;
//output counter_clk;
//output LFSR_clk;

wire  mux_out_0_3;

assign mux_out_0_3 = (select) ? LFSR_0_3 : counter_0_3;
assign final_reset_counter = !reset_counter;
//assign LFSR_clk = (select) ? rGPIO: 0;
//assign counter_clk = (!select) ? rGPIO: 0;

endmodule

