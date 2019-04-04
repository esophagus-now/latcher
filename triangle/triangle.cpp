#include "triangle.h"
#include <hls_stream.h>
#include <ap_int.h>

using namespace hls;

//fs = 48000
//desired f = 1000
//So we want

#define FREQ 1000
//These macros only make sense for an integer frequency
#define FS 48000
#define WIDTH 24
#define STEP ((int)(((1UL<<WIDTH)*FREQ)/FS))
#define ERRSTEP ((int)(((1UL<<WIDTH)*FREQ)%FS)<<1)
#define ERRTHRESH FS
#define ERRCORR (FS<<1)


//Does something similar to Bresenham to get a really accurate frequency
void triangle(
	stream<padded_sample> &out
) {
#pragma HLS INTERFACE axis register both port=out
#pragma HLS DATA_PACK variable=out
#pragma HLS INTERFACE ap_ctrl_none port=return
	static ap_int<24> val = 0;

	padded_sample tmp = {0, val};

	out << tmp;

	static int err = -FS;
	val += STEP;
	err += ERRSTEP;
	if (err > ERRTHRESH) {
		err -= ERRCORR;
		val++;
	}
}

