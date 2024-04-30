`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Ryken Thompson
// 
// Create Date: 04/23/2024
// Design Name: OTTER 5 Stage Hazard Detection Unit
// Module Name: hazard_detection_unit
// Target Devices: Basys3
// Description: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module hazard_detection_unit (
	input [31:0] instr,
	input id_ex_memRead2,
	input [4:0] id_ex_rd,
	output pcWrite,
	output logic stall
);
	logic [4:0] if_id_rs1, if_id_rs2;

	assign if_id_rs1 = instr[24:20];
	assign if_id_rs2 = instr[19:15];


	assign pcWrite = ~stall;

	always_comb begin
		//Load-Use Hazard
		if (id_ex_memRead2 && (id_ex_rd == if_id_rs2 || id_ex_rd == if_id_rs1)) begin
			stall = 1'b1;
		end
		else begin
			stall = 1'b0;
		end
	end

endmodule : hazard_detection_unit