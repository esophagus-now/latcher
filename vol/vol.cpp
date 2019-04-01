#include <hls_stream.h>
#include <ap_int.h>

typedef ap_uint<8> dt;

void volume_ctl(
	hls::stream<dt>& in, //source of input samples
	hls::stream<dt>& out //source of output samples
	) {
#pragma HLS INTERFACE axis register both port=out
#pragma HLS INTERFACE axis register both port=in

	dt volume_adjust = 2;
	dt tmp;
	in >> tmp; //Read input from input stream
	out << (tmp*volume_adjust); //Output modified value
}
