#pragma HLS PIPELINE
#pragma HLS INTERFACE axis register both port=in0
#pragma HLS INTERFACE axis register both port=in1
#pragma HLS INTERFACE axis register both port=in2
#pragma HLS INTERFACE axis register both port=in3
#pragma HLS INTERFACE axis register both port=out0
#pragma HLS INTERFACE axis register both port=out1
#pragma HLS INTERFACE axis register both port=out2
#pragma HLS INTERFACE axis register both port=out3
#pragma HLS INTERFACE s_axilite port=src0 bundle=CTRL_BUS
#pragma HLS INTERFACE s_axilite port=src1 bundle=CTRL_BUS
#pragma HLS INTERFACE s_axilite port=src2 bundle=CTRL_BUS
#pragma HLS INTERFACE s_axilite port=src3 bundle=CTRL_BUS
//#pragma HLS INTERFACE s_axilite port=sync bundle=CTRL_BUS
