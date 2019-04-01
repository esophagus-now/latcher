#include <hls_stream.h>
#include <ap_int.h>

using namespace hls;

void noisey(
	stream<ap_uint<8> > &out
) {
	//Force latency for the sake of testing
#pragma HLS LATENCY min=3
	static ap_uint<8> state = 1;
	out << state;
	ap_uint<8> tmp = 0;
	for (int i = 0; i < 5; i++) {
		tmp += state;
	}
	state = tmp;
}
