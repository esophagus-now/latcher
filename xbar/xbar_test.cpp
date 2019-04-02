#include <iostream>
#include "../xbar.h"

using namespace std;

int main() {
#define defstream(x,y) hls::stream<dt> x##y(#x #y);
	do4_nocomma(defstream, stream)
	do4_nocomma(defstream, outstream)
	stream0 << 4;
	stream1 << 6;
	stream2 << 2;
	stream3 << 1;

#define cat(x,y) x##y
	xbar(do4(cat,stream), do4(cat,outstream), 3, 3, 3, 3);
	//Right, we've read from stream3, so we need to put new data in
	stream3 << 55;

#define printstream(x,y) {dt tmp; x##y >> tmp; cout << tmp << "\t";}
	do4_nocomma(printstream,outstream)
	cout << endl;

	xbar(do4(cat,stream), do4(cat,outstream), 3,2,1,0);
	do4_nocomma(printstream,outstream)
	cout << endl;
}
