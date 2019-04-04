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
#define STEP ((sample)(((1UL<<WIDTH)*FREQ)/FS))
#define ERRSTEP ((int)(((1UL<<WIDTH)*FREQ)%FS)<<1)
#define ERRTHRESH FS
#define ERRCORR (FS<<1)


//Does something similar to Bresenham to get a really accurate frequency
void triangle(
	stream<sample> &out
) {
	static sample val = 0;
	static int err = -FS;
	val += STEP;
	err += ERRSTEP;
	if (err > ERRTHRESH) {
		err -= ERRCORR;
		val++;
	}

	out << val;
}
