#ifndef NOISEGEN_H
#define NOISEGEN_H 1
#include <hls_stream.h>
#include <ap_int.h>

void noisey(
	hls::stream<ap_uint<8> > &out
);
#endif
