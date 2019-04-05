; ModuleID = '/workspace/latcher32/latcher32/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@tmp_V = internal unnamed_addr global i32 0
@state = internal unnamed_addr global i2 0, align 1
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@latcher_str = internal unnamed_addr constant [8 x i8] c"latcher\00"
@p_str3 = private unnamed_addr constant [13 x i8] c"ap_ctrl_none\00", align 1
@p_str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str1 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str = private unnamed_addr constant [5 x i8] c"axis\00", align 1

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @latcher(i32* %in_V_V, i32* %out_V_V, i1 %latch_V) {
codeRepl:
  call void (...)* @_ssdm_op_SpecDataflowPipeline(i32 -1, [1 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %in_V_V), !map !47
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %out_V_V), !map !51
  call void (...)* @_ssdm_op_SpecBitsMap(i1 %latch_V), !map !55
  call void (...)* @_ssdm_op_SpecTopModule([8 x i8]* @latcher_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32* %out_V_V, [5 x i8]* @p_str, i32 1, i32 1, [5 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2, [1 x i8]* @p_str2, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32* %in_V_V, [5 x i8]* @p_str, i32 1, i32 1, [5 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2, [1 x i8]* @p_str2, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [13 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2, [1 x i8]* @p_str2, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind
  %latch_V_read = call i1 @_ssdm_op_Read.ap_auto.i1(i1 %latch_V)
  call fastcc void @Block_codeRepl1_proc(i1 %latch_V_read, i32* %in_V_V, i32* %out_V_V)
  ret void
}

define weak void @_ssdm_op_Write.axis.volatile.i32P(i32*, i32) {
entry:
  store i32 %1, i32* %0
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecDataflowPipeline(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_Read.axis.volatile.i32P(i32*) {
entry:
  %empty = load i32* %0
  ret i32 %empty
}

define weak i1 @_ssdm_op_Read.ap_auto.i1(i1) {
entry:
  ret i1 %0
}

define weak i1 @_ssdm_op_NbWriteReq.axis.i32P(i32*, i32) {
entry:
  ret i1 true
}

define weak i1 @_ssdm_op_NbReadReq.axis.i32P(i32*, i32) {
entry:
  ret i1 true
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define internal fastcc void @Block_codeRepl1_proc(i1 %latch_V, i32* %in_V_V, i32* %out_V_V) {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i32* %in_V_V, [5 x i8]* @p_str, i32 1, i32 1, [5 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2, [1 x i8]* @p_str2, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2)
  call void (...)* @_ssdm_op_SpecInterface(i32* %out_V_V, [5 x i8]* @p_str, i32 1, i32 1, [5 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2, [1 x i8]* @p_str2, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str2, [1 x i8]* @p_str2)
  %latch_V_read = call i1 @_ssdm_op_Read.ap_auto.i1(i1 %latch_V)
  %state_load = load i2* @state, align 1
  switch i2 %state_load, label %._crit_edge14 [
    i2 0, label %0
    i2 1, label %1
    i2 -2, label %2
  ]

._crit_edge14:                                    ; preds = %._crit_edge17, %._crit_edge16, %._crit_edge15, %newFuncRoot
  ret void

; <label>:0                                       ; preds = %newFuncRoot
  br i1 %latch_V_read, label %3, label %._crit_edge15

; <label>:1                                       ; preds = %newFuncRoot
  %tmp = call i1 @_ssdm_op_NbReadReq.axis.i32P(i32* %in_V_V, i32 1)
  br i1 %tmp, label %4, label %._crit_edge16

; <label>:2                                       ; preds = %newFuncRoot
  %tmp_1 = call i1 @_ssdm_op_NbWriteReq.axis.i32P(i32* %out_V_V, i32 1)
  br i1 %tmp_1, label %5, label %._crit_edge17

; <label>:3                                       ; preds = %0
  store i2 1, i2* @state, align 1
  br label %._crit_edge15

._crit_edge15:                                    ; preds = %3, %0
  br label %._crit_edge14

; <label>:4                                       ; preds = %1
  %tmp_V_1_1 = call i32 @_ssdm_op_Read.axis.volatile.i32P(i32* %in_V_V)
  store i32 %tmp_V_1_1, i32* @tmp_V, align 4
  store i2 -2, i2* @state, align 1
  br label %._crit_edge16

._crit_edge16:                                    ; preds = %4, %1
  br label %._crit_edge14

; <label>:5                                       ; preds = %2
  %tmp_V_1 = load i32* @tmp_V, align 4
  call void @_ssdm_op_Write.axis.volatile.i32P(i32* %out_V_V, i32 %tmp_V_1)
  store i2 0, i2* @state, align 1
  br label %._crit_edge17

._crit_edge17:                                    ; preds = %5, %2
  br label %._crit_edge14
}

!opencl.kernels = !{!0, !7, !13, !15, !21, !24, !26, !15, !29, !35, !35, !15, !38, !15, !15, !15, !15}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!40}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"stream<dt> &", metadata !"stream<dt> &", metadata !"ap_uint<1>"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"in", metadata !"out", metadata !"latch"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const struct ap_uint<32> &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"wdata"}
!13 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !14, metadata !6}
!14 = metadata !{metadata !"kernel_arg_name", metadata !"din"}
!15 = metadata !{null, metadata !16, metadata !17, metadata !18, metadata !19, metadata !20, metadata !6}
!16 = metadata !{metadata !"kernel_arg_addr_space"}
!17 = metadata !{metadata !"kernel_arg_access_qual"}
!18 = metadata !{metadata !"kernel_arg_type"}
!19 = metadata !{metadata !"kernel_arg_type_qual"}
!20 = metadata !{metadata !"kernel_arg_name"}
!21 = metadata !{null, metadata !8, metadata !9, metadata !22, metadata !11, metadata !23, metadata !6}
!22 = metadata !{metadata !"kernel_arg_type", metadata !"struct ap_uint<32> &"}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"rdata"}
!24 = metadata !{null, metadata !8, metadata !9, metadata !22, metadata !11, metadata !25, metadata !6}
!25 = metadata !{metadata !"kernel_arg_name", metadata !"dout"}
!26 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !28, metadata !6}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<32> &"}
!28 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!29 = metadata !{null, metadata !30, metadata !31, metadata !32, metadata !33, metadata !34, metadata !6}
!30 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!31 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!32 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &", metadata !"int"}
!33 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!34 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !37, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!37 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!38 = metadata !{null, metadata !8, metadata !9, metadata !39, metadata !11, metadata !28, metadata !6}
!39 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!40 = metadata !{metadata !41, [1 x i32]* @llvm_global_ctors_0}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 31, metadata !43}
!43 = metadata !{metadata !44}
!44 = metadata !{metadata !"llvm.global_ctors.0", metadata !45, metadata !"", i32 0, i32 31}
!45 = metadata !{metadata !46}
!46 = metadata !{i32 0, i32 0, i32 1}
!47 = metadata !{metadata !48}
!48 = metadata !{i32 0, i32 31, metadata !49}
!49 = metadata !{metadata !50}
!50 = metadata !{metadata !"in.V.V", metadata !45, metadata !"uint32", i32 0, i32 31}
!51 = metadata !{metadata !52}
!52 = metadata !{i32 0, i32 31, metadata !53}
!53 = metadata !{metadata !54}
!54 = metadata !{metadata !"out.V.V", metadata !45, metadata !"uint32", i32 0, i32 31}
!55 = metadata !{metadata !56}
!56 = metadata !{i32 0, i32 0, metadata !57}
!57 = metadata !{metadata !58}
!58 = metadata !{metadata !"latch.V", metadata !59, metadata !"uint1", i32 0, i32 0}
!59 = metadata !{metadata !60}
!60 = metadata !{i32 0, i32 0, i32 0}
