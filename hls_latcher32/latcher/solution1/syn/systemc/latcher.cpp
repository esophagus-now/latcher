// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "latcher.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<32> latcher::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_logic latcher::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic latcher::ap_const_logic_0 = sc_dt::Log_0;

latcher::latcher(sc_module_name name) : sc_module(name), mVcdFile(0) {
    Block_codeRepl1_proc_U0 = new Block_codeRepl1_proc("Block_codeRepl1_proc_U0");
    Block_codeRepl1_proc_U0->ap_clk(ap_clk);
    Block_codeRepl1_proc_U0->ap_rst(ap_rst_n_inv);
    Block_codeRepl1_proc_U0->ap_start(Block_codeRepl1_proc_U0_ap_start);
    Block_codeRepl1_proc_U0->ap_done(Block_codeRepl1_proc_U0_ap_done);
    Block_codeRepl1_proc_U0->ap_continue(Block_codeRepl1_proc_U0_ap_continue);
    Block_codeRepl1_proc_U0->ap_idle(Block_codeRepl1_proc_U0_ap_idle);
    Block_codeRepl1_proc_U0->ap_ready(Block_codeRepl1_proc_U0_ap_ready);
    Block_codeRepl1_proc_U0->latch_V(latch_V);
    Block_codeRepl1_proc_U0->in_V_V_TDATA(in_V_V_TDATA);
    Block_codeRepl1_proc_U0->in_V_V_TVALID(in_V_V_TVALID);
    Block_codeRepl1_proc_U0->in_V_V_TREADY(Block_codeRepl1_proc_U0_in_V_V_TREADY);
    Block_codeRepl1_proc_U0->out_V_V_TDATA(Block_codeRepl1_proc_U0_out_V_V_TDATA);
    Block_codeRepl1_proc_U0->out_V_V_TVALID(Block_codeRepl1_proc_U0_out_V_V_TVALID);
    Block_codeRepl1_proc_U0->out_V_V_TREADY(out_V_V_TREADY);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_ap_continue);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_ap_start);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_start_full_n);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_start_write);

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_in_V_V_TREADY);
    sensitive << ( Block_codeRepl1_proc_U0_in_V_V_TREADY );

    SC_METHOD(thread_out_V_V_TDATA);
    sensitive << ( Block_codeRepl1_proc_U0_out_V_V_TDATA );

    SC_METHOD(thread_out_V_V_TVALID);
    sensitive << ( Block_codeRepl1_proc_U0_out_V_V_TVALID );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "latcher_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, in_V_V_TDATA, "(port)in_V_V_TDATA");
    sc_trace(mVcdFile, out_V_V_TDATA, "(port)out_V_V_TDATA");
    sc_trace(mVcdFile, latch_V, "(port)latch_V");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, in_V_V_TVALID, "(port)in_V_V_TVALID");
    sc_trace(mVcdFile, in_V_V_TREADY, "(port)in_V_V_TREADY");
    sc_trace(mVcdFile, out_V_V_TVALID, "(port)out_V_V_TVALID");
    sc_trace(mVcdFile, out_V_V_TREADY, "(port)out_V_V_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_start, "Block_codeRepl1_proc_U0_ap_start");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_done, "Block_codeRepl1_proc_U0_ap_done");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_continue, "Block_codeRepl1_proc_U0_ap_continue");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_idle, "Block_codeRepl1_proc_U0_ap_idle");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_ready, "Block_codeRepl1_proc_U0_ap_ready");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_in_V_V_TREADY, "Block_codeRepl1_proc_U0_in_V_V_TREADY");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_out_V_V_TDATA, "Block_codeRepl1_proc_U0_out_V_V_TDATA");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_out_V_V_TVALID, "Block_codeRepl1_proc_U0_out_V_V_TVALID");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_start_full_n, "Block_codeRepl1_proc_U0_start_full_n");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_start_write, "Block_codeRepl1_proc_U0_start_write");
#endif

    }
    mHdltvinHandle.open("latcher.hdltvin.dat");
    mHdltvoutHandle.open("latcher.hdltvout.dat");
}

latcher::~latcher() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete Block_codeRepl1_proc_U0;
}

void latcher::thread_Block_codeRepl1_proc_U0_ap_continue() {
    Block_codeRepl1_proc_U0_ap_continue = ap_const_logic_1;
}

void latcher::thread_Block_codeRepl1_proc_U0_ap_start() {
    Block_codeRepl1_proc_U0_ap_start = ap_const_logic_1;
}

void latcher::thread_Block_codeRepl1_proc_U0_start_full_n() {
    Block_codeRepl1_proc_U0_start_full_n = ap_const_logic_0;
}

void latcher::thread_Block_codeRepl1_proc_U0_start_write() {
    Block_codeRepl1_proc_U0_start_write = ap_const_logic_0;
}

void latcher::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void latcher::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_0;
}

void latcher::thread_in_V_V_TREADY() {
    in_V_V_TREADY = Block_codeRepl1_proc_U0_in_V_V_TREADY.read();
}

void latcher::thread_out_V_V_TDATA() {
    out_V_V_TDATA = Block_codeRepl1_proc_U0_out_V_V_TDATA.read();
}

void latcher::thread_out_V_V_TVALID() {
    out_V_V_TVALID = Block_codeRepl1_proc_U0_out_V_V_TVALID.read();
}

void latcher::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"in_V_V_TDATA\" :  \"" << in_V_V_TDATA.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"out_V_V_TDATA\" :  \"" << out_V_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"latch_V\" :  \"" << latch_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_V_V_TVALID\" :  \"" << in_V_V_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_V_V_TREADY\" :  \"" << in_V_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_V_V_TVALID\" :  \"" << out_V_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_V_V_TREADY\" :  \"" << out_V_V_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

