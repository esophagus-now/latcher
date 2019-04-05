#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /workspace/latcher32/latcher32/solution1/.autopilot/db/a.g.bc ${1+"$@"}
