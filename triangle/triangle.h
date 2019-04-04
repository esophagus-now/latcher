#ifndef TRIANGLE_H
#define TRIANGLE_H 1

#include <hls_stream.h>
#include <ap_int.h>

typedef ap_int<24> sample;

void triangle(
	hls::stream<sample> &out
);

#endif
