#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /workspace/triangle/triangle/solution1/.autopilot/db/a.g.bc ${1+"$@"}
