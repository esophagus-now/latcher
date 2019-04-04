#ifndef TRIANGLE_H
#define TRIANGLE_H 1

#include <hls_stream.h>
#include <ap_int.h>

typedef struct {
	unsigned padding :8; //Padding
	signed data	:24; //Sample
} padded_sample;

void triangle(
	hls::stream<padded_sample> &out
);

#endif
