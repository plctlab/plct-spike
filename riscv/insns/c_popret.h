require_extension(EXT_ZCE);
require(((xlen / 4 -1) & SP) == 0); // sp alignment
reg_t bytes = xlen >> 3;
reg_t rlist = insn.rvzce_c_rlist3();
reg_t ret_val = insn.rvzce_ret0();
reg_t spimm = insn.rvzce_c_spimm3();

ZCE_POP(bytes, rlist, true, spimm, ret_val, true);

