#ifndef LATCHER_H
#define LATCHER_H 1

#include <ap_int.h>
#include <hls_stream.h>


typedef ap_uint<8> dt;

void latcher(
	hls::stream<dt> &in,
	hls::stream<dt> &out,
	ap_uint<1> latch
);

#endif
