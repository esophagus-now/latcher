// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "triangle.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic triangle::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic triangle::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> triangle::ap_ST_fsm_state1 = "1";
const sc_lv<2> triangle::ap_ST_fsm_state2 = "10";
const sc_lv<1> triangle::ap_const_lv1_0 = "0";
const sc_lv<1> triangle::ap_const_lv1_1 = "1";
const sc_lv<2> triangle::ap_const_lv2_0 = "00";
const sc_lv<2> triangle::ap_const_lv2_2 = "10";
const sc_lv<2> triangle::ap_const_lv2_3 = "11";
const sc_lv<2> triangle::ap_const_lv2_1 = "1";
const sc_lv<32> triangle::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> triangle::ap_const_lv32_1 = "1";
const sc_lv<8> triangle::ap_const_lv8_0 = "00000000";
const sc_lv<32> triangle::ap_const_lv32_7D00 = "111110100000000";
const sc_lv<32> triangle::ap_const_lv32_BB80 = "1011101110000000";
const sc_lv<32> triangle::ap_const_lv32_FFFF0600 = "11111111111111110000011000000000";
const sc_lv<24> triangle::ap_const_lv24_55556 = "1010101010101010110";
const sc_lv<24> triangle::ap_const_lv24_55555 = "1010101010101010101";
const bool triangle::ap_const_boolean_1 = true;

triangle::triangle(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_err_new_fu_84_p3);
    sensitive << ( tmp_7_fu_72_p2 );
    sensitive << ( tmp_6_fu_66_p2 );
    sensitive << ( tmp_8_fu_78_p2 );

    SC_METHOD(thread_out_V_1_ack_in);
    sensitive << ( out_V_1_state );

    SC_METHOD(thread_out_V_1_ack_out);
    sensitive << ( out_V_TREADY );

    SC_METHOD(thread_out_V_1_data_out);
    sensitive << ( out_V_1_payload_A );
    sensitive << ( out_V_1_payload_B );
    sensitive << ( out_V_1_sel );

    SC_METHOD(thread_out_V_1_load_A);
    sensitive << ( out_V_1_sel_wr );
    sensitive << ( out_V_1_state_cmp_full );

    SC_METHOD(thread_out_V_1_load_B);
    sensitive << ( out_V_1_sel_wr );
    sensitive << ( out_V_1_state_cmp_full );

    SC_METHOD(thread_out_V_1_sel);
    sensitive << ( out_V_1_sel_rd );

    SC_METHOD(thread_out_V_1_state_cmp_full);
    sensitive << ( out_V_1_state );

    SC_METHOD(thread_out_V_1_vld_in);
    sensitive << ( out_V_1_ack_in );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_out_V_1_vld_out);
    sensitive << ( out_V_1_state );

    SC_METHOD(thread_out_V_TDATA);
    sensitive << ( out_V_1_data_out );

    SC_METHOD(thread_out_V_TDATA_blk_n);
    sensitive << ( out_V_1_state );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_out_V_TVALID);
    sensitive << ( out_V_1_state );

    SC_METHOD(thread_tmp_6_fu_66_p2);
    sensitive << ( err );

    SC_METHOD(thread_tmp_7_fu_72_p2);
    sensitive << ( out_V_1_ack_in );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_6_fu_66_p2 );

    SC_METHOD(thread_tmp_8_fu_78_p2);
    sensitive << ( err );

    SC_METHOD(thread_tmp_fu_53_p3);
    sensitive << ( val_V );

    SC_METHOD(thread_val_V_new_fu_105_p2);
    sensitive << ( val_V );
    sensitive << ( val_V_new_v_cast_cas_fu_98_p3 );

    SC_METHOD(thread_val_V_new_v_cast_cas_fu_98_p3);
    sensitive << ( tmp_7_reg_126 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( out_V_1_ack_in );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    out_V_1_sel_rd = SC_LOGIC_0;
    out_V_1_sel_wr = SC_LOGIC_0;
    out_V_1_state = "00";
    val_V = "000000000000000000000000";
    err = "11111111111111110100010010000000";
    ap_CS_fsm = "01";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "triangle_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, out_V_TDATA, "(port)out_V_TDATA");
    sc_trace(mVcdFile, out_V_TVALID, "(port)out_V_TVALID");
    sc_trace(mVcdFile, out_V_TREADY, "(port)out_V_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, out_V_1_data_out, "out_V_1_data_out");
    sc_trace(mVcdFile, out_V_1_vld_in, "out_V_1_vld_in");
    sc_trace(mVcdFile, out_V_1_vld_out, "out_V_1_vld_out");
    sc_trace(mVcdFile, out_V_1_ack_in, "out_V_1_ack_in");
    sc_trace(mVcdFile, out_V_1_ack_out, "out_V_1_ack_out");
    sc_trace(mVcdFile, out_V_1_payload_A, "out_V_1_payload_A");
    sc_trace(mVcdFile, out_V_1_payload_B, "out_V_1_payload_B");
    sc_trace(mVcdFile, out_V_1_sel_rd, "out_V_1_sel_rd");
    sc_trace(mVcdFile, out_V_1_sel_wr, "out_V_1_sel_wr");
    sc_trace(mVcdFile, out_V_1_sel, "out_V_1_sel");
    sc_trace(mVcdFile, out_V_1_load_A, "out_V_1_load_A");
    sc_trace(mVcdFile, out_V_1_load_B, "out_V_1_load_B");
    sc_trace(mVcdFile, out_V_1_state, "out_V_1_state");
    sc_trace(mVcdFile, out_V_1_state_cmp_full, "out_V_1_state_cmp_full");
    sc_trace(mVcdFile, val_V, "val_V");
    sc_trace(mVcdFile, err, "err");
    sc_trace(mVcdFile, out_V_TDATA_blk_n, "out_V_TDATA_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_fu_53_p3, "tmp_fu_53_p3");
    sc_trace(mVcdFile, tmp_7_fu_72_p2, "tmp_7_fu_72_p2");
    sc_trace(mVcdFile, tmp_7_reg_126, "tmp_7_reg_126");
    sc_trace(mVcdFile, val_V_new_fu_105_p2, "val_V_new_fu_105_p2");
    sc_trace(mVcdFile, err_new_fu_84_p3, "err_new_fu_84_p3");
    sc_trace(mVcdFile, tmp_6_fu_66_p2, "tmp_6_fu_66_p2");
    sc_trace(mVcdFile, tmp_8_fu_78_p2, "tmp_8_fu_78_p2");
    sc_trace(mVcdFile, val_V_new_v_cast_cas_fu_98_p3, "val_V_new_v_cast_cas_fu_98_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("triangle.hdltvin.dat");
    mHdltvoutHandle.open("triangle.hdltvout.dat");
}

triangle::~triangle() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void triangle::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        out_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_vld_out.read()))) {
            out_V_1_sel_rd =  (sc_logic) (~out_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        out_V_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_ack_in.read()))) {
            out_V_1_sel_wr =  (sc_logic) (~out_V_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        out_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, out_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_3)) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, out_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_2)))) {
            out_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, out_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_3)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, out_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_1)))) {
            out_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_2)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_1)) || 
                    (esl_seteq<1,2,2>(out_V_1_state.read(), ap_const_lv2_3) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, out_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_ack_out.read()))))) {
            out_V_1_state = ap_const_lv2_3;
        } else {
            out_V_1_state = ap_const_lv2_2;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(out_V_1_ack_in.read(), ap_const_logic_1))) {
        err = err_new_fu_84_p3.read();
        tmp_7_reg_126 = tmp_7_fu_72_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_load_A.read())) {
        out_V_1_payload_A = tmp_fu_53_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_load_B.read())) {
        out_V_1_payload_B = tmp_fu_53_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(out_V_1_ack_in.read(), ap_const_logic_1))) {
        val_V = val_V_new_fu_105_p2.read();
    }
}

void triangle::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void triangle::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void triangle::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void triangle::thread_err_new_fu_84_p3() {
    err_new_fu_84_p3 = (!tmp_7_fu_72_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_7_fu_72_p2.read()[0].to_bool())? tmp_8_fu_78_p2.read(): tmp_6_fu_66_p2.read());
}

void triangle::thread_out_V_1_ack_in() {
    out_V_1_ack_in = out_V_1_state.read()[1];
}

void triangle::thread_out_V_1_ack_out() {
    out_V_1_ack_out = out_V_TREADY.read();
}

void triangle::thread_out_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, out_V_1_sel.read())) {
        out_V_1_data_out = out_V_1_payload_B.read();
    } else {
        out_V_1_data_out = out_V_1_payload_A.read();
    }
}

void triangle::thread_out_V_1_load_A() {
    out_V_1_load_A = (out_V_1_state_cmp_full.read() & ~out_V_1_sel_wr.read());
}

void triangle::thread_out_V_1_load_B() {
    out_V_1_load_B = (out_V_1_sel_wr.read() & out_V_1_state_cmp_full.read());
}

void triangle::thread_out_V_1_sel() {
    out_V_1_sel = out_V_1_sel_rd.read();
}

void triangle::thread_out_V_1_state_cmp_full() {
    out_V_1_state_cmp_full =  (sc_logic) ((!out_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(out_V_1_state.read() != ap_const_lv2_1))[0];
}

void triangle::thread_out_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(out_V_1_ack_in.read(), ap_const_logic_1))) {
        out_V_1_vld_in = ap_const_logic_1;
    } else {
        out_V_1_vld_in = ap_const_logic_0;
    }
}

void triangle::thread_out_V_1_vld_out() {
    out_V_1_vld_out = out_V_1_state.read()[0];
}

void triangle::thread_out_V_TDATA() {
    out_V_TDATA = out_V_1_data_out.read();
}

void triangle::thread_out_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        out_V_TDATA_blk_n = out_V_1_state.read()[1];
    } else {
        out_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void triangle::thread_out_V_TVALID() {
    out_V_TVALID = out_V_1_state.read()[0];
}

void triangle::thread_tmp_6_fu_66_p2() {
    tmp_6_fu_66_p2 = (!err.read().is_01() || !ap_const_lv32_7D00.is_01())? sc_lv<32>(): (sc_biguint<32>(err.read()) + sc_biguint<32>(ap_const_lv32_7D00));
}

void triangle::thread_tmp_7_fu_72_p2() {
    tmp_7_fu_72_p2 = (!tmp_6_fu_66_p2.read().is_01() || !ap_const_lv32_BB80.is_01())? sc_lv<1>(): (sc_bigint<32>(tmp_6_fu_66_p2.read()) > sc_bigint<32>(ap_const_lv32_BB80));
}

void triangle::thread_tmp_8_fu_78_p2() {
    tmp_8_fu_78_p2 = (!err.read().is_01() || !ap_const_lv32_FFFF0600.is_01())? sc_lv<32>(): (sc_biguint<32>(err.read()) + sc_bigint<32>(ap_const_lv32_FFFF0600));
}

void triangle::thread_tmp_fu_53_p3() {
    tmp_fu_53_p3 = esl_concat<24,8>(val_V.read(), ap_const_lv8_0);
}

void triangle::thread_val_V_new_fu_105_p2() {
    val_V_new_fu_105_p2 = (!val_V.read().is_01() || !val_V_new_v_cast_cas_fu_98_p3.read().is_01())? sc_lv<24>(): (sc_biguint<24>(val_V.read()) + sc_biguint<24>(val_V_new_v_cast_cas_fu_98_p3.read()));
}

void triangle::thread_val_V_new_v_cast_cas_fu_98_p3() {
    val_V_new_v_cast_cas_fu_98_p3 = (!tmp_7_reg_126.read()[0].is_01())? sc_lv<24>(): ((tmp_7_reg_126.read()[0].to_bool())? ap_const_lv24_55556: ap_const_lv24_55555);
}

void triangle::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(out_V_1_ack_in.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(out_V_1_ack_in.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

void triangle::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"out_V_TDATA\" :  \"" << out_V_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_V_TVALID\" :  \"" << out_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_V_TREADY\" :  \"" << out_V_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

