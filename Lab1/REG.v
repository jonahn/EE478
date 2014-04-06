module REG_6 (dataOut, dataIn, reset, clk); 

	output [5:0] dataOut; 
	input  [5:0] dataIn; 
	input writeEnable;
	input clk;
	wire [3:0] D;

	D_FF lsba (dataOut[0], D[0] , reset, clk); 
	D_FF lsbb (dataOut[1], D[1] , reset, clk); 
	D_FF lsbc (dataOut[2], D[2] , reset, clk); 
	D_FF lsbd (dataOut[3], D[3] , reset, clk); 


endmodule 


module D_FF (q, d, reset, clk); 

	output q; 
	input d, reset, clk; 
	reg q; // Indicate that q is stateholding  
	  
	always @(posedge clk or posedge reset) 
	  if (reset) 
	    q = 0;  // On reset, set to 0 
	  else 
	    q = d; // Otherwise out = d 
	    
endmodule 