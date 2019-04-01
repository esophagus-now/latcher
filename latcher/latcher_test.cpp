#include <iostream>
#include "latcher.h"
#include <hls_stream.h>

using namespace std;

int main() {
	hls::stream<dt> testin("testin"), testout("testout");
	testin << 4;
	testin << 5;
	cout << "Point A" << endl;
	latcher(testin, testout, 1);
	cout << "Point B" << endl;
	latcher(testin, testout, 1);
	cout << "Point C" << endl;
	latcher(testin, testout, 0);
	cout << "Point D" << endl;
	latcher(testin, testout, 0);
	cout << "Point E" << endl;
	dt tmp;
	testout >> tmp;
	cout << tmp << endl;
}
