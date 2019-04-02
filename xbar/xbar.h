#ifndef XBAR_H
#define XBAR_H 1

#include <hls_stream.h>
#include <ap_int.h>

typedef ap_uint<8> dt;


#define mkstream(x,y) hls::stream<dt> &x##y
#define mkint(x,y) int x##y
#define do4(x,y) x(y,0), x(y,1), x(y,2), x(y,3)
#define do4_nocomma(x,y) x(y,0) x(y,1) x(y,2) x(y,3)

void xbar(
	do4(mkstream,in),
	do4(mkstream,out),
	do4(mkint,src)//,
	//int sync
);

#endif
