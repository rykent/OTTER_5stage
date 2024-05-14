`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Ryken Thompson
// 
// Create Date: 10/17/2023 07:22:08 PM
// Design Name: Immediate Generator
// Module Name: IMMED_GEN
// Target Devices: Basys3
// Description: Immediate Generator for OTTER MCU
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module IMMED_GEN(
    input [31:0] INSTRUCT,
    output logic [31:0] IMM
    );
    
    always_comb begin
        case (INSTRUCT[6:0])
            7'b0010011: begin //I-TYPE arithmetic ops
                IMM = {{21{INSTRUCT[31]}}, INSTRUCT[30:20]};
            end
            7'b1100111: begin //I-TYPE jalr
                IMM = {{21{INSTRUCT[31]}}, INSTRUCT[30:20]};
            end
            7'b0000011: begin //I-TYPE loads
                IMM = {{21{INSTRUCT[31]}}, INSTRUCT[30:20]};
            end
            7'b0100011: begin //S-TYPE
                IMM = {{21{INSTRUCT[31]}}, INSTRUCT[30:25], INSTRUCT[11:7]};
            end
            7'b0110111: begin //U-TYPE lui
                IMM = {INSTRUCT[31:12], 12'b0};
            end
            7'b0010111: begin //U-TYPE auipc
                IMM = {INSTRUCT[31:12], 12'b0};
            end
            7'b1101111: begin //J-TYPE
                IMM = {{12{INSTRUCT[31]}}, INSTRUCT[19:12], INSTRUCT[20], INSTRUCT[30:21], 1'b0};
            end
            7'b1100011: begin //BRANCH
                IMM = {{20{INSTRUCT[31]}}, INSTRUCT[7], INSTRUCT[30:25], INSTRUCT[11:8], 1'b0};
            end
            default: begin
                IMM = 32'hDEADBEEF;
            end
        endcase
    end
    
endmodule
