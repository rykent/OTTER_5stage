`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Ryken Thompson
// 
// Create Date: 04/23/2024
// Design Name: OTTER 5 Stage Forwarding Unit
// Module Name: forwarding
// Target Devices: Basys3
// Description: Creates 3 signals based on the 3 possible branch comparisons in the OTTER MCU
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module forwarding (
	input [4:0] id_ex_rs1,
	input [4:0] id_ex_rs2,
	input [4:0] ex_mem_rd,
	input ex_mem_regWrite,
	input mem_wb_regWrite,
	input [4:0] mem_wb_rd,
	output logic [1:0] forwardA_sel,
	output logic [1:0] forwardB_sel
);

	always_comb begin
		//EX hazard
		if (ex_mem_regWrite && (ex_mem_rd != 0) && (ex_mem_rd == id_ex_rs1)) begin
			forwardA_sel = 2'b10;
		end
		//Mem Hazard
		else if (mem_wb_regWrite && (mem_wb_rd != 0) && (mem_wb_rd ==  id_ex_rs1)) begin
			forwardA_sel = 2'b01;
		end
		//No Hazard
		else begin
			forwardA_sel = 2'b00;
		end

		//Ex Hazard
		if (ex_mem_regWrite && (ex_mem_rd != 0) && (ex_mem_rd == id_ex_rs2)) begin
			forwardB_sel = 2'b10;
		end
		//Mem Hazard
		else if (mem_wb_regWrite && (mem_wb_rd != 0) && (mem_wb_rd ==  id_ex_rs2)) begin
			forwardB_sel = 2'b01;
		end
		//No Hazard
		else begin
			forwardB_sel = 2'b00;
		end
	end

endmodule