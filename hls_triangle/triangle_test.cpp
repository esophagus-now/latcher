#include "triangle.h"
#include <iostream>

using namespace std;

int main() {
	hls::stream<padded_sample> mystream("sample stream");
	for (int i = 0; i < 100; i++) {
		triangle(mystream);
		padded_sample tmp;
		mystream >> tmp;
		cout << tmp.data << "\t";
	}
}
