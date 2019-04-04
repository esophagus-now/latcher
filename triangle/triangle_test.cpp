#include "triangle.h"
#include <iostream>

using namespace std;

int main() {
	hls::stream<sample> mystream("sample stream");
	for (int i = 0; i < 100; i++) {
		triangle(mystream);
		sample tmp;
		mystream >> tmp;
		cout << tmp << "\t";
	}
}
