`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Ryken Thompson
// 
// Create Date: 10/02/2023 09:47:53 AM
// Design Name: Program Counter
// Module Name: PC
// Target Devices: Basys3
// Description: Program Counter for OTTER MCU
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module PC(
    //PC IN OUTS
    input PC_WRITE,
    input PC_RST,
    input [31:0] PC_DIN,
    input CLK,
    output logic [31:0] PC_COUNT
    
    );

    always_ff @ (posedge CLK) begin
        if (PC_RST) begin //RESET
            PC_COUNT <= 0;
        end
        else if (PC_WRITE) begin // ENABLE
            PC_COUNT <= PC_DIN;
        end
        //Else hold value
    end
    
endmodule
