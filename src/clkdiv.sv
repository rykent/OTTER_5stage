`timescale 1ns / 1ps

module clkdiv (
	input clk_in,    // Clock
	output logic clk_out = 0
);


	always_ff @(posedge clk_in) begin
		clk_out <= ~clk_out;
	end

endmodule : clkdiv