module STATE(
  increment, 
  latch, 
  dataValid, 
  chipSelect, 
  outputEnable, 
  readEnable,

  read,
  write,
  clock,
  reset
  );

  output reg increment, latch, dataValid;
  output reg chipSelect, outputEnable, readEnable;

  input read, write, clock, reset;

  parameter [3:0] R1 = 4'd0, R2 = 4'd1, R3 = 4'd2; 
  parameter [3:0] R4 = 4'd3, R5 = 4'd4, R6 = 4'd5; 

  parameter [3:0] W1 = 4'd6, W2 = 4'd7, W3 = 4'd8; 
  parameter [3:0] W4 = 4'd9, W5 = 4'd10, W6 = 4'd11; 

  wire  [3:0] PS; 
  reg   [3:0] NS;


  always @(PS) 
    case(PS)
      R1: if(read) NS = R2;
          else     NS = W1;
      R2: NS = R3;
      R3: NS = R4;
      R4: NS = R5;
      R5: NS = R6;
      R6: NS = R1;

      W1: if(write) NS = W2;
          else      NS = R1;
      W2: NS = W3;
      W3: NS = W4;
      W4: NS = W5;
      W5: NS = W6;
      W6: NS = W1;

    endcase

  always @(PS)
    chipSelect = 0;

  always @(PS) 
    case(PS)
      R1: 
      begin  
          increment     = 0;
          readEnable    = 1;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 1;
      end

      R2:
      begin
          increment     = 1;
          readEnable    = 1;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 1;
      end 

      R3:
      begin
          increment     = 0;
          readEnable    = 1;
          latch         = 1;
          outputEnable  = 1;
          dataValid     = 1;
      end

      R4: 
      begin
          increment     = 0;
          readEnable    = 1;
          latch         = 0;
          outputEnable  = 0;
          dataValid     = 1;
      end

      R5: 
      begin
          increment     = 0;
          readEnable    = 1;
          latch         = 0;
          outputEnable  = 0;
          dataValid     = 0;
      end

      R6: 
      begin
          increment     = 0;
          readEnable    = 1;
          latch         = 0;
          outputEnable  = 0;
          dataValid     = 1;
      end

      W1: 
      begin
          increment     = 0;
          readEnable    = 0;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 0;
      end

      W2: 
      begin
          increment     = 1;
          readEnable    = 0;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 0;
      end

      W3: 
      begin
          increment     = 0;
          readEnable    = 0;
          latch         = 1;
          outputEnable  = 1;
          dataValid     = 0;
      end

      W4: 
      begin
          increment     = 0;
          readEnable    = 0;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 0;
      end

      W5: 
      begin
          increment     = 0;
          readEnable    = 0;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 1;
      end

      W6: 
      begin
          increment     = 0;
          readEnable    = 0;
          latch         = 0;
          outputEnable  = 1;
          dataValid     = 0;
      end

    endcase

D_FF d1 (PS[0], NS[0], reset, clock);
D_FF d2 (PS[1], NS[1], reset, clock);
D_FF d3 (PS[2], NS[2], reset, clock);
D_FF d4 (PS[3], NS[3], reset, clock);

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