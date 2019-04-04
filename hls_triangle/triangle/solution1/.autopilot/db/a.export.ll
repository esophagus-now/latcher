; ModuleID = '/workspace/triangle/triangle/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@val_V = internal unnamed_addr global i24 0
@triangle_str = internal unnamed_addr constant [9 x i8] c"triangle\00"
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@err = internal unnamed_addr global i32 -48000, align 4
@p_str3 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str2 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str1 = private unnamed_addr constant [13 x i8] c"ap_ctrl_none\00", align 1
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

define void @triangle(i32* %out_V) {
codeRepl_ifconv:
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %out_V), !map !43
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @triangle_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [13 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32* %out_V, [5 x i8]* @p_str2, i32 1, i32 1, [5 x i8]* @p_str3, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  %val_V_load = load i24* @val_V, align 4
  %tmp = call i32 @_ssdm_op_BitConcatenate.i32.i24.i8(i24 %val_V_load, i8 0)
  call void @_ssdm_op_Write.axis.volatile.i32P(i32* %out_V, i32 %tmp)
  %err_load = load i32* @err, align 4
  %tmp_6 = add nsw i32 %err_load, 32000
  %tmp_7 = icmp sgt i32 %tmp_6, 48000
  %tmp_8 = add nsw i32 %err_load, -64000
  %val_V_new_v_cast_cas = select i1 %tmp_7, i24 349526, i24 349525
  %val_V_new = add i24 %val_V_load, %val_V_new_v_cast_cas
  %err_new = select i1 %tmp_7, i32 %tmp_8, i32 %tmp_6
  store i32 %err_new, i32* @err, align 4
  store i24 %val_V_new, i24* @val_V, align 4
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

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

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i24.i8(i24, i8) nounwind readnone {
entry:
  %empty = zext i24 %0 to i32
  %empty_2 = zext i8 %1 to i32
  %empty_3 = shl i32 %empty, 8
  %empty_4 = or i32 %empty_3, %empty_2
  ret i32 %empty_4
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

!opencl.kernels = !{!0, !7, !10, !10, !12, !18, !21, !10, !10, !12, !27, !29, !32, !12, !34, !34, !12, !12}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!36}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"stream<padded_sample> &"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"out"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !1, metadata !2, metadata !8, metadata !4, metadata !9, metadata !6}
!8 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!9 = metadata !{metadata !"kernel_arg_name", metadata !""}
!10 = metadata !{null, metadata !1, metadata !2, metadata !8, metadata !4, metadata !11, metadata !6}
!11 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!12 = metadata !{null, metadata !13, metadata !14, metadata !15, metadata !16, metadata !17, metadata !6}
!13 = metadata !{metadata !"kernel_arg_addr_space"}
!14 = metadata !{metadata !"kernel_arg_access_qual"}
!15 = metadata !{metadata !"kernel_arg_type"}
!16 = metadata !{metadata !"kernel_arg_type_qual"}
!17 = metadata !{metadata !"kernel_arg_name"}
!18 = metadata !{null, metadata !1, metadata !2, metadata !19, metadata !4, metadata !20, metadata !6}
!19 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &"}
!20 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !6}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<24, true> &", metadata !"int"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!27 = metadata !{null, metadata !1, metadata !2, metadata !28, metadata !4, metadata !20, metadata !6}
!28 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!29 = metadata !{null, metadata !1, metadata !2, metadata !30, metadata !4, metadata !31, metadata !6}
!30 = metadata !{metadata !"kernel_arg_type", metadata !"const padded_sample &"}
!31 = metadata !{metadata !"kernel_arg_name", metadata !"wdata"}
!32 = metadata !{null, metadata !1, metadata !2, metadata !30, metadata !4, metadata !33, metadata !6}
!33 = metadata !{metadata !"kernel_arg_name", metadata !"din"}
!34 = metadata !{null, metadata !1, metadata !2, metadata !8, metadata !4, metadata !35, metadata !6}
!35 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!36 = metadata !{metadata !37, [1 x i32]* @llvm_global_ctors_0}
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 31, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"llvm.global_ctors.0", metadata !41, metadata !"", i32 0, i32 31}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 0, i32 1}
!43 = metadata !{metadata !44, metadata !47, metadata !52, metadata !57}
!44 = metadata !{i32 0, i32 7, metadata !45}
!45 = metadata !{metadata !46}
!46 = metadata !{metadata !"out.V.padding", metadata !41, metadata !"unsigned int", i32 0, i32 7}
!47 = metadata !{i32 8, i32 15, metadata !48}
!48 = metadata !{metadata !49}
!49 = metadata !{metadata !"out.V.data", metadata !50, metadata !"int", i32 0, i32 7}
!50 = metadata !{metadata !51}
!51 = metadata !{i32 0, i32 0, i32 2}
!52 = metadata !{i32 16, i32 23, metadata !53}
!53 = metadata !{metadata !54}
!54 = metadata !{metadata !"out.V.data", metadata !55, metadata !"int", i32 0, i32 7}
!55 = metadata !{metadata !56}
!56 = metadata !{i32 1, i32 1, i32 2}
!57 = metadata !{i32 24, i32 31, metadata !58}
!58 = metadata !{metadata !59}
!59 = metadata !{metadata !"out.V.data", metadata !60, metadata !"int", i32 0, i32 7}
!60 = metadata !{metadata !61}
!61 = metadata !{i32 2, i32 2, i32 2}
