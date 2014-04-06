module REG_6 (dataOut, dataIn, reset, clk); 

	output [5:0] dataOut; 
	input  [5:0] dataIn; 
	input reset;
	input clk;

	D_FF lsba (dataOut[0], dataIn[0] , reset, clk); 
	D_FF lsbb (dataOut[1], dataIn[1] , reset, clk); 
	D_FF lsbc (dataOut[2], dataIn[2] , reset, clk); 
	D_FF lsbd (dataOut[3], dataIn[3] , reset, clk); 
	D_FF lsbe (dataOut[4], dataIn[4] , reset, clk); 
	D_FF lsbf (dataOut[5], dataIn[5] , reset, clk); 

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