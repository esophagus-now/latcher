#include <hls_stream.h>
#include <ap_int.h>
#include "xbar.h"

void xbar(
	do4(mkstream,in),
	do4(mkstream,out),
	do4(mkint,src)
) {
#include "pragmas.h"

#define mark(x,y) x[src##y] = true
	bool toTransfer[4] = {false, false, false, false};
	do4(mark, toTransfer);

#define xferfrom(x,y) if (x[y]) in##y >> tmp[y];
	dt tmp[4];
	do4_nocomma(xferfrom, toTransfer)

#define xferto(x,y) x##y << tmp[src##y];
	do4_nocomma(xferto, out)
}
