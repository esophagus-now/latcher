#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /workspace/latcher/latcher/solution1/.autopilot/db/a.g.bc ${1+"$@"}
