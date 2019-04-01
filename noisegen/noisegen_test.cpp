#include <iostream>
#include <ap_int.h>
#include "noisegen.h"

using namespace std;

int main() {
	hls::stream<ap_uint<8> > output;
	int count = 256;
	while(count--) {
		ap_uint<8> tmp;
		noisey(output);
		output >> tmp;
		cout << tmp << endl;
	}
	return 0;
}
