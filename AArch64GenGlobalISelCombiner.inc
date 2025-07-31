/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64PreLegalizerCombinerImpl Combiner Match Table                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GICOMBINER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef GET_GICOMBINER_DEPS

#ifdef GET_GICOMBINER_TYPES
struct AArch64PreLegalizerCombinerImplRuleConfig {
  SparseBitVector<> DisabledRules;

  bool isRuleEnabled(unsigned RuleID) const;
  bool parseCommandLineOption();
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

static std::optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 9:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "opy_prop", 8) != 0)
        break;
      return 13;	 // "copy_prop"
    case 'm':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_ors", 7) != 0)
          break;
        return 191;	 // "match_ors"
      case 'u':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "lo_by_", 6) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case '0':	 // 1 string to match.
          return 142;	 // "mulo_by_0"
        case '2':	 // 1 string to match.
          return 141;	 // "mulo_by_2"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_zext", 8) != 0)
        break;
      return 196;	 // "nneg_zext"
    }
    break;
  case 10:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 88;	 // "i2p_to_p2i"
    case 'm':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_ands", 8) != 0)
          break;
        return 190;	 // "match_ands"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_to_shl", 8) != 0)
          break;
        return 14;	 // "mul_to_shl"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 87;	 // "p2i_to_i2p"
    case 's':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "xt_trunc", 8) != 0)
          break;
        return 194;	 // "sext_trunc"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "b_to_add", 8) != 0)
          break;
        return 15;	 // "sub_to_add"
      }
      break;
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc", 9) != 0)
        break;
      return 195;	 // "zext_trunc"
    }
    break;
  case 11:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_sub_reg", 10) != 0)
        break;
      return 93;	 // "add_sub_reg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_addos", 10) != 0)
        break;
      return 210;	 // "match_addos"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ub_add_reg", 10) != 0)
        break;
      return 185;	 // "sub_add_reg"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_shift", 10) != 0)
        break;
      return 129;	 // "trunc_shift"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_cst", 10) != 0)
        break;
      return 204;	 // "unmerge_cst"
    }
    break;
  case 12:	 // 11 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusBMinusB", 11) != 0)
        break;
      return 2;	 // "APlusBMinusB"
    case 'B':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusAPlusA", 11) != 0)
        break;
      return 3;	 // "BMinusAPlusA"
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dde_to_addo", 11) != 0)
        break;
      return 143;	 // "adde_to_addo"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "sub_to_fneg", 11) != 0)
        break;
      return 187;	 // "fsub_to_fneg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ulh_to_lshr", 11) != 0)
        break;
      return 173;	 // "mulh_to_lshr"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ot_cmp_fold", 11) != 0)
        break;
      return 130;	 // "not_cmp_fold"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_or", 11) != 0)
        break;
      return 125;	 // "redundant_or"
    case 's':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_pow2", 10) != 0)
          break;
        return 171;	 // "sdiv_by_pow2"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "xt_of_sext", 10) != 0)
          break;
        return 48;	 // "sext_of_sext"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "div_by_pow2", 11) != 0)
        break;
      return 172;	 // "udiv_by_pow2"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_zext", 11) != 0)
        break;
      return 46;	 // "zext_of_zext"
    }
    break;
  case 13:	 // 13 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_of_vscale", 12) != 0)
        break;
      return 37;	 // "add_of_vscale"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ommute_shift", 12) != 0)
        break;
      return 159;	 // "commute_shift"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_and_mask", 12) != 0)
        break;
      return 68;	 // "load_and_mask"
    case 'm':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_selects", 11) != 0)
          break;
        return 122;	 // "match_selects"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "rge_unmerge", 11) != 0)
          break;
        return 203;	 // "merge_unmerge"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_of_vscale", 11) != 0)
          break;
        return 38;	 // "mul_of_vscale"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_and", 12) != 0)
        break;
      return 123;	 // "redundant_and"
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_const", 11) != 0)
          break;
        return 170;	 // "sdiv_by_const"
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "l_of_vscale", 11) != 0)
          break;
        return 39;	 // "shl_of_vscale"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "b_of_vscale", 11) != 0)
          break;
        return 40;	 // "sub_of_vscale"
      }
      break;
    case 'u':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "iv_by_const", 11) != 0)
          break;
        return 169;	 // "udiv_by_const"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "merge_", 6) != 0)
          break;
        switch (RuleIdentifier[8]) {
        default: break;
        case 'm':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "erge", 4) != 0)
            break;
          return 202;	 // "unmerge_merge"
        case 'u':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+9, "ndef", 4) != 0)
            break;
          return 205;	 // "unmerge_undef"
        }
        break;
      }
      break;
    }
    break;
  case 14:	 // 15 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'M':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "inusC1PlusC2", 12) != 0)
          break;
        return 12;	 // "AMinusC1PlusC2"
      case 'P':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lusC1MinusC2", 12) != 0)
          break;
        return 8;	 // "APlusC1MinusC2"
      }
      break;
    case 'C':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2MinusAPlusC1", 13) != 0)
        break;
      return 9;	 // "C2MinusAPlusC1"
    case 'a':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_", 9) != 0)
        break;
      switch (RuleIdentifier[10]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 52;	 // "anyext_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 51;	 // "anyext_of_zext"
      }
      break;
    case 'b':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'i')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "op_same_val", 11) != 0)
          break;
        return 84;	 // "binop_same_val"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "reverse_shl", 11) != 0)
          break;
        return 157;	 // "bitreverse_shl"
      }
      break;
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "bs_fneg_fold", 12) != 0)
          break;
        return 168;	 // "fabs_fneg_fold"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "eg_fneg_fold", 12) != 0)
          break;
        return 90;	 // "fneg_fneg_fold"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_by_neg_one", 13) != 0)
        break;
      return 17;	 // "mul_by_neg_one"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eassoc_ptradd", 13) != 0)
        break;
      return 105;	 // "reassoc_ptradd"
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (RuleIdentifier[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "ect_of_zext", 11) != 0)
            break;
          return 53;	 // "select_of_zext"
        case 'x':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "t_of_anyext", 11) != 0)
            break;
          return 49;	 // "sext_of_anyext"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ifts_too_big", 12) != 0)
          break;
        return 104;	 // "shifts_too_big"
      }
      break;
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_anyext", 13) != 0)
        break;
      return 47;	 // "zext_of_anyext"
    }
    break;
  case 15:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'M':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "inusC1MinusC2", 13) != 0)
          break;
        return 10;	 // "AMinusC1MinusC2"
      case 'P':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lusZeroMinusB", 13) != 0)
          break;
        return 1;	 // "APlusZeroMinusB"
      }
      break;
    case 'C':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "1Minus2MinusC2", 14) != 0)
        break;
      return 11;	 // "C1Minus2MinusC2"
    case 'Z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "eroMinusAPlusB", 14) != 0)
        break;
      return 0;	 // "ZeroMinusAPlusB"
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itreverse_lshr", 14) != 0)
        break;
      return 158;	 // "bitreverse_lshr"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 67;	 // "extending_loads"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dempotent_prop", 14) != 0)
        break;
      return 18;	 // "idempotent_prop"
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_or_combine", 14) != 0)
        break;
      return 150;	 // "load_or_combine"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_or", 14) != 0)
        break;
      return 61;	 // "narrow_binop_or"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "verlapping_and", 14) != 0)
        break;
      return 140;	 // "overlapping_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_same_val", 14) != 0)
        break;
      return 82;	 // "select_same_val"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_trunc_fold", 14) != 0)
        break;
      return 127;	 // "zext_trunc_fold"
    }
    break;
  case 16:	 // 12 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_anyext", 15) != 0)
        break;
      return 50;	 // "anyext_of_anyext"
    case 'n':	 // 5 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_", 12) != 0)
        break;
      switch (RuleIdentifier[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (RuleIdentifier[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (RuleIdentifier[15] != 'd')
            break;
          return 57;	 // "narrow_binop_add"
        case 'n':	 // 1 string to match.
          if (RuleIdentifier[15] != 'd')
            break;
          return 60;	 // "narrow_binop_and"
        }
        break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+14, "ul", 2) != 0)
          break;
        return 59;	 // "narrow_binop_mul"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+14, "ub", 2) != 0)
          break;
        return 58;	 // "narrow_binop_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+14, "or", 2) != 0)
          break;
        return 62;	 // "narrow_binop_xor"
      }
      break;
    case 's':	 // 3 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_", 6) != 0)
        break;
      switch (RuleIdentifier[7]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "f_anyext", 8) != 0)
          break;
        return 54;	 // "select_of_anyext"
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "o_minmax", 8) != 0)
          break;
        return 186;	 // "select_to_minmax"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "ndef_cmp", 8) != 0)
          break;
        return 119;	 // "select_undef_cmp"
      }
      break;
    case 't':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_", 11) != 0)
        break;
      switch (RuleIdentifier[12]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 44;	 // "truncate_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 43;	 // "truncate_of_zext"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_fp_zero", 15) != 0)
        break;
      return 70;	 // "undef_to_fp_zero"
    }
    break;
  case 17:	 // 14 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "PlusBMinus", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'A':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "plusC", 5) != 0)
          break;
        return 6;	 // "APlusBMinusAplusC"
      case 'C':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "PlusA", 5) != 0)
          break;
        return 7;	 // "APlusBMinusCPlusA"
      }
      break;
    case 'a':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "d_p2i_to_ptradd", 15) != 0)
          break;
        return 16;	 // "add_p2i_to_ptradd"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "yext_trunc_fold", 15) != 0)
          break;
        return 89;	 // "anyext_trunc_fold"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "nonicalize_", 11) != 0)
          break;
        switch (RuleIdentifier[13]) {
        default: break;
        case 'f':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "cmp", 3) != 0)
            break;
          return 109;	 // "canonicalize_fcmp"
        case 'i':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "cmp", 3) != 0)
            break;
          return 108;	 // "canonicalize_icmp"
        }
        break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "nstant_fold_fma", 15) != 0)
          break;
        return 166;	 // "constant_fold_fma"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "iv_rem_to_divrem", 16) != 0)
        break;
      return 151;	 // "div_rem_to_divrem"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rase_undef_store", 16) != 0)
        break;
      return 80;	 // "erase_undef_store"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_with_zero", 16) != 0)
        break;
      return 147;	 // "ptr_add_with_zero"
    case 's':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_to_iminmax", 15) != 0)
          break;
        return 121;	 // "select_to_iminmax"
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ift_immed_chain", 15) != 0)
          break;
        return 148;	 // "shift_immed_chain"
      }
      break;
    case 'u':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "def_to_int_zero", 15) != 0)
          break;
        return 71;	 // "undef_to_int_zero"
      case 'r':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "em_pow2_to_mask", 15) != 0)
          break;
        return 126;	 // "urem_pow2_to_mask"
      }
      break;
    }
    break;
  case 18:	 // 13 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'A':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "MinusBPlus", 10) != 0)
        break;
      switch (RuleIdentifier[11]) {
      default: break;
      case 'B':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "MinusC", 6) != 0)
          break;
        return 5;	 // "AMinusBPlusBMinusC"
      case 'C':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+12, "MinusA", 6) != 0)
          break;
        return 4;	 // "AMinusBPlusCMinusA"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 85;	 // "binop_left_to_zero"
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_minmax_nan", 15) != 0)
          break;
        return 144;	 // "combine_minmax_nan"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_f", 12) != 0)
          break;
        switch (RuleIdentifier[15]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "bs", 2) != 0)
            break;
          return 133;	 // "constant_fold_fabs"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+16, "eg", 2) != 0)
            break;
          return 132;	 // "constant_fold_fneg"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xpand_const_fpowi", 17) != 0)
        break;
      return 145;	 // "expand_const_fpowi"
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_global_offset", 16) != 0)
          break;
        return 214;	 // "fold_global_offset"
      case 'p':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "trunc_fpext_fold", 16) != 0)
          break;
        return 98;	 // "fptrunc_fpext_fold"
      }
      break;
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (RuleIdentifier[2]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "ect_of_truncate", 15) != 0)
            break;
          return 55;	 // "select_of_truncate"
        case 'x':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+3, "t_inreg_of_load", 15) != 0)
            break;
          return 116;	 // "sext_inreg_of_load"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "uffle_to_extract", 16) != 0)
          break;
        return 215;	 // "shuffle_to_extract"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_anyext", 17) != 0)
        break;
      return 45;	 // "truncate_of_anyext"
    }
    break;
  case 19:	 // 16 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 86;	 // "binop_right_to_zero"
    case 'c':	 // 4 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "onst", 4) != 0)
        break;
      switch (RuleIdentifier[5]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+6, "ptradd_to_i2p", 13) != 0)
          break;
        return 139;	 // "const_ptradd_to_i2p"
      case 'a':	 // 3 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "nt_fold_", 8) != 0)
          break;
        switch (RuleIdentifier[14]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "inop", 4) != 0)
            break;
          return 164;	 // "constant_fold_binop"
        case 'f':	 // 2 strings to match.
          switch (RuleIdentifier[15]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "og2", 3) != 0)
              break;
            return 135;	 // "constant_fold_flog2"
          case 's':	 // 1 string to match.
            if (memcmp(RuleIdentifier.data()+16, "qrt", 3) != 0)
              break;
            return 134;	 // "constant_fold_fsqrt"
          }
          break;
        }
        break;
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xt", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "uaddv_to_uaddlv", 15) != 0)
          break;
        return 217;	 // "ext_uaddv_to_uaddlv"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "nd_through_phis", 15) != 0)
          break;
        return 101;	 // "extend_through_phis"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nteger_of_truncate", 18) != 0)
        break;
      return 63;	 // "integer_of_truncate"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_zero", 18) != 0)
        break;
      return 209;	 // "merge_of_x_and_zero"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_immed_chain", 18) != 0)
        break;
      return 107;	 // "ptr_add_immed_chain"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "assoc_comm_binops", 17) != 0)
          break;
        return 106;	 // "reassoc_comm_binops"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_zero", 17) != 0)
          break;
        return 83;	 // "right_identity_zero"
      }
      break;
    case 's':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "lect_constant_cmp", 17) != 0)
          break;
        return 120;	 // "select_constant_cmp"
      case 'i':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "mplify_", 7) != 0)
          break;
        switch (RuleIdentifier[9]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+10, "dd_to_sub", 9) != 0)
            break;
          return 102;	 // "simplify_add_to_sub"
        case 'n':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+10, "eg_minmax", 9) != 0)
            break;
          return 192;	 // "simplify_neg_minmax"
        }
        break;
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_zero", 18) != 0)
        break;
      return 75;	 // "unary_undef_to_zero"
    }
    break;
  case 20:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nd_or_disjoint_mask", 19) != 0)
        break;
      return 175;	 // "and_or_disjoint_mask"
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 97;	 // "bitcast_bitcast_fold"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_redundant_trunc", 19) != 0)
        break;
      return 213;	 // "icmp_redundant_trunc"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_undef", 19) != 0)
        break;
      return 208;	 // "merge_of_x_and_undef"
    case 'r':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "edu", 3) != 0)
        break;
      switch (RuleIdentifier[4]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+5, "e_shl_of_extend", 15) != 0)
          break;
        return 117;	 // "reduce_shl_of_extend"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+5, "dant_sext_inreg", 15) != 0)
          break;
        return 124;	 // "redundant_sext_inreg"
      }
      break;
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ry_undef_to_undef", 17) != 0)
          break;
        return 76;	 // "unary_undef_to_undef"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_zext_to_zext", 17) != 0)
          break;
        return 207;	 // "unmerge_zext_to_zext"
      }
      break;
    }
    break;
  case 21:	 // 13 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 3 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_concat_vector", 18) != 0)
          break;
        return 193;	 // "combine_concat_vector"
      case 'n':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_", 11) != 0)
          break;
        switch (RuleIdentifier[14]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "ast_op", 6) != 0)
            break;
          return 167;	 // "constant_fold_cast_op"
        case 'f':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+15, "ptrunc", 6) != 0)
            break;
          return 136;	 // "constant_fold_fptrunc"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt_addv_to_udot_addv", 20) != 0)
        break;
      return 216;	 // "ext_addv_to_udot_addv"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "constant_to_constant", 20) != 0)
        break;
      return 212;	 // "fconstant_to_constant"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsert_vector_elt_oob", 20) != 0)
        break;
      return 24;	 // "insert_vector_elt_oob"
    case 'p':	 // 4 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ush_", 4) != 0)
        break;
      switch (RuleIdentifier[5]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "dd_through_", 11) != 0)
          break;
        switch (RuleIdentifier[17]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 221;	 // "push_add_through_sext"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 219;	 // "push_add_through_zext"
        }
        break;
      case 's':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+6, "ub_through_", 11) != 0)
          break;
        switch (RuleIdentifier[17]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 220;	 // "push_sub_through_sext"
        case 'z':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+18, "ext", 3) != 0)
            break;
          return 218;	 // "push_sub_through_zext"
        }
        break;
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 92;	 // "right_identity_one_fp"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ef_to_negative_one", 18) != 0)
          break;
        return 72;	 // "undef_to_negative_one"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_dead_to_trunc", 18) != 0)
          break;
        return 206;	 // "unmerge_dead_to_trunc"
      }
      break;
    }
    break;
  case 22:	 // 13 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'o')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "bine_shuffle_concat", 19) != 0)
          break;
        return 197;	 // "combine_shuffle_concat"
      case 'n':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "stant_fold_fp_binop", 19) != 0)
          break;
        return 165;	 // "constant_fold_fp_binop"
      }
      break;
    case 'f':	 // 4 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_binop_into_select", 20) != 0)
          break;
        return 184;	 // "fold_binop_into_select"
      case 'u':	 // 3 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "nnel_shift_", 11) != 0)
          break;
        switch (RuleIdentifier[13]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "eft_zero", 8) != 0)
            break;
          return 155;	 // "funnel_shift_left_zero"
        case 'o':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "vershift", 8) != 0)
            break;
          return 156;	 // "funnel_shift_overshift"
        case 't':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+14, "o_rotate", 8) != 0)
            break;
          return 153;	 // "funnel_shift_to_rotate"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_lhs_known_bits", 21) != 0)
        break;
      return 111;	 // "icmp_to_lhs_known_bits"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_subo_no_overflow", 21) != 0)
        break;
      return 211;	 // "match_subo_no_overflow"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_any_op", 21) != 0)
        break;
      return 77;	 // "propagate_undef_any_op"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "dundant_neg_operands", 20) != 0)
          break;
        return 174;	 // "redundant_neg_operands"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_one_int", 20) != 0)
          break;
        return 91;	 // "right_identity_one_int"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hl_ashr_to_sext_inreg", 21) != 0)
        break;
      return 115;	 // "shl_ashr_to_sext_inreg"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 95;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "uildvector_of_truncate", 22) != 0)
        break;
      return 56;	 // "buildvector_of_truncate"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_right_zero", 22) != 0)
        break;
      return 154;	 // "funnel_shift_right_zero"
    case 'i':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "tof_const_zero_fold_", 20) != 0)
        break;
      switch (RuleIdentifier[21]) {
      default: break;
      case 's':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 137;	 // "itof_const_zero_fold_si"
      case 'u':	 // 1 string to match.
        if (RuleIdentifier[22] != 'i')
          break;
        return 138;	 // "itof_const_zero_fold_ui"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_all_ops", 22) != 0)
        break;
      return 78;	 // "propagate_undef_all_ops"
    }
    break;
  case 24:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_undef_to_zero", 23) != 0)
        break;
      return 73;	 // "binop_left_undef_to_zero"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element", 23) != 0)
        break;
      return 23;	 // "match_extract_of_element"
    case 'n':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "arrow_binop_feeding_and", 23) != 0)
        break;
      return 118;	 // "narrow_binop_feeding_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_inreg_to_zext_inreg", 23) != 0)
        break;
      return 128;	 // "sext_inreg_to_zext_inreg"
    case 'x':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "or_of_and_with_same_reg", 23) != 0)
        break;
      return 146;	 // "xor_of_and_with_same_reg"
    }
    break;
  case 25:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "tfield_extract_from_", 20) != 0)
          break;
        switch (RuleIdentifier[22]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "nd", 2) != 0)
            break;
          return 161;	 // "bitfield_extract_from_and"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "hr", 2) != 0)
            break;
          return 162;	 // "bitfield_extract_from_shr"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ildvector_identity_fold", 23) != 0)
          break;
        return 94;	 // "buildvector_identity_fold"
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_shuffle_undef_rhs", 24) != 0)
        break;
      return 198;	 // "combine_shuffle_undef_rhs"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vec_elt_build_vec", 24) != 0)
        break;
      return 65;	 // "extract_vec_elt_build_vec"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 100;	 // "right_identity_neg_one_fp"
    }
    break;
  case 26:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_undef_to_undef", 25) != 0)
        break;
      return 74;	 // "binop_right_undef_to_undef"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ommute_fp_constant_to_rhs", 25) != 0)
        break;
      return 189;	 // "commute_fp_constant_to_rhs"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "unnel_shift_from_or_shift", 25) != 0)
        break;
      return 152;	 // "funnel_shift_from_or_shift"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 99;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "om", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ine_use_vector_truncate", 23) != 0)
          break;
        return 200;	 // "combine_use_vector_truncate"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ute_int_constant_to_rhs", 23) != 0)
          break;
        return 188;	 // "commute_int_constant_to_rhs"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ouble_icmp_zero_or_combine", 26) != 0)
        break;
      return 113;	 // "double_icmp_zero_or_combine"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_binop_in_equality", 26) != 0)
        break;
      return 114;	 // "redundant_binop_in_equality"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_lshr_buildvector_fold", 26) != 0)
        break;
      return 96;	 // "trunc_lshr_buildvector_fold"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_anyext_build_vector", 26) != 0)
        break;
      return 201;	 // "unmerge_anyext_build_vector"
    }
    break;
  case 28:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ouble_icmp_zero_and_combine", 27) != 0)
        break;
      return 112;	 // "double_icmp_zero_and_combine"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "pt_brcond_by_inverting_cond", 27) != 0)
        break;
      return 131;	 // "opt_brcond_by_inverting_cond"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_shuffle_mask", 27) != 0)
        break;
      return 79;	 // "propagate_undef_shuffle_mask"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "hift_of_shifted_logic_chain", 27) != 0)
        break;
      return 149;	 // "shift_of_shifted_logic_chain"
    }
    break;
  case 29:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_shr_and", 28) != 0)
        break;
      return 163;	 // "bitfield_extract_from_shr_and"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "xtracted_vector_load", 20) != 0)
          break;
        return 69;	 // "combine_extracted_vector_load"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "huffle_disjoint_mask", 20) != 0)
          break;
        return 199;	 // "combine_shuffle_disjoint_mask"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_true_false_known_bits", 28) != 0)
        break;
      return 110;	 // "icmp_to_true_false_known_bits"
    }
    break;
  case 30:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "freeze_of_non_undef_non_poison", 30) != 0)
      break;
    return 41;	 // "freeze_of_non_undef_non_poison"
  case 31:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_vector_element_", 22) != 0)
      break;
    switch (RuleIdentifier[22]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+23, "lt_undef", 8) != 0)
        break;
      return 22;	 // "insert_vector_element_elt_undef"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+23, "dx_undef", 8) != 0)
        break;
      return 21;	 // "insert_vector_element_idx_undef"
    }
    break;
  case 32:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_sext_inreg", 31) != 0)
        break;
      return 160;	 // "bitfield_extract_from_sext_inreg"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_f", 8) != 0)
        break;
      switch (RuleIdentifier[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+10, "dd_fmul_to_fmad_or_fma", 22) != 0)
          break;
        return 176;	 // "combine_fadd_fmul_to_fmad_or_fma"
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+10, "ub_fmul_to_fmad_or_fma", 22) != 0)
          break;
        return 180;	 // "combine_fsub_fmul_to_fmad_or_fma"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_not_const", 31) != 0)
        break;
      return 25;	 // "extract_vector_element_not_const"
    }
    break;
  case 34:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_all_elts_from_build_vector", 34) != 0)
      break;
    return 66;	 // "extract_all_elts_from_build_vector"
  case 35:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_vector_element_build_vector", 35) != 0)
      break;
    return 27;	 // "extract_vector_element_build_vector"
  case 36:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "add_fma_fmul_to_fmad_or_fma", 27) != 0)
          break;
        return 178;	 // "combine_fadd_fma_fmul_to_fmad_or_fma"
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "nsert_vec_elts_build_vector", 27) != 0)
          break;
        return 64;	 // "combine_insert_vec_elts_build_vector"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsert_extract_vec_elt_out_of_bounds", 35) != 0)
        break;
      return 81;	 // "insert_extract_vec_elt_out_of_bounds"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element_undef_index", 35) != 0)
        break;
      return 20;	 // "match_extract_of_element_undef_index"
    }
    break;
  case 37:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fsub_fneg_fmul_to_fmad_or_fma", 36) != 0)
        break;
      return 181;	 // "combine_fsub_fneg_fmul_to_fmad_or_fma"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_shuffle_vector", 36) != 0)
        break;
      return 35;	 // "extract_vector_element_shuffle_vector"
    case 'h':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oist_logic_op_with_same_opcode_hands", 36) != 0)
        break;
      return 103;	 // "hoist_logic_op_with_same_opcode_hands"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_extract_of_element_undef_vector", 36) != 0)
        break;
      return 19;	 // "match_extract_of_element_undef_vector"
    }
    break;
  case 38:	 // 2 strings to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_f", 9) != 0)
      break;
    switch (RuleIdentifier[9]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+10, "dd_fpext_fmul_to_fmad_or_fma", 28) != 0)
        break;
      return 177;	 // "combine_fadd_fpext_fmul_to_fmad_or_fma"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+10, "ub_fpext_fmul_to_fmad_or_fma", 28) != 0)
        break;
      return 182;	 // "combine_fsub_fpext_fmul_to_fmad_or_fma"
    }
    break;
  case 40:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "extract_vector_element_different_indices", 40) != 0)
      break;
    return 26;	 // "extract_vector_element_different_indices"
  case 42:	 // 8 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_fadd_fpext_fma_fmul_to_fmad_or_fma", 41) != 0)
        break;
      return 179;	 // "combine_fadd_fpext_fma_fmul_to_fmad_or_fma"
    case 'e':	 // 7 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "xtract_vector_element_build_vector_trunc", 40) != 0)
        break;
      switch (RuleIdentifier[41]) {
      default: break;
      case '2':	 // 1 string to match.
        return 28;	 // "extract_vector_element_build_vector_trunc2"
      case '3':	 // 1 string to match.
        return 29;	 // "extract_vector_element_build_vector_trunc3"
      case '4':	 // 1 string to match.
        return 30;	 // "extract_vector_element_build_vector_trunc4"
      case '5':	 // 1 string to match.
        return 31;	 // "extract_vector_element_build_vector_trunc5"
      case '6':	 // 1 string to match.
        return 32;	 // "extract_vector_element_build_vector_trunc6"
      case '7':	 // 1 string to match.
        return 33;	 // "extract_vector_element_build_vector_trunc7"
      case '8':	 // 1 string to match.
        return 34;	 // "extract_vector_element_build_vector_trunc8"
      }
      break;
    }
    break;
  case 43:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_fsub_fpext_fneg_fmul_to_fmad_or_fma", 43) != 0)
      break;
    return 183;	 // "combine_fsub_fpext_fneg_fmul_to_fmad_or_fma"
  case 44:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_vector_element_extract_vector_element", 44) != 0)
      break;
    return 36;	 // "insert_vector_element_extract_vector_element"
  case 46:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "push_freeze_to_prevent_poison_from_propagating", 46) != 0)
      break;
    return 42;	 // "push_freeze_to_prevent_poison_from_propagating"
  }
#endif // ifndef NDEBUG

  return std::nullopt;
}
static std::optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First || !Last)
      return std::nullopt;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{*First, *Last + 1}};
  }
  if (RangePair.first == "*") {
    return {{0, 222}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64PreLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64PreLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64PreLegalizerCombinerOption;
static cl::list<std::string> AArch64PreLegalizerCombinerDisableOption(
    "aarch64prelegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PreLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PreLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> AArch64PreLegalizerCombinerOnlyEnableOption(
    "aarch64prelegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PreLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PreLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PreLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64PreLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64PreLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PreLegalizerCombinerOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

#endif // ifdef GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_TYPES
const unsigned MAX_SUBTARGET_PREDICATES = 1;
using PredicateBitset = llvm::Bitset<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_CLASS_MEMBERS
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;
#endif // ifdef GET_GICOMBINER_CLASS_MEMBERS
#ifdef GET_GICOMBINER_CLASS_MEMBERS
  mutable MatcherState State;
  typedef ComplexRendererFns(AArch64PreLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64PreLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64PreLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64PreLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const uint8_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI, const MatcherState &State) const override;
  bool testSimplePredicate(unsigned PredicateID) const override;
  bool runCustomAction(unsigned FnID, const MatcherState &State, NewMIVector &OutMIs) const override;
#endif // ifdef GET_GICOMBINER_CLASS_MEMBERS

#ifdef GET_GICOMBINER_IMPL
// LLT Objects.
enum {
  GILLT_s1,
};
const static size_t NumTypeObjects = 1;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
};

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_HasDotProdBit = 0,
};

PredicateBitset AArch64PreLegalizerCombinerImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  if (Subtarget->hasDotProd())
    Features.set(Feature_HasDotProdBit);
  return Features;
}

void AArch64PreLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64PreLegalizerCombinerImpl::
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features{};
  return Features;
}

// Feature bitsets.
enum {
  GIFBS_Invalid,
  GIFBS_HasDotProd,
};
constexpr static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_HasDotProdBit, },
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

AArch64PreLegalizerCombinerImpl::ComplexMatcherMemFn
AArch64PreLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
  GICXXPred_MI_Predicate_GICombiner1,
  GICXXPred_MI_Predicate_GICombiner2,
  GICXXPred_MI_Predicate_GICombiner3,
  GICXXPred_MI_Predicate_GICombiner4,
  GICXXPred_MI_Predicate_GICombiner5,
  GICXXPred_MI_Predicate_GICombiner6,
  GICXXPred_MI_Predicate_GICombiner7,
  GICXXPred_MI_Predicate_GICombiner8,
};
bool AArch64PreLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI);
  }
  case GICXXPred_MI_Predicate_GICombiner1: {
    return isGuaranteedNotToBeUndefOrPoison(State.MIs[0]->getOperand(1).getReg(), MRI);
  }
  case GICXXPred_MI_Predicate_GICombiner2: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner3: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner4: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner5: {
    return State.MIs[1]->getOperand(1).getPredicate() == CmpInst::ICMP_EQ &&
                               !MRI.getType(State.MIs[1]->getOperand(2).getReg()).getScalarType().isPointer() &&
                               (MRI.getType(State.MIs[1]->getOperand(2).getReg()) ==
                                   MRI.getType(State.MIs[2]->getOperand(2).getReg()));
  }
  case GICXXPred_MI_Predicate_GICombiner6: {
    return State.MIs[1]->getOperand(1).getPredicate() == CmpInst::ICMP_NE &&
                               !MRI.getType(State.MIs[1]->getOperand(2).getReg()).getScalarType().isPointer() &&
                               (MRI.getType(State.MIs[1]->getOperand(2).getReg()) ==
                                   MRI.getType(State.MIs[2]->getOperand(2).getReg()));
  }
  case GICXXPred_MI_Predicate_GICombiner7: {
    return Helper.isLegalOrBeforeLegalizer({TargetOpcode::G_LSHR,
                                                           {MRI.getType(State.MIs[2]->getOperand(1).getReg()),
                                                            MRI.getType(State.MIs[1]->getOperand(2).getReg())}});
  }
  case GICXXPred_MI_Predicate_GICombiner8: {
    return Helper.isLegalOrBeforeLegalizer({TargetOpcode::G_SHL,
                                                           {MRI.getType(State.MIs[2]->getOperand(1).getReg()),
                                                            MRI.getType(State.MIs[1]->getOperand(2).getReg())}});
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PreLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
enum {
  GICXXPred_Simple_IsRule0Enabled = GICXXPred_Invalid + 1,
  GICXXPred_Simple_IsRule1Enabled,
  GICXXPred_Simple_IsRule2Enabled,
  GICXXPred_Simple_IsRule3Enabled,
  GICXXPred_Simple_IsRule4Enabled,
  GICXXPred_Simple_IsRule5Enabled,
  GICXXPred_Simple_IsRule6Enabled,
  GICXXPred_Simple_IsRule7Enabled,
  GICXXPred_Simple_IsRule8Enabled,
  GICXXPred_Simple_IsRule9Enabled,
  GICXXPred_Simple_IsRule10Enabled,
  GICXXPred_Simple_IsRule11Enabled,
  GICXXPred_Simple_IsRule12Enabled,
  GICXXPred_Simple_IsRule13Enabled,
  GICXXPred_Simple_IsRule14Enabled,
  GICXXPred_Simple_IsRule15Enabled,
  GICXXPred_Simple_IsRule16Enabled,
  GICXXPred_Simple_IsRule17Enabled,
  GICXXPred_Simple_IsRule18Enabled,
  GICXXPred_Simple_IsRule19Enabled,
  GICXXPred_Simple_IsRule20Enabled,
  GICXXPred_Simple_IsRule21Enabled,
  GICXXPred_Simple_IsRule22Enabled,
  GICXXPred_Simple_IsRule23Enabled,
  GICXXPred_Simple_IsRule24Enabled,
  GICXXPred_Simple_IsRule25Enabled,
  GICXXPred_Simple_IsRule26Enabled,
  GICXXPred_Simple_IsRule27Enabled,
  GICXXPred_Simple_IsRule28Enabled,
  GICXXPred_Simple_IsRule29Enabled,
  GICXXPred_Simple_IsRule30Enabled,
  GICXXPred_Simple_IsRule31Enabled,
  GICXXPred_Simple_IsRule32Enabled,
  GICXXPred_Simple_IsRule33Enabled,
  GICXXPred_Simple_IsRule34Enabled,
  GICXXPred_Simple_IsRule35Enabled,
  GICXXPred_Simple_IsRule36Enabled,
  GICXXPred_Simple_IsRule37Enabled,
  GICXXPred_Simple_IsRule38Enabled,
  GICXXPred_Simple_IsRule39Enabled,
  GICXXPred_Simple_IsRule40Enabled,
  GICXXPred_Simple_IsRule41Enabled,
  GICXXPred_Simple_IsRule42Enabled,
  GICXXPred_Simple_IsRule43Enabled,
  GICXXPred_Simple_IsRule44Enabled,
  GICXXPred_Simple_IsRule45Enabled,
  GICXXPred_Simple_IsRule46Enabled,
  GICXXPred_Simple_IsRule47Enabled,
  GICXXPred_Simple_IsRule48Enabled,
  GICXXPred_Simple_IsRule49Enabled,
  GICXXPred_Simple_IsRule50Enabled,
  GICXXPred_Simple_IsRule51Enabled,
  GICXXPred_Simple_IsRule52Enabled,
  GICXXPred_Simple_IsRule53Enabled,
  GICXXPred_Simple_IsRule54Enabled,
  GICXXPred_Simple_IsRule55Enabled,
  GICXXPred_Simple_IsRule56Enabled,
  GICXXPred_Simple_IsRule57Enabled,
  GICXXPred_Simple_IsRule58Enabled,
  GICXXPred_Simple_IsRule59Enabled,
  GICXXPred_Simple_IsRule60Enabled,
  GICXXPred_Simple_IsRule61Enabled,
  GICXXPred_Simple_IsRule62Enabled,
  GICXXPred_Simple_IsRule63Enabled,
  GICXXPred_Simple_IsRule64Enabled,
  GICXXPred_Simple_IsRule65Enabled,
  GICXXPred_Simple_IsRule66Enabled,
  GICXXPred_Simple_IsRule67Enabled,
  GICXXPred_Simple_IsRule68Enabled,
  GICXXPred_Simple_IsRule69Enabled,
  GICXXPred_Simple_IsRule70Enabled,
  GICXXPred_Simple_IsRule71Enabled,
  GICXXPred_Simple_IsRule72Enabled,
  GICXXPred_Simple_IsRule73Enabled,
  GICXXPred_Simple_IsRule74Enabled,
  GICXXPred_Simple_IsRule75Enabled,
  GICXXPred_Simple_IsRule76Enabled,
  GICXXPred_Simple_IsRule77Enabled,
  GICXXPred_Simple_IsRule78Enabled,
  GICXXPred_Simple_IsRule79Enabled,
  GICXXPred_Simple_IsRule80Enabled,
  GICXXPred_Simple_IsRule81Enabled,
  GICXXPred_Simple_IsRule82Enabled,
  GICXXPred_Simple_IsRule83Enabled,
  GICXXPred_Simple_IsRule84Enabled,
  GICXXPred_Simple_IsRule85Enabled,
  GICXXPred_Simple_IsRule86Enabled,
  GICXXPred_Simple_IsRule87Enabled,
  GICXXPred_Simple_IsRule88Enabled,
  GICXXPred_Simple_IsRule89Enabled,
  GICXXPred_Simple_IsRule90Enabled,
  GICXXPred_Simple_IsRule91Enabled,
  GICXXPred_Simple_IsRule92Enabled,
  GICXXPred_Simple_IsRule93Enabled,
  GICXXPred_Simple_IsRule94Enabled,
  GICXXPred_Simple_IsRule95Enabled,
  GICXXPred_Simple_IsRule96Enabled,
  GICXXPred_Simple_IsRule97Enabled,
  GICXXPred_Simple_IsRule98Enabled,
  GICXXPred_Simple_IsRule99Enabled,
  GICXXPred_Simple_IsRule100Enabled,
  GICXXPred_Simple_IsRule101Enabled,
  GICXXPred_Simple_IsRule102Enabled,
  GICXXPred_Simple_IsRule103Enabled,
  GICXXPred_Simple_IsRule104Enabled,
  GICXXPred_Simple_IsRule105Enabled,
  GICXXPred_Simple_IsRule106Enabled,
  GICXXPred_Simple_IsRule107Enabled,
  GICXXPred_Simple_IsRule108Enabled,
  GICXXPred_Simple_IsRule109Enabled,
  GICXXPred_Simple_IsRule110Enabled,
  GICXXPred_Simple_IsRule111Enabled,
  GICXXPred_Simple_IsRule112Enabled,
  GICXXPred_Simple_IsRule113Enabled,
  GICXXPred_Simple_IsRule114Enabled,
  GICXXPred_Simple_IsRule115Enabled,
  GICXXPred_Simple_IsRule116Enabled,
  GICXXPred_Simple_IsRule117Enabled,
  GICXXPred_Simple_IsRule118Enabled,
  GICXXPred_Simple_IsRule119Enabled,
  GICXXPred_Simple_IsRule120Enabled,
  GICXXPred_Simple_IsRule121Enabled,
  GICXXPred_Simple_IsRule122Enabled,
  GICXXPred_Simple_IsRule123Enabled,
  GICXXPred_Simple_IsRule124Enabled,
  GICXXPred_Simple_IsRule125Enabled,
  GICXXPred_Simple_IsRule126Enabled,
  GICXXPred_Simple_IsRule127Enabled,
  GICXXPred_Simple_IsRule128Enabled,
  GICXXPred_Simple_IsRule129Enabled,
  GICXXPred_Simple_IsRule130Enabled,
  GICXXPred_Simple_IsRule131Enabled,
  GICXXPred_Simple_IsRule132Enabled,
  GICXXPred_Simple_IsRule133Enabled,
  GICXXPred_Simple_IsRule134Enabled,
  GICXXPred_Simple_IsRule135Enabled,
  GICXXPred_Simple_IsRule136Enabled,
  GICXXPred_Simple_IsRule137Enabled,
  GICXXPred_Simple_IsRule138Enabled,
  GICXXPred_Simple_IsRule139Enabled,
  GICXXPred_Simple_IsRule140Enabled,
  GICXXPred_Simple_IsRule141Enabled,
  GICXXPred_Simple_IsRule142Enabled,
  GICXXPred_Simple_IsRule143Enabled,
  GICXXPred_Simple_IsRule144Enabled,
  GICXXPred_Simple_IsRule145Enabled,
  GICXXPred_Simple_IsRule146Enabled,
  GICXXPred_Simple_IsRule147Enabled,
  GICXXPred_Simple_IsRule148Enabled,
  GICXXPred_Simple_IsRule149Enabled,
  GICXXPred_Simple_IsRule150Enabled,
  GICXXPred_Simple_IsRule151Enabled,
  GICXXPred_Simple_IsRule152Enabled,
  GICXXPred_Simple_IsRule153Enabled,
  GICXXPred_Simple_IsRule154Enabled,
  GICXXPred_Simple_IsRule155Enabled,
  GICXXPred_Simple_IsRule156Enabled,
  GICXXPred_Simple_IsRule157Enabled,
  GICXXPred_Simple_IsRule158Enabled,
  GICXXPred_Simple_IsRule159Enabled,
  GICXXPred_Simple_IsRule160Enabled,
  GICXXPred_Simple_IsRule161Enabled,
  GICXXPred_Simple_IsRule162Enabled,
  GICXXPred_Simple_IsRule163Enabled,
  GICXXPred_Simple_IsRule164Enabled,
  GICXXPred_Simple_IsRule165Enabled,
  GICXXPred_Simple_IsRule166Enabled,
  GICXXPred_Simple_IsRule167Enabled,
  GICXXPred_Simple_IsRule168Enabled,
  GICXXPred_Simple_IsRule169Enabled,
  GICXXPred_Simple_IsRule170Enabled,
  GICXXPred_Simple_IsRule171Enabled,
  GICXXPred_Simple_IsRule172Enabled,
  GICXXPred_Simple_IsRule173Enabled,
  GICXXPred_Simple_IsRule174Enabled,
  GICXXPred_Simple_IsRule175Enabled,
  GICXXPred_Simple_IsRule176Enabled,
  GICXXPred_Simple_IsRule177Enabled,
  GICXXPred_Simple_IsRule178Enabled,
  GICXXPred_Simple_IsRule179Enabled,
  GICXXPred_Simple_IsRule180Enabled,
  GICXXPred_Simple_IsRule181Enabled,
  GICXXPred_Simple_IsRule182Enabled,
  GICXXPred_Simple_IsRule183Enabled,
  GICXXPred_Simple_IsRule184Enabled,
  GICXXPred_Simple_IsRule185Enabled,
  GICXXPred_Simple_IsRule186Enabled,
  GICXXPred_Simple_IsRule187Enabled,
  GICXXPred_Simple_IsRule188Enabled,
  GICXXPred_Simple_IsRule189Enabled,
  GICXXPred_Simple_IsRule190Enabled,
  GICXXPred_Simple_IsRule191Enabled,
  GICXXPred_Simple_IsRule192Enabled,
  GICXXPred_Simple_IsRule193Enabled,
  GICXXPred_Simple_IsRule194Enabled,
  GICXXPred_Simple_IsRule195Enabled,
  GICXXPred_Simple_IsRule196Enabled,
  GICXXPred_Simple_IsRule197Enabled,
  GICXXPred_Simple_IsRule198Enabled,
  GICXXPred_Simple_IsRule199Enabled,
  GICXXPred_Simple_IsRule200Enabled,
  GICXXPred_Simple_IsRule201Enabled,
  GICXXPred_Simple_IsRule202Enabled,
  GICXXPred_Simple_IsRule203Enabled,
  GICXXPred_Simple_IsRule204Enabled,
  GICXXPred_Simple_IsRule205Enabled,
  GICXXPred_Simple_IsRule206Enabled,
  GICXXPred_Simple_IsRule207Enabled,
  GICXXPred_Simple_IsRule208Enabled,
  GICXXPred_Simple_IsRule209Enabled,
  GICXXPred_Simple_IsRule210Enabled,
  GICXXPred_Simple_IsRule211Enabled,
  GICXXPred_Simple_IsRule212Enabled,
  GICXXPred_Simple_IsRule213Enabled,
  GICXXPred_Simple_IsRule214Enabled,
  GICXXPred_Simple_IsRule215Enabled,
  GICXXPred_Simple_IsRule216Enabled,
  GICXXPred_Simple_IsRule217Enabled,
  GICXXPred_Simple_IsRule218Enabled,
  GICXXPred_Simple_IsRule219Enabled,
  GICXXPred_Simple_IsRule220Enabled,
  GICXXPred_Simple_IsRule221Enabled,
};

bool AArch64PreLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64PreLegalizerCombinerImpl::CustomRendererFn
AArch64PreLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool AArch64PreLegalizerCombinerImpl::tryCombineAllImpl(MachineInstr &I) const {
  const TargetSubtargetInfo &ST = MF.getSubtarget();
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  B.setInstrAndDebugLoc(I);
  outs() << "\t\t\t\t" << getFunctionName(__PRETTY_FUNCTION__) << " - " << "MI: " << MI2String(I) << "\n";
  State.MIs.clear();
  State.MIs.push_back(&I);
  if (executeMatchTable(*this, State, ExecInfo, B, getMatchTable(), *ST.getInstrInfo(), MRI, *MRI.getTargetRegisterInfo(), *ST.getRegBankInfo(), AvailableFeatures, /*CoverageInfo*/ nullptr)) {
    return true;
  }

  return false;
}

enum {
  GICXXCustomAction_GICombiner0 = GICXXCustomAction_Invalid + 1,
  GICXXCustomAction_GICombiner1,
  GICXXCustomAction_GICombiner2,
  GICXXCustomAction_GICombiner3,
  GICXXCustomAction_GICombiner4,
  GICXXCustomAction_GICombiner5,
  GICXXCustomAction_GICombiner6,
  GICXXCustomAction_GICombiner7,
  GICXXCustomAction_GICombiner8,
  GICXXCustomAction_GICombiner9,
  GICXXCustomAction_GICombiner10,
  GICXXCustomAction_GICombiner11,
  GICXXCustomAction_GICombiner12,
  GICXXCustomAction_GICombiner13,
  GICXXCustomAction_GICombiner14,
  GICXXCustomAction_GICombiner15,
  GICXXCustomAction_GICombiner16,
  GICXXCustomAction_GICombiner17,
  GICXXCustomAction_GICombiner18,
  GICXXCustomAction_GICombiner19,
  GICXXCustomAction_GICombiner20,
  GICXXCustomAction_GICombiner21,
  GICXXCustomAction_GICombiner22,
  GICXXCustomAction_GICombiner23,
  GICXXCustomAction_GICombiner24,
  GICXXCustomAction_GICombiner25,
  GICXXCustomAction_GICombiner26,
  GICXXCustomAction_GICombiner27,
  GICXXCustomAction_GICombiner28,
  GICXXCustomAction_GICombiner29,
  GICXXCustomAction_GICombiner30,
  GICXXCustomAction_GICombiner31,
  GICXXCustomAction_GICombiner32,
  GICXXCustomAction_GICombiner33,
  GICXXCustomAction_GICombiner34,
  GICXXCustomAction_GICombiner35,
  GICXXCustomAction_GICombiner36,
  GICXXCustomAction_GICombiner37,
  GICXXCustomAction_GICombiner38,
  GICXXCustomAction_GICombiner39,
  GICXXCustomAction_GICombiner40,
  GICXXCustomAction_GICombiner41,
  GICXXCustomAction_GICombiner42,
  GICXXCustomAction_GICombiner43,
  GICXXCustomAction_GICombiner44,
  GICXXCustomAction_GICombiner45,
  GICXXCustomAction_GICombiner46,
  GICXXCustomAction_GICombiner47,
  GICXXCustomAction_GICombiner48,
  GICXXCustomAction_GICombiner49,
  GICXXCustomAction_GICombiner50,
  GICXXCustomAction_GICombiner51,
  GICXXCustomAction_GICombiner52,
  GICXXCustomAction_GICombiner53,
  GICXXCustomAction_GICombiner54,
  GICXXCustomAction_GICombiner55,
  GICXXCustomAction_GICombiner56,
  GICXXCustomAction_GICombiner57,
  GICXXCustomAction_GICombiner58,
  GICXXCustomAction_GICombiner59,
  GICXXCustomAction_GICombiner60,
  GICXXCustomAction_GICombiner61,
  GICXXCustomAction_GICombiner62,
  GICXXCustomAction_GICombiner63,
  GICXXCustomAction_GICombiner64,
  GICXXCustomAction_GICombiner65,
  GICXXCustomAction_GICombiner66,
  GICXXCustomAction_GICombiner67,
  GICXXCustomAction_GICombiner68,
  GICXXCustomAction_GICombiner69,
  GICXXCustomAction_GICombiner70,
  GICXXCustomAction_GICombiner71,
  GICXXCustomAction_GICombiner72,
  GICXXCustomAction_GICombiner73,
  GICXXCustomAction_GICombiner74,
  GICXXCustomAction_GICombiner75,
  GICXXCustomAction_GICombiner76,
  GICXXCustomAction_GICombiner77,
  GICXXCustomAction_GICombiner78,
  GICXXCustomAction_GICombiner79,
  GICXXCustomAction_GICombiner80,
  GICXXCustomAction_GICombiner81,
  GICXXCustomAction_GICombiner82,
  GICXXCustomAction_GICombiner83,
  GICXXCustomAction_GICombiner84,
  GICXXCustomAction_GICombiner85,
  GICXXCustomAction_GICombiner86,
  GICXXCustomAction_GICombiner87,
  GICXXCustomAction_GICombiner88,
  GICXXCustomAction_GICombiner89,
  GICXXCustomAction_GICombiner90,
  GICXXCustomAction_GICombiner91,
  GICXXCustomAction_GICombiner92,
  GICXXCustomAction_GICombiner93,
  GICXXCustomAction_GICombiner94,
  GICXXCustomAction_GICombiner95,
  GICXXCustomAction_GICombiner96,
  GICXXCustomAction_GICombiner97,
  GICXXCustomAction_GICombiner98,
  GICXXCustomAction_GICombiner99,
  GICXXCustomAction_GICombiner100,
  GICXXCustomAction_GICombiner101,
  GICXXCustomAction_GICombiner102,
  GICXXCustomAction_GICombiner103,
  GICXXCustomAction_GICombiner104,
  GICXXCustomAction_GICombiner105,
  GICXXCustomAction_GICombiner106,
  GICXXCustomAction_GICombiner107,
  GICXXCustomAction_GICombiner108,
  GICXXCustomAction_GICombiner109,
  GICXXCustomAction_GICombiner110,
  GICXXCustomAction_GICombiner111,
  GICXXCustomAction_GICombiner112,
  GICXXCustomAction_GICombiner113,
  GICXXCustomAction_GICombiner114,
  GICXXCustomAction_GICombiner115,
  GICXXCustomAction_GICombiner116,
  GICXXCustomAction_GICombiner117,
  GICXXCustomAction_GICombiner118,
  GICXXCustomAction_GICombiner119,
  GICXXCustomAction_GICombiner120,
  GICXXCustomAction_GICombiner121,
  GICXXCustomAction_GICombiner122,
  GICXXCustomAction_GICombiner123,
  GICXXCustomAction_GICombiner124,
  GICXXCustomAction_GICombiner125,
  GICXXCustomAction_GICombiner126,
  GICXXCustomAction_GICombiner127,
  GICXXCustomAction_GICombiner128,
  GICXXCustomAction_GICombiner129,
  GICXXCustomAction_GICombiner130,
  GICXXCustomAction_GICombiner131,
  GICXXCustomAction_GICombiner132,
  GICXXCustomAction_GICombiner133,
  GICXXCustomAction_GICombiner134,
  GICXXCustomAction_GICombiner135,
  GICXXCustomAction_GICombiner136,
  GICXXCustomAction_GICombiner137,
  GICXXCustomAction_GICombiner138,
  GICXXCustomAction_GICombiner139,
  GICXXCustomAction_GICombiner140,
  GICXXCustomAction_GICombiner141,
  GICXXCustomAction_GICombiner142,
  GICXXCustomAction_GICombiner143,
  GICXXCustomAction_GICombiner144,
  GICXXCustomAction_GICombiner145,
  GICXXCustomAction_GICombiner146,
  GICXXCustomAction_GICombiner147,
  GICXXCustomAction_GICombiner148,
  GICXXCustomAction_GICombiner149,
  GICXXCustomAction_GICombiner150,
  GICXXCustomAction_GICombiner151,
  GICXXCustomAction_GICombiner152,
  GICXXCustomAction_GICombiner153,
  GICXXCustomAction_GICombiner154,
  GICXXCustomAction_GICombiner155,
  GICXXCustomAction_GICombiner156,
  GICXXCustomAction_GICombiner157,
  GICXXCustomAction_GICombiner158,
  GICXXCustomAction_GICombiner159,
  GICXXCustomAction_GICombiner160,
  GICXXCustomAction_GICombiner161,
  GICXXCustomAction_GICombiner162,
  GICXXCustomAction_GICombiner163,
  GICXXCustomAction_GICombiner164,
  GICXXCustomAction_GICombiner165,
  GICXXCustomAction_GICombiner166,
  GICXXCustomAction_GICombiner167,
  GICXXCustomAction_GICombiner168,
  GICXXCustomAction_GICombiner169,
  GICXXCustomAction_GICombiner170,
  GICXXCustomAction_GICombiner171,
  GICXXCustomAction_GICombiner172,
  GICXXCustomAction_GICombiner173,
  GICXXCustomAction_GICombiner174,
  GICXXCustomAction_GICombiner175,
  GICXXCustomAction_GICombiner176,
  GICXXCustomAction_GICombiner177,
  GICXXCustomAction_GICombiner178,
  GICXXCustomAction_GICombiner179,
  GICXXCustomAction_GICombiner180,
  GICXXCustomAction_GICombiner181,
  GICXXCustomAction_GICombiner182,
  GICXXCustomAction_GICombiner183,
  GICXXCustomAction_GICombiner184,
  GICXXCustomAction_GICombiner185,
  GICXXCustomAction_GICombiner186,
  GICXXCustomAction_GICombiner187,
};
bool AArch64PreLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldAPlusC1MinusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #8: APlusC1MinusC2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "8###APlusC1MinusC2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldC2MinusAPlusC1(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #9: C2MinusAPlusC1";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "9###C2MinusAPlusC1###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldAMinusC1MinusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #10: AMinusC1MinusC2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "10###AMinusC1MinusC2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldC1Minus2MinusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #11: C1Minus2MinusC2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "11###C1Minus2MinusC2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFoldAMinusC1PlusC2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #12: AMinusC1PlusC2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "12###AMinusC1PlusC2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #13: copy_prop";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "13###copy_prop###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #14: mul_to_shl";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "14###mul_to_shl###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineSubToAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #15: sub_to_add";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "15###sub_to_add###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    std::pair<Register, bool> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #16: add_p2i_to_ptradd";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "16###add_p2i_to_ptradd###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElement(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #23: match_extract_of_element";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "23###match_extract_of_element###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchInsertVectorElementOOB(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #24: insert_vector_elt_oob";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "24###insert_vector_elt_oob###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithDifferentIndices(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #26: extract_vector_element_different_indices";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "26###extract_vector_element_different_indices###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVector(*State.MIs[0], *State.MIs[1],
              GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #27: extract_vector_element_build_vector";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "27###extract_vector_element_build_vector###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #28: extract_vector_element_build_vector_trunc2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "28###extract_vector_element_build_vector_trunc2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #29: extract_vector_element_build_vector_trunc3";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "29###extract_vector_element_build_vector_trunc3###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #30: extract_vector_element_build_vector_trunc4";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "30###extract_vector_element_build_vector_trunc4###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #31: extract_vector_element_build_vector_trunc5";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "31###extract_vector_element_build_vector_trunc5###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #32: extract_vector_element_build_vector_trunc6";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "32###extract_vector_element_build_vector_trunc6###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #33: extract_vector_element_build_vector_trunc7";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "33###extract_vector_element_build_vector_trunc7###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithBuildVectorTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #34: extract_vector_element_build_vector_trunc8";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "34###extract_vector_element_build_vector_trunc8###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVectorElementWithShuffleVector(*State.MIs[0], *State.MIs[1],
              GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #35: extract_vector_element_shuffle_vector";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "35###extract_vector_element_shuffle_vector###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner21:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #37: add_of_vscale";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "37###add_of_vscale###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner22:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #38: mul_of_vscale";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "38###mul_of_vscale###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner23:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShlOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #39: shl_of_vscale";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "39###shl_of_vscale###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner24:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSubOfVScale(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #40: sub_of_vscale";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "40###sub_of_vscale###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner25:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return !isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI) && Helper.matchFreezeOfSingleMaybePoisonOperand(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #42: push_freeze_to_prevent_poison_from_propagating";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "42###push_freeze_to_prevent_poison_from_propagating###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner26:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncateOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #43: truncate_of_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "43###truncate_of_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner27:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncateOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #44: truncate_of_sext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "44###truncate_of_sext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner28:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncateOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #45: truncate_of_anyext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "45###truncate_of_anyext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner29:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #46: zext_of_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "46###zext_of_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner30:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #47: zext_of_anyext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "47###zext_of_anyext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner31:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #48: sext_of_sext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "48###sext_of_sext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner32:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #49: sext_of_anyext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "49###sext_of_anyext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner33:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #50: anyext_of_anyext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "50###anyext_of_anyext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner34:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #51: anyext_of_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "51###anyext_of_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner35:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #52: anyext_of_sext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "52###anyext_of_sext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner36:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfSelect(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #53: select_of_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "53###select_of_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner37:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfSelect(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #54: select_of_anyext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "54###select_of_anyext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner38:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfSelect(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #55: select_of_truncate";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "55###select_of_truncate###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner39:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfBuildVector(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #56: buildvector_of_truncate";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "56###buildvector_of_truncate###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner40:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #57: narrow_binop_add";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "57###narrow_binop_add###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner41:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #58: narrow_binop_sub";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "58###narrow_binop_sub###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner42:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #59: narrow_binop_mul";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "59###narrow_binop_mul###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner43:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #60: narrow_binop_and";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "60###narrow_binop_and###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner44:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #61: narrow_binop_or";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "61###narrow_binop_or###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner45:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinop(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #62: narrow_binop_xor";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "62###narrow_binop_xor###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner46:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfInteger(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #63: integer_of_truncate";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "63###integer_of_truncate###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner47:{
    SmallVector<Register, 4> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineInsertVecElts(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineInsertVecElts(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #64: combine_insert_vec_elts_build_vector";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "64###combine_insert_vec_elts_build_vector###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner48:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractVecEltBuildVec(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #65: extract_vec_elt_build_vec";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "65###extract_vec_elt_build_vec###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner49:{
    SmallVector<std::pair<Register, MachineInstr*>> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtractAllEltsFromBuildVector(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #66: extract_all_elts_from_build_vector";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "66###extract_all_elts_from_build_vector###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner50:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #67: extending_loads";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "67###extending_loads###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner51:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #68: load_and_mask";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "68###load_and_mask###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner52:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtractedVectorLoad(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #69: combine_extracted_vector_load";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "69###combine_extracted_vector_load###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner53:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], 0.0);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #70: undef_to_fp_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "70###undef_to_fp_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner54:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #71: undef_to_int_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "71###undef_to_int_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner55:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], -1);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #72: undef_to_negative_one";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "72###undef_to_negative_one###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner56:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #73: binop_left_undef_to_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "73###binop_left_undef_to_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner57:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #74: binop_right_undef_to_undef";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "74###binop_right_undef_to_undef###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner58:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #75: unary_undef_to_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "75###unary_undef_to_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner59:{
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]->getOperand(0).getParent());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #76: unary_undef_to_undef";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "76###unary_undef_to_undef###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner60:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #77: propagate_undef_any_op";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "77###propagate_undef_any_op###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner61:{
    // Match Patterns
    if(![&](){return Helper.matchAllExplicitUsesAreUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #78: propagate_undef_all_ops";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "78###propagate_undef_all_ops###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner62:{
    // Match Patterns
    if(![&](){return Helper.matchUndefShuffleVectorMask(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #79: propagate_undef_shuffle_mask";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "79###propagate_undef_shuffle_mask###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner63:{
    // Match Patterns
    if(![&](){return Helper.matchUndefStore(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.eraseInst(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #80: erase_undef_store";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "80###erase_undef_store###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner64:{
    // Match Patterns
    if(![&](){return Helper.matchInsertExtractVecEltOutOfBounds(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #81: insert_extract_vec_elt_out_of_bounds";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "81###insert_extract_vec_elt_out_of_bounds###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner65:{
    // Match Patterns
    if(![&](){return Helper.matchSelectSameVal(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 2);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #82: select_same_val";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "82###select_same_val###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner66:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsZero(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #85: binop_left_to_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "85###binop_left_to_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner67:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineI2PToP2I(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineI2PToP2I(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #87: p2i_to_i2p";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "87###p2i_to_i2p###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner68:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){GIMatchData_info = State.MIs[1]->getOperand(1).getReg(); return true;}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineP2IToI2P(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #88: i2p_to_p2i";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "88###i2p_to_p2i###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner69:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineAnyExtTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #89: anyext_trunc_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "89###anyext_trunc_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner70:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBuildVectorIdentityFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #94: buildvector_identity_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "94###buildvector_identity_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner71:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #95: trunc_buildvector_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "95###trunc_buildvector_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner72:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncLshrBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #96: trunc_lshr_buildvector_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "96###trunc_lshr_buildvector_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner73:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #97: bitcast_bitcast_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "97###bitcast_bitcast_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner74:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #98: fptrunc_fpext_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "98###fptrunc_fpext_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner75:{
    MachineInstr* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtendThroughPhis(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExtendThroughPhis(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #101: extend_through_phis";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "101###extend_through_phis###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner76:{
    std::tuple<Register, Register> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifyAddToSub(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyAddToSub(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #102: simplify_add_to_sub";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "102###simplify_add_to_sub###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner77:{
    InstructionStepsMatchInfo GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchHoistLogicOpWithSameOpcodeHands(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildInstructionSteps(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #103: hoist_logic_op_with_same_opcode_hands";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "103###hoist_logic_op_with_same_opcode_hands###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner78:{
    std::optional<int64_t> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftsTooBig(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    if (GIMatchData_matchinfo) {
              Helper.replaceInstWithConstant(*State.MIs[0], *GIMatchData_matchinfo);
            } else {
              Helper.replaceInstWithUndef(*State.MIs[0]);
            }
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #104: shifts_too_big";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "104###shifts_too_big###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner79:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocPtrAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #105: reassoc_ptradd";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "105###reassoc_ptradd###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner80:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchReassocCommBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #106: reassoc_comm_binops";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "106###reassoc_comm_binops###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner81:{
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #107: ptr_add_immed_chain";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "107###ptr_add_immed_chain###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner82:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCanonicalizeICmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #108: canonicalize_icmp";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "108###canonicalize_icmp###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner83:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCanonicalizeFCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #109: canonicalize_fcmp";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "109###canonicalize_fcmp###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner84:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchICmpToTrueFalseKnownBits(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #110: icmp_to_true_false_known_bits";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "110###icmp_to_true_false_known_bits###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner85:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchICmpToLHSKnownBits(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #111: icmp_to_lhs_known_bits";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "111###icmp_to_lhs_known_bits###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner86:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchRedundantBinOpInEquality(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #114: redundant_binop_in_equality";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "114###redundant_binop_in_equality###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner87:{
    std::tuple<Register, int64_t> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchAshrShlToSextInreg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyAshShlToSextInreg(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #115: shl_ashr_to_sext_inreg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "115###shl_ashr_to_sext_inreg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner88:{
    std::tuple<Register, unsigned> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSextInRegOfLoad(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySextInRegOfLoad(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #116: sext_inreg_of_load";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "116###sext_inreg_of_load###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner89:{
    RegisterImmPair GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShlOfExtend(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShlOfExtend(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #117: reduce_shl_of_extend";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "117###reduce_shl_of_extend###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner90:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNarrowBinopFeedingAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #118: narrow_binop_feeding_and";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "118###narrow_binop_feeding_and###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner91:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantSelectCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #120: select_constant_cmp";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "120###select_constant_cmp###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner92:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSelectIMinMax(State.MIs[0]->getOperand(0), GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #121: select_to_iminmax";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "121###select_to_iminmax###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner93:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSelect(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #122: match_selects";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "122###match_selects###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner94:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #123: redundant_and";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "123###redundant_and###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner95:{
    // Match Patterns
    if(![&](){return Helper.matchRedundantSExtInReg(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #124: redundant_sext_inreg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "124###redundant_sext_inreg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner96:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #125: redundant_or";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "125###redundant_or###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner97:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsKnownToBeAPowerOfTwo(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySimplifyURemByPow2(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #126: urem_pow2_to_mask";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "126###urem_pow2_to_mask###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner98:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineZextTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #127: zext_trunc_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "127###zext_trunc_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner99:{
    // Match Patterns
    if(![&](){unsigned BitWidth = MRI.getType(State.MIs[0]->getOperand(1).getReg()).getScalarSizeInBits();
                return Helper.getKnownBits()->maskedValueIsZero(State.MIs[0]->getOperand(1).getReg(),
                         APInt::getOneBitSet(BitWidth, State.MIs[0]->getOperand(2).getImm() - 1));}()) {
      return false;
    }
    // Apply Patterns
    Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
              Helper.getBuilder().buildZExtInReg(State.MIs[0]->getOperand(0), State.MIs[0]->getOperand(1), State.MIs[0]->getOperand(2).getImm());
              State.MIs[0]->eraseFromParent();
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #128: sext_inreg_to_zext_inreg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "128###sext_inreg_to_zext_inreg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner100:{
    std::pair<MachineInstr*, LLT> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineTruncOfShift(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineTruncOfShift(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #129: trunc_shift";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "129###trunc_shift###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner101:{
    SmallVector<Register, 4> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchNotCmp(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyNotCmp(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #130: not_cmp_fold";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "130###not_cmp_fold###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner102:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #131: opt_brcond_by_inverting_cond";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "131###opt_brcond_by_inverting_cond###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner103:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #132: constant_fold_fneg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "132###constant_fold_fneg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner104:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #133: constant_fold_fabs";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "133###constant_fold_fabs###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner105:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #134: constant_fold_fsqrt";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "134###constant_fold_fsqrt###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner106:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #135: constant_fold_flog2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "135###constant_fold_flog2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner107:{
    // Apply Patterns
    Helper.applyCombineConstantFoldFpUnary(*State.MIs[0], State.MIs[1]->getOperand(1).getFPImm());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #136: constant_fold_fptrunc";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "136###constant_fold_fptrunc###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner108:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #137: itof_const_zero_fold_si";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "137###itof_const_zero_fold_si###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner109:{
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0]->getOperand(0).getParent(), 0.0);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #138: itof_const_zero_fold_ui";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "138###itof_const_zero_fold_ui###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner110:{
    APInt GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConstPtrAddToI2P(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #139: const_ptradd_to_i2p";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "139###const_ptradd_to_i2p###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner111:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOverlappingAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #140: overlapping_and";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "140###overlapping_and###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner112:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy2(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #141: mulo_by_2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "141###mulo_by_2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner113:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMulOBy0(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #142: mulo_by_0";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "142###mulo_by_0###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner114:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddEToAddO(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #143: adde_to_addo";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "143###adde_to_addo###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner115:{
    unsigned GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFMinMaxNaN(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #144: combine_minmax_nan";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "144###combine_minmax_nan###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner116:{
    // Match Patterns
    if(![&](){return Helper.matchFPowIExpansion(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyExpandFPowI(*State.MIs[0], State.MIs[1]->getOperand(1).getCImm()->getSExtValue());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #145: expand_const_fpowi";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "145###expand_const_fpowi###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner117:{
    std::pair<Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #146: xor_of_and_with_same_reg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "146###xor_of_and_with_same_reg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner118:{
    // Match Patterns
    if(![&](){return Helper.matchPtrAddZero(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddZero(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #147: ptr_add_with_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "147###ptr_add_with_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner119:{
    RegisterImmPair GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShiftImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #148: shift_immed_chain";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "148###shift_immed_chain###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner120:{
    ShiftOfShiftedLogic GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShiftOfShiftedLogic(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShiftOfShiftedLogic(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #149: shift_of_shifted_logic_chain";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "149###shift_of_shifted_logic_chain###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner121:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchLoadOrCombine(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #150: load_or_combine";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "150###load_or_combine###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner122:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineDivRem(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineDivRem(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #151: div_rem_to_divrem";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "151###div_rem_to_divrem###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner123:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOrShiftToFunnelShift(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #152: funnel_shift_from_or_shift";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "152###funnel_shift_from_or_shift###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner124:{
    // Match Patterns
    if(![&](){return Helper.matchFunnelShiftToRotate(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFunnelShiftToRotate(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #153: funnel_shift_to_rotate";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "153###funnel_shift_to_rotate###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner125:{
    // Match Patterns
    if(![&](){return Helper.matchConstantLargerBitWidth(*State.MIs[0], 3);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFunnelShiftConstantModulo(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #156: funnel_shift_overshift";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "156###funnel_shift_overshift###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner126:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCommuteShift(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #159: commute_shift";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "159###commute_shift###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner127:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromSExtInReg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #160: bitfield_extract_from_sext_inreg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "160###bitfield_extract_from_sext_inreg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner128:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #161: bitfield_extract_from_and";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "161###bitfield_extract_from_and###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner129:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShr(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #162: bitfield_extract_from_shr";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "162###bitfield_extract_from_shr###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner130:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShrAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #163: bitfield_extract_from_shr_and";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "163###bitfield_extract_from_shr_and###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner131:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #164: constant_fold_binop";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "164###constant_fold_binop###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner132:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFPBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #165: constant_fold_fp_binop";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "165###constant_fold_fp_binop###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner133:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFMA(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #166: constant_fold_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "166###constant_fold_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner134:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldCastOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #167: constant_fold_cast_op";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "167###constant_fold_cast_op###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner135:{
    // Match Patterns
    if(![&](){return Helper.matchUDivByConst(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUDivByConst(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #169: udiv_by_const";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "169###udiv_by_const###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner136:{
    // Match Patterns
    if(![&](){return Helper.matchSDivByConst(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySDivByConst(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #170: sdiv_by_const";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "170###sdiv_by_const###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner137:{
    // Match Patterns
    if(![&](){return Helper.matchDivByPow2(*State.MIs[0], /*IsSigned=*/true);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySDivByPow2(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #171: sdiv_by_pow2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "171###sdiv_by_pow2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner138:{
    // Match Patterns
    if(![&](){return Helper.matchDivByPow2(*State.MIs[0], /*IsSigned=*/false);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUDivByPow2(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #172: udiv_by_pow2";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "172###udiv_by_pow2###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner139:{
    // Match Patterns
    if(![&](){return Helper.matchUMulHToLShr(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUMulHToLShr(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #173: mulh_to_lshr";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "173###mulh_to_lshr###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner140:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantNegOperands(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #174: redundant_neg_operands";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "174###redundant_neg_operands###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner141:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchAndOrDisjointMask(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #175: and_or_disjoint_mask";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "175###and_or_disjoint_mask###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner142:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFMulToFMadOrFMA(*State.MIs[0],
                                                                  GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #176: combine_fadd_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "176###combine_fadd_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner143:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFpExtFMulToFMadOrFMA(*State.MIs[0],
                                                                       GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #177: combine_fadd_fpext_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "177###combine_fadd_fpext_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner144:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFMAFMulToFMadOrFMA(*State.MIs[0],
                                                                     GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #178: combine_fadd_fma_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "178###combine_fadd_fma_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner145:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFAddFpExtFMulToFMadOrFMAAggressive(
                                                          *State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #179: combine_fadd_fpext_fma_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "179###combine_fadd_fpext_fma_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner146:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFMulToFMadOrFMA(*State.MIs[0],
                                                                  GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #180: combine_fsub_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "180###combine_fsub_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner147:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFNegFMulToFMadOrFMA(*State.MIs[0],
                                                                      GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #181: combine_fsub_fneg_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "181###combine_fsub_fneg_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner148:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFpExtFMulToFMadOrFMA(*State.MIs[0],
                                                                       GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #182: combine_fsub_fpext_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "182###combine_fsub_fpext_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner149:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineFSubFpExtFNegFMulToFMadOrFMA(
                                                    *State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #183: combine_fsub_fpext_fneg_fmul_to_fmad_or_fma";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "183###combine_fsub_fpext_fneg_fmul_to_fmad_or_fma###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner150:{
    unsigned GIMatchData_select_op_no;
    // Match Patterns
    if(![&](){return Helper.matchFoldBinOpIntoSelect(*State.MIs[0], GIMatchData_select_op_no);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFoldBinOpIntoSelect(*State.MIs[0], GIMatchData_select_op_no);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #184: fold_binop_into_select";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "184###fold_binop_into_select###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner151:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSubAddSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #185: sub_add_reg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "185###sub_add_reg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner152:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifySelectToMinMax(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #186: select_to_minmax";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "186###select_to_minmax###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner153:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchFsubToFneg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyFsubToFneg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #187: fsub_to_fneg";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "187###fsub_to_fneg###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner154:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #188: commute_int_constant_to_rhs";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "188###commute_int_constant_to_rhs###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner155:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteFPConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #189: commute_fp_constant_to_rhs";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "189###commute_fp_constant_to_rhs###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner156:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #190: match_ands";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "190###match_ands###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner157:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #191: match_ors";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "191###match_ors###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner158:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSimplifyNegMinMax(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #192: simplify_neg_minmax";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "192###simplify_neg_minmax###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner159:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #193: combine_concat_vector";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "193###combine_concat_vector###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner160:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSextOfTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #194: sext_trunc";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "194###sext_trunc###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner161:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchZextOfTrunc(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #195: zext_trunc";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "195###zext_trunc###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner162:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchNonNegZext(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #196: nneg_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "196###nneg_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner163:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineShuffleConcat(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineShuffleConcat(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #197: combine_shuffle_concat";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "197###combine_shuffle_concat###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner164:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShuffleUndefRHS(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #198: combine_shuffle_undef_rhs";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "198###combine_shuffle_undef_rhs###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner165:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchShuffleDisjointMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #199: combine_shuffle_disjoint_mask";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "199###combine_shuffle_disjoint_mask###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner166:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #200: combine_use_vector_truncate";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "200###combine_use_vector_truncate###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner167:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUnmergeValuesAnyExtBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #201: unmerge_anyext_build_vector";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "201###unmerge_anyext_build_vector###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner168:{
    SmallVector<Register, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #202: unmerge_merge";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "202###unmerge_merge###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner169:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMergeUnmerge(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #203: merge_unmerge";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "203###merge_unmerge###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner170:{
    SmallVector<APInt, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #204: unmerge_cst";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "204###unmerge_cst###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner171:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeUndef(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #205: unmerge_undef";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "205###unmerge_undef###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner172:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #206: unmerge_dead_to_trunc";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "206###unmerge_dead_to_trunc###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner173:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeZExtToZExt(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeZExtToZExt(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #207: unmerge_zext_to_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "207###unmerge_zext_to_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner174:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndUndef(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #208: merge_of_x_and_undef";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "208###merge_of_x_and_undef###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner175:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndZero(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #209: merge_of_x_and_zero";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "209###merge_of_x_and_zero###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner176:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOverflow(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #210: match_addos";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "210###match_addos###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner177:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSuboCarryOut(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #211: match_subo_no_overflow";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "211###match_subo_no_overflow###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner178:{
    // Match Patterns
    if(![&](){return matchFConstantToConstant(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyFConstantToConstant(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #212: fconstant_to_constant";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "212###fconstant_to_constant###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner179:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchICmpRedundantTrunc(*State.MIs[0], MRI, Helper.getKnownBits(), GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyICmpRedundantTrunc(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #213: icmp_redundant_trunc";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "213###icmp_redundant_trunc###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner180:{
    std::pair<uint64_t, uint64_t> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchFoldGlobalOffset(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyFoldGlobalOffset(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #214: fold_global_offset";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "214###fold_global_offset###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner181:{
    // Match Patterns
    if(![&](){return Helper.matchShuffleToExtract(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyShuffleToExtract(*State.MIs[0]);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #215: shuffle_to_extract";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "215###shuffle_to_extract###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner182:{
    std::tuple<Register, Register, bool> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtAddvToUdotAddv(*State.MIs[0], MRI, STI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtAddvToUdotAddv(*State.MIs[0], MRI, B, Observer, STI, GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #216: ext_addv_to_udot_addv";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "216###ext_addv_to_udot_addv###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner183:{
    std::pair<Register, bool> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtUaddvToUaddlv(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtUaddvToUaddlv(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #217: ext_uaddv_to_uaddlv";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "217###ext_uaddv_to_uaddlv###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner184:{
    // Match Patterns
    if(![&](){return matchPushAddSubExt(*State.MIs[0], MRI, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());}()) {
      return false;
    }
    // Apply Patterns
    applyPushAddSubExt(*State.MIs[0], MRI, B, State.MIs[1]->getOpcode() == TargetOpcode::G_SEXT, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #218: push_sub_through_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "218###push_sub_through_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner185:{
    // Match Patterns
    if(![&](){return matchPushAddSubExt(*State.MIs[0], MRI, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());}()) {
      return false;
    }
    // Apply Patterns
    applyPushAddSubExt(*State.MIs[0], MRI, B, State.MIs[1]->getOpcode() == TargetOpcode::G_SEXT, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #219: push_add_through_zext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "219###push_add_through_zext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner186:{
    // Match Patterns
    if(![&](){return matchPushAddSubExt(*State.MIs[0], MRI, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());}()) {
      return false;
    }
    // Apply Patterns
    applyPushAddSubExt(*State.MIs[0], MRI, B, State.MIs[1]->getOpcode() == TargetOpcode::G_SEXT, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #220: push_sub_through_sext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "220###push_sub_through_sext###" +temp+"", true);
    
    return true;
  }
  case GICXXCustomAction_GICombiner187:{
    // Match Patterns
    if(![&](){return matchPushAddSubExt(*State.MIs[0], MRI, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());}()) {
      return false;
    }
    // Apply Patterns
    applyPushAddSubExt(*State.MIs[0], MRI, B, State.MIs[1]->getOpcode() == TargetOpcode::G_SEXT, State.MIs[0]->getOperand(0).getReg(), State.MIs[1]->getOperand(1).getReg(), State.MIs[2]->getOperand(1).getReg());
    
    // Nico
    outs() << "\t\t\t\t\tCombiner Rule #221: push_add_through_sext";
    std::string temp = "";
    for (const auto& C : State.MIs) { temp += MI2String(*C); temp += " | "; }
    llvm::log_backend_event(llvm::to_string(llvm::current_stage), __FILE__, __FUNCTION__, "221###push_add_through_sext###" +temp+"", true);
    
    return true;
  }
  }
  llvm_unreachable("Unknown Apply Action");
}
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define GIMT_Encode2(Val) uint8_t(Val), uint8_t((uint16_t)Val >> 8)
#define GIMT_Encode4(Val) uint8_t(Val), uint8_t((uint32_t)Val >> 8), uint8_t((uint32_t)Val >> 16), uint8_t((uint32_t)Val >> 24)
#define GIMT_Encode8(Val) uint8_t(Val), uint8_t((uint64_t)Val >> 8), uint8_t((uint64_t)Val >> 16), uint8_t((uint64_t)Val >> 24),  uint8_t((uint64_t)Val >> 32), uint8_t((uint64_t)Val >> 40), uint8_t((uint64_t)Val >> 48), uint8_t((uint64_t)Val >> 56)
#else
#define GIMT_Encode2(Val) uint8_t((uint16_t)Val >> 8), uint8_t(Val)
#define GIMT_Encode4(Val) uint8_t((uint32_t)Val >> 24), uint8_t((uint32_t)Val >> 16), uint8_t((uint32_t)Val >> 8), uint8_t(Val)
#define GIMT_Encode8(Val) uint8_t((uint64_t)Val >> 56), uint8_t((uint64_t)Val >> 48), uint8_t((uint64_t)Val >> 40), uint8_t((uint64_t)Val >> 32),  uint8_t((uint64_t)Val >> 24), uint8_t((uint64_t)Val >> 16), uint8_t((uint64_t)Val >> 8), uint8_t(Val)
#endif
const uint8_t *AArch64PreLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(296), /*)*//*default:*//*Label 98*/ GIMT_Encode4(7277),
    /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(1114), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(1126),
    /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1741),
    /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(2074),
    /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(2240),
    /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(2313),
    /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(2397),
    /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(2442), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(2509),
    /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(2790),
    /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(3035), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_PHI*//*Label 11*/ GIMT_Encode4(3136), GIMT_Encode4(0),
    /*TargetOpcode::G_GLOBAL_VALUE*//*Label 12*/ GIMT_Encode4(3148), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_UNMERGE_VALUES*//*Label 13*/ GIMT_Encode4(3160), GIMT_Encode4(0),
    /*TargetOpcode::G_MERGE_VALUES*//*Label 14*/ GIMT_Encode4(3227),
    /*TargetOpcode::G_BUILD_VECTOR*//*Label 15*/ GIMT_Encode4(3301),
    /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 16*/ GIMT_Encode4(3349),
    /*TargetOpcode::G_CONCAT_VECTORS*//*Label 17*/ GIMT_Encode4(3361),
    /*TargetOpcode::G_PTRTOINT*//*Label 18*/ GIMT_Encode4(3373),
    /*TargetOpcode::G_INTTOPTR*//*Label 19*/ GIMT_Encode4(3416),
    /*TargetOpcode::G_BITCAST*//*Label 20*/ GIMT_Encode4(3449),
    /*TargetOpcode::G_FREEZE*//*Label 21*/ GIMT_Encode4(3492), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_LOAD*//*Label 22*/ GIMT_Encode4(3556),
    /*TargetOpcode::G_SEXTLOAD*//*Label 23*/ GIMT_Encode4(3568),
    /*TargetOpcode::G_ZEXTLOAD*//*Label 24*/ GIMT_Encode4(3580), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_STORE*//*Label 25*/ GIMT_Encode4(3592), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ANYEXT*//*Label 26*/ GIMT_Encode4(3604),
    /*TargetOpcode::G_TRUNC*//*Label 27*/ GIMT_Encode4(3732), GIMT_Encode4(0),
    /*TargetOpcode::G_FCONSTANT*//*Label 28*/ GIMT_Encode4(4090), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SEXT*//*Label 29*/ GIMT_Encode4(4102),
    /*TargetOpcode::G_SEXT_INREG*//*Label 30*/ GIMT_Encode4(4183),
    /*TargetOpcode::G_ZEXT*//*Label 31*/ GIMT_Encode4(4228),
    /*TargetOpcode::G_SHL*//*Label 32*/ GIMT_Encode4(4358),
    /*TargetOpcode::G_LSHR*//*Label 33*/ GIMT_Encode4(4527),
    /*TargetOpcode::G_ASHR*//*Label 34*/ GIMT_Encode4(4650),
    /*TargetOpcode::G_FSHL*//*Label 35*/ GIMT_Encode4(4784),
    /*TargetOpcode::G_FSHR*//*Label 36*/ GIMT_Encode4(4827),
    /*TargetOpcode::G_ROTR*//*Label 37*/ GIMT_Encode4(4870),
    /*TargetOpcode::G_ROTL*//*Label 38*/ GIMT_Encode4(4894),
    /*TargetOpcode::G_ICMP*//*Label 39*/ GIMT_Encode4(4918),
    /*TargetOpcode::G_FCMP*//*Label 40*/ GIMT_Encode4(4974), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SELECT*//*Label 41*/ GIMT_Encode4(4986),
    /*TargetOpcode::G_UADDO*//*Label 42*/ GIMT_Encode4(5081),
    /*TargetOpcode::G_UADDE*//*Label 43*/ GIMT_Encode4(5104),
    /*TargetOpcode::G_USUBO*//*Label 44*/ GIMT_Encode4(5116),
    /*TargetOpcode::G_USUBE*//*Label 45*/ GIMT_Encode4(5128),
    /*TargetOpcode::G_SADDO*//*Label 46*/ GIMT_Encode4(5140),
    /*TargetOpcode::G_SADDE*//*Label 47*/ GIMT_Encode4(5163),
    /*TargetOpcode::G_SSUBO*//*Label 48*/ GIMT_Encode4(5175),
    /*TargetOpcode::G_SSUBE*//*Label 49*/ GIMT_Encode4(5187),
    /*TargetOpcode::G_UMULO*//*Label 50*/ GIMT_Encode4(5199),
    /*TargetOpcode::G_SMULO*//*Label 51*/ GIMT_Encode4(5233),
    /*TargetOpcode::G_UMULH*//*Label 52*/ GIMT_Encode4(5267),
    /*TargetOpcode::G_SMULH*//*Label 53*/ GIMT_Encode4(5290),
    /*TargetOpcode::G_UADDSAT*//*Label 54*/ GIMT_Encode4(5302),
    /*TargetOpcode::G_SADDSAT*//*Label 55*/ GIMT_Encode4(5314), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_USHLSAT*//*Label 56*/ GIMT_Encode4(5326),
    /*TargetOpcode::G_SSHLSAT*//*Label 57*/ GIMT_Encode4(5349),
    /*TargetOpcode::G_SMULFIX*//*Label 58*/ GIMT_Encode4(5372),
    /*TargetOpcode::G_UMULFIX*//*Label 59*/ GIMT_Encode4(5384),
    /*TargetOpcode::G_SMULFIXSAT*//*Label 60*/ GIMT_Encode4(5396),
    /*TargetOpcode::G_UMULFIXSAT*//*Label 61*/ GIMT_Encode4(5408), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FADD*//*Label 62*/ GIMT_Encode4(5420),
    /*TargetOpcode::G_FSUB*//*Label 63*/ GIMT_Encode4(5532),
    /*TargetOpcode::G_FMUL*//*Label 64*/ GIMT_Encode4(5621),
    /*TargetOpcode::G_FMA*//*Label 65*/ GIMT_Encode4(5709),
    /*TargetOpcode::G_FMAD*//*Label 66*/ GIMT_Encode4(5732),
    /*TargetOpcode::G_FDIV*//*Label 67*/ GIMT_Encode4(5755),
    /*TargetOpcode::G_FREM*//*Label 68*/ GIMT_Encode4(5789), GIMT_Encode4(0),
    /*TargetOpcode::G_FPOWI*//*Label 69*/ GIMT_Encode4(5801), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FLOG2*//*Label 70*/ GIMT_Encode4(5823), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FNEG*//*Label 71*/ GIMT_Encode4(5845), GIMT_Encode4(0),
    /*TargetOpcode::G_FPTRUNC*//*Label 72*/ GIMT_Encode4(5896),
    /*TargetOpcode::G_FPTOSI*//*Label 73*/ GIMT_Encode4(5939),
    /*TargetOpcode::G_FPTOUI*//*Label 74*/ GIMT_Encode4(5961),
    /*TargetOpcode::G_SITOFP*//*Label 75*/ GIMT_Encode4(5983),
    /*TargetOpcode::G_UITOFP*//*Label 76*/ GIMT_Encode4(6010), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FABS*//*Label 77*/ GIMT_Encode4(6037), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FCANONICALIZE*//*Label 78*/ GIMT_Encode4(6116),
    /*TargetOpcode::G_FMINNUM*//*Label 79*/ GIMT_Encode4(6146),
    /*TargetOpcode::G_FMAXNUM*//*Label 80*/ GIMT_Encode4(6180),
    /*TargetOpcode::G_FMINNUM_IEEE*//*Label 81*/ GIMT_Encode4(6214),
    /*TargetOpcode::G_FMAXNUM_IEEE*//*Label 82*/ GIMT_Encode4(6226),
    /*TargetOpcode::G_FMINIMUM*//*Label 83*/ GIMT_Encode4(6238),
    /*TargetOpcode::G_FMAXIMUM*//*Label 84*/ GIMT_Encode4(6272), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_PTR_ADD*//*Label 85*/ GIMT_Encode4(6306), GIMT_Encode4(0),
    /*TargetOpcode::G_SMIN*//*Label 86*/ GIMT_Encode4(6396),
    /*TargetOpcode::G_SMAX*//*Label 87*/ GIMT_Encode4(6430),
    /*TargetOpcode::G_UMIN*//*Label 88*/ GIMT_Encode4(6464),
    /*TargetOpcode::G_UMAX*//*Label 89*/ GIMT_Encode4(6498),
    /*TargetOpcode::G_ABS*//*Label 90*/ GIMT_Encode4(6532), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_BR*//*Label 91*/ GIMT_Encode4(6544), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 92*/ GIMT_Encode4(6556),
    /*TargetOpcode::G_EXTRACT_VECTOR_ELT*//*Label 93*/ GIMT_Encode4(6686),
    /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 94*/ GIMT_Encode4(7063), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_BITREVERSE*//*Label 95*/ GIMT_Encode4(7140), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FSQRT*//*Label 96*/ GIMT_Encode4(7229), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_VECREDUCE_ADD*//*Label 97*/ GIMT_Encode4(7251),
    // Label 0: @1114
    GIM_Try, /*On fail goto*//*Label 99*/ GIMT_Encode4(1125), // Rule ID 13 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] s
      // No operand predicates
      // Combiner Rule #13: copy_prop
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 99: @1125
    GIM_Reject,
    // Label 1: @1126
    GIM_Try, /*On fail goto*//*Label 100*/ GIMT_Encode4(1137), // Rule ID 16 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // Combiner Rule #16: add_p2i_to_ptradd; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 100: @1137
    GIM_Try, /*On fail goto*//*Label 101*/ GIMT_Encode4(1148), // Rule ID 93 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // Combiner Rule #77: propagate_undef_any_op; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
    // Label 101: @1148
    GIM_Try, /*On fail goto*//*Label 102*/ GIMT_Encode4(1159), // Rule ID 140 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule102Enabled),
      // Combiner Rule #102: simplify_add_to_sub; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner76),
    // Label 102: @1159
    GIM_Try, /*On fail goto*//*Label 103*/ GIMT_Encode4(1170), // Rule ID 229 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 103: @1170
    GIM_Try, /*On fail goto*//*Label 104*/ GIMT_Encode4(1181), // Rule ID 277 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 104: @1181
    GIM_Try, /*On fail goto*//*Label 105*/ GIMT_Encode4(1192), // Rule ID 306 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 105: @1192
    GIM_Try, /*On fail goto*//*Label 106*/ GIMT_Encode4(1226), // Rule ID 0 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] Operand 1
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
      // MIs[1] A
      // No operand predicates
      // MIs[0] B
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #0: ZeroMinusAPlusB
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_RootToRootCopy, /*OpIdx*/2, // B
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // A
      GIR_EraseRootFromParent_Done,
    // Label 106: @1226
    GIM_Try, /*On fail goto*//*Label 107*/ GIMT_Encode4(1263), // Rule ID 12 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] A
      // No operand predicates
      // MIs[1] c1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[0] c2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #12: AMinusC1PlusC2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
    // Label 107: @1263
    GIM_Try, /*On fail goto*//*Label 108*/ GIMT_Encode4(1297), // Rule ID 3 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] A
      // No operand predicates
      // MIs[0] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #3: BMinusAPlusA
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 108: @1297
    GIM_Try, /*On fail goto*//*Label 109*/ GIMT_Encode4(1331), // Rule ID 130 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] src
      // No operand predicates
      // MIs[1] __add_sub_reg_match_0.x
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.x
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #93: add_sub_reg @ [__add_sub_reg_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 109: @1331
    GIM_Try, /*On fail goto*//*Label 110*/ GIMT_Encode4(1376), // Rule ID 5 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] A
      // No operand predicates
      // MIs[1] B
      // No operand predicates
      // MIs[0] sub2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[2] B
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
      // MIs[2] C
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #5: AMinusBPlusBMinusC
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // A
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
      GIR_EraseRootFromParent_Done,
    // Label 110: @1376
    GIM_Try, /*On fail goto*//*Label 111*/ GIMT_Encode4(1421), // Rule ID 4 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] A
      // No operand predicates
      // MIs[1] B
      // No operand predicates
      // MIs[0] sub2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[2] C
      // No operand predicates
      // MIs[2] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #4: AMinusBPlusCMinusA
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // C
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
      GIR_EraseRootFromParent_Done,
    // Label 111: @1421
    GIM_Try, /*On fail goto*//*Label 112*/ GIMT_Encode4(1450), // Rule ID 368 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule221Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] ext1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src1
      // No operand predicates
      // MIs[0] ext2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[2] src2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #221: push_add_through_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner187),
    // Label 112: @1450
    GIM_Try, /*On fail goto*//*Label 113*/ GIMT_Encode4(1485), // Rule ID 39 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] left
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] imm1
      // No operand predicates
      // MIs[0] right
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[2] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #37: add_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
    // Label 113: @1485
    GIM_Try, /*On fail goto*//*Label 114*/ GIMT_Encode4(1514), // Rule ID 366 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule219Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] ext1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src1
      // No operand predicates
      // MIs[0] ext2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[2] src2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #219: push_add_through_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner185),
    // Label 114: @1514
    GIM_Try, /*On fail goto*//*Label 115*/ GIMT_Encode4(1548), // Rule ID 1 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] Operand 1
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/1, 0,
      // MIs[1] B
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #1: APlusZeroMinusB
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_RootToRootCopy, /*OpIdx*/1, // A
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // B
      GIR_EraseRootFromParent_Done,
    // Label 115: @1548
    GIM_Try, /*On fail goto*//*Label 116*/ GIMT_Encode4(1582), // Rule ID 2 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #2: APlusBMinusB
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 116: @1582
    GIM_Try, /*On fail goto*//*Label 117*/ GIMT_Encode4(1616), // Rule ID 129 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule93Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.x
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] src
      // No operand predicates
      // MIs[1] __add_sub_reg_match_0.x
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #93: add_sub_reg @ [__add_sub_reg_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 117: @1616
    GIM_Try, /*On fail goto*//*Label 118*/ GIMT_Encode4(1661), // Rule ID 6 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] add1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[2] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[2] C
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #6: APlusBMinusAplusC
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // C
      GIR_EraseRootFromParent_Done,
    // Label 118: @1661
    GIM_Try, /*On fail goto*//*Label 119*/ GIMT_Encode4(1706), // Rule ID 7 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] A
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] B
      // No operand predicates
      // MIs[1] add1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[2] C
      // No operand predicates
      // MIs[2] A
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #7: APlusBMinusCPlusA
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // B
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // C
      GIR_EraseRootFromParent_Done,
    // Label 119: @1706
    GIM_Try, /*On fail goto*//*Label 120*/ GIMT_Encode4(1729), // Rule ID 104 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 120: @1729
    GIM_Try, /*On fail goto*//*Label 121*/ GIMT_Encode4(1740), // Rule ID 148 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule106Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #106: reassoc_comm_binops
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner80),
    // Label 121: @1740
    GIM_Reject,
    // Label 2: @1741
    GIM_Try, /*On fail goto*//*Label 122*/ GIMT_Encode4(1752), // Rule ID 94 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // Combiner Rule #77: propagate_undef_any_op; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
    // Label 122: @1752
    GIM_Try, /*On fail goto*//*Label 123*/ GIMT_Encode4(1763), // Rule ID 237 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 123: @1763
    GIM_Try, /*On fail goto*//*Label 124*/ GIMT_Encode4(1774), // Rule ID 278 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 124: @1774
    GIM_Try, /*On fail goto*//*Label 125*/ GIMT_Encode4(1785), // Rule ID 303 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule185Enabled),
      // Combiner Rule #185: sub_add_reg; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner151),
    // Label 125: @1785
    GIM_Try, /*On fail goto*//*Label 126*/ GIMT_Encode4(1796), // Rule ID 337 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule192Enabled),
      // Combiner Rule #192: simplify_neg_minmax; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner158),
    // Label 126: @1796
    GIM_Try, /*On fail goto*//*Label 127*/ GIMT_Encode4(1833), // Rule ID 8 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] add
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[1] A
      // No operand predicates
      // MIs[1] c1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[0] c2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #8: APlusC1MinusC2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
    // Label 127: @1833
    GIM_Try, /*On fail goto*//*Label 128*/ GIMT_Encode4(1870), // Rule ID 11 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] c1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[1] A
      // No operand predicates
      // MIs[0] c2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #11: C1Minus2MinusC2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
    // Label 128: @1870
    GIM_Try, /*On fail goto*//*Label 129*/ GIMT_Encode4(1907), // Rule ID 10 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] sub1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] A
      // No operand predicates
      // MIs[1] c1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[0] c2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #10: AMinusC1MinusC2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 129: @1907
    GIM_Try, /*On fail goto*//*Label 130*/ GIMT_Encode4(1936), // Rule ID 367 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule220Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] ext1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src1
      // No operand predicates
      // MIs[0] ext2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[2] src2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #220: push_sub_through_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner186),
    // Label 130: @1936
    GIM_Try, /*On fail goto*//*Label 131*/ GIMT_Encode4(1965), // Rule ID 365 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule218Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] ext1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src1
      // No operand predicates
      // MIs[0] ext2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[2] src2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #218: push_sub_through_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner184),
    // Label 131: @1965
    GIM_Try, /*On fail goto*//*Label 132*/ GIMT_Encode4(2002), // Rule ID 9 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] c2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm2
      // No operand predicates
      // MIs[0] add
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[2] A
      // No operand predicates
      // MIs[2] c1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #9: C2MinusAPlusC1
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 132: @2002
    GIM_Try, /*On fail goto*//*Label 133*/ GIMT_Encode4(2029), // Rule ID 42 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule40Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] right
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #40: sub_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
    // Label 133: @2029
    GIM_Try, /*On fail goto*//*Label 134*/ GIMT_Encode4(2052), // Rule ID 103 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 134: @2052
    GIM_Try, /*On fail goto*//*Label 135*/ GIMT_Encode4(2073), // Rule ID 15 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] op1
      // No operand predicates
      // MIs[0] c
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #15: sub_to_add
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 135: @2073
    GIM_Reject,
    // Label 3: @2074
    GIM_Try, /*On fail goto*//*Label 136*/ GIMT_Encode4(2085), // Rule ID 77 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: undef_to_int_zero; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
    // Label 136: @2085
    GIM_Try, /*On fail goto*//*Label 137*/ GIMT_Encode4(2096), // Rule ID 234 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 137: @2096
    GIM_Try, /*On fail goto*//*Label 138*/ GIMT_Encode4(2107), // Rule ID 307 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 138: @2107
    GIM_Try, /*On fail goto*//*Label 139*/ GIMT_Encode4(2147), // Rule ID 17 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
      // MIs[0] dst
      GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/uint8_t(-1),
      // MIs[0] x
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, uint8_t(-1),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
      // Combiner Rule #17: mul_by_neg_one
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
      GIR_RootToRootCopy, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 139: @2147
    GIM_Try, /*On fail goto*//*Label 140*/ GIMT_Encode4(2182), // Rule ID 40 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] left
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] scale
      // No operand predicates
      // MIs[0] x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #38: mul_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
    // Label 140: @2182
    GIM_Try, /*On fail goto*//*Label 141*/ GIMT_Encode4(2205), // Rule ID 122 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] zero
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
      // Combiner Rule #86: binop_right_to_zero
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
      GIR_EraseRootFromParent_Done,
    // Label 141: @2205
    GIM_Try, /*On fail goto*//*Label 142*/ GIMT_Encode4(2228), // Rule ID 127 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule91Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #91: right_identity_one_int
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 142: @2228
    GIM_Try, /*On fail goto*//*Label 143*/ GIMT_Encode4(2239), // Rule ID 14 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] op1
      // No operand predicates
      // MIs[0] op2
      // No operand predicates
      // Combiner Rule #14: mul_to_shl
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 143: @2239
    GIM_Reject,
    // Label 4: @2240
    GIM_Try, /*On fail goto*//*Label 144*/ GIMT_Encode4(2251), // Rule ID 118 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 144: @2251
    GIM_Try, /*On fail goto*//*Label 145*/ GIMT_Encode4(2262), // Rule ID 209 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
      // Combiner Rule #151: div_rem_to_divrem; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
    // Label 145: @2262
    GIM_Try, /*On fail goto*//*Label 146*/ GIMT_Encode4(2273), // Rule ID 240 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 146: @2273
    GIM_Try, /*On fail goto*//*Label 147*/ GIMT_Encode4(2284), // Rule ID 258 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule170Enabled),
      // Combiner Rule #170: sdiv_by_const; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner136),
    // Label 147: @2284
    GIM_Try, /*On fail goto*//*Label 148*/ GIMT_Encode4(2295), // Rule ID 283 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 148: @2295
    GIM_Try, /*On fail goto*//*Label 149*/ GIMT_Encode4(2312), // Rule ID 259 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule171Enabled),
      GIM_MIFlagsNot, /*MI*/0, GIMT_Encode4(MachineInstr::IsExact),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // Combiner Rule #171: sdiv_by_pow2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner137),
    // Label 149: @2312
    GIM_Reject,
    // Label 5: @2313
    GIM_Try, /*On fail goto*//*Label 150*/ GIMT_Encode4(2324), // Rule ID 80 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
      // Combiner Rule #73: binop_left_undef_to_zero; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 150: @2324
    GIM_Try, /*On fail goto*//*Label 151*/ GIMT_Encode4(2335), // Rule ID 119 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 151: @2335
    GIM_Try, /*On fail goto*//*Label 152*/ GIMT_Encode4(2346), // Rule ID 210 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
      // Combiner Rule #151: div_rem_to_divrem; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
    // Label 152: @2346
    GIM_Try, /*On fail goto*//*Label 153*/ GIMT_Encode4(2357), // Rule ID 239 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 153: @2357
    GIM_Try, /*On fail goto*//*Label 154*/ GIMT_Encode4(2368), // Rule ID 257 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule169Enabled),
      // Combiner Rule #169: udiv_by_const; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner135),
    // Label 154: @2368
    GIM_Try, /*On fail goto*//*Label 155*/ GIMT_Encode4(2379), // Rule ID 285 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 155: @2379
    GIM_Try, /*On fail goto*//*Label 156*/ GIMT_Encode4(2396), // Rule ID 260 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule172Enabled),
      GIM_MIFlagsNot, /*MI*/0, GIMT_Encode4(MachineInstr::IsExact),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // Combiner Rule #172: udiv_by_pow2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner138),
    // Label 156: @2396
    GIM_Reject,
    // Label 6: @2397
    GIM_Try, /*On fail goto*//*Label 157*/ GIMT_Encode4(2408), // Rule ID 120 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 157: @2408
    GIM_Try, /*On fail goto*//*Label 158*/ GIMT_Encode4(2419), // Rule ID 211 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
      // Combiner Rule #151: div_rem_to_divrem; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
    // Label 158: @2419
    GIM_Try, /*On fail goto*//*Label 159*/ GIMT_Encode4(2430), // Rule ID 242 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 159: @2430
    GIM_Try, /*On fail goto*//*Label 160*/ GIMT_Encode4(2441), // Rule ID 284 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 160: @2441
    GIM_Reject,
    // Label 7: @2442
    GIM_Try, /*On fail goto*//*Label 161*/ GIMT_Encode4(2453), // Rule ID 81 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
      // Combiner Rule #73: binop_left_undef_to_zero; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 161: @2453
    GIM_Try, /*On fail goto*//*Label 162*/ GIMT_Encode4(2464), // Rule ID 121 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 162: @2464
    GIM_Try, /*On fail goto*//*Label 163*/ GIMT_Encode4(2475), // Rule ID 168 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule126Enabled),
      // Combiner Rule #126: urem_pow2_to_mask; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner97),
    // Label 163: @2475
    GIM_Try, /*On fail goto*//*Label 164*/ GIMT_Encode4(2486), // Rule ID 212 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule151Enabled),
      // Combiner Rule #151: div_rem_to_divrem; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner122),
    // Label 164: @2486
    GIM_Try, /*On fail goto*//*Label 165*/ GIMT_Encode4(2497), // Rule ID 241 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 165: @2497
    GIM_Try, /*On fail goto*//*Label 166*/ GIMT_Encode4(2508), // Rule ID 286 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 166: @2508
    GIM_Reject,
    // Label 8: @2509
    GIM_Try, /*On fail goto*//*Label 167*/ GIMT_Encode4(2520), // Rule ID 72 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
      // Combiner Rule #68: load_and_mask; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
    // Label 167: @2520
    GIM_Try, /*On fail goto*//*Label 168*/ GIMT_Encode4(2531), // Rule ID 76 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: undef_to_int_zero; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
    // Label 168: @2531
    GIM_Try, /*On fail goto*//*Label 169*/ GIMT_Encode4(2542), // Rule ID 141 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule103Enabled),
      // Combiner Rule #103: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
    // Label 169: @2542
    GIM_Try, /*On fail goto*//*Label 170*/ GIMT_Encode4(2553), // Rule ID 160 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule118Enabled),
      // Combiner Rule #118: narrow_binop_feeding_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner90),
    // Label 170: @2553
    GIM_Try, /*On fail goto*//*Label 171*/ GIMT_Encode4(2564), // Rule ID 165 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule123Enabled),
      // Combiner Rule #123: redundant_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner94),
    // Label 171: @2564
    GIM_Try, /*On fail goto*//*Label 172*/ GIMT_Encode4(2575), // Rule ID 182 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule140Enabled),
      // Combiner Rule #140: overlapping_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner111),
    // Label 172: @2575
    GIM_Try, /*On fail goto*//*Label 173*/ GIMT_Encode4(2586), // Rule ID 231 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 173: @2586
    GIM_Try, /*On fail goto*//*Label 174*/ GIMT_Encode4(2597), // Rule ID 268 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule175Enabled),
      // Combiner Rule #175: and_or_disjoint_mask; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner141),
    // Label 174: @2597
    GIM_Try, /*On fail goto*//*Label 175*/ GIMT_Encode4(2608), // Rule ID 280 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 175: @2608
    GIM_Try, /*On fail goto*//*Label 176*/ GIMT_Encode4(2619), // Rule ID 308 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 176: @2619
    GIM_Try, /*On fail goto*//*Label 177*/ GIMT_Encode4(2630), // Rule ID 335 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule190Enabled),
      // Combiner Rule #190: match_ands; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner156),
    // Label 177: @2630
    GIM_Try, /*On fail goto*//*Label 178*/ GIMT_Encode4(2728), // Rule ID 154 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule112Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] d1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] p
      // No operand predicates
      // MIs[1] s1
      GIM_RecordRegType, /*MI*/1, /*Op*/2, /*TempTypeIdx*/uint8_t(-1),
      // MIs[1] Operand 3
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/3, 0,
      // MIs[0] d2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[2] p
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
      // MIs[2] s2
      // No operand predicates
      // MIs[2] Operand 3
      GIM_CheckConstantInt8, /*MI*/2, /*Op*/3, 0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner5),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      // Combiner Rule #112: double_icmp_zero_and_combine
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(RegState::Define),
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // s1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // s2
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ICMP),
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // p
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/1,
      GIR_EraseRootFromParent_Done,
    // Label 178: @2728
    GIM_Try, /*On fail goto*//*Label 179*/ GIMT_Encode4(2765), // Rule ID 224 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule161Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] shift
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
      // MIs[1] x
      // No operand predicates
      // MIs[1] lsb
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[0] mask
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #161: bitfield_extract_from_and
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner128),
    // Label 179: @2765
    GIM_Try, /*On fail goto*//*Label 180*/ GIMT_Encode4(2789), // Rule ID 113 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #84: binop_same_val @ [__binop_same_val_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 180: @2789
    GIM_Reject,
    // Label 9: @2790
    GIM_Try, /*On fail goto*//*Label 181*/ GIMT_Encode4(2801), // Rule ID 78 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
      // Combiner Rule #72: undef_to_negative_one; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
    // Label 181: @2801
    GIM_Try, /*On fail goto*//*Label 182*/ GIMT_Encode4(2812), // Rule ID 142 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule103Enabled),
      // Combiner Rule #103: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
    // Label 182: @2812
    GIM_Try, /*On fail goto*//*Label 183*/ GIMT_Encode4(2823), // Rule ID 167 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule125Enabled),
      // Combiner Rule #125: redundant_or; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner96),
    // Label 183: @2823
    GIM_Try, /*On fail goto*//*Label 184*/ GIMT_Encode4(2834), // Rule ID 208 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule150Enabled),
      // Combiner Rule #150: load_or_combine; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner121),
    // Label 184: @2834
    GIM_Try, /*On fail goto*//*Label 185*/ GIMT_Encode4(2845), // Rule ID 213 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule152Enabled),
      // Combiner Rule #152: funnel_shift_from_or_shift; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner123),
    // Label 185: @2845
    GIM_Try, /*On fail goto*//*Label 186*/ GIMT_Encode4(2856), // Rule ID 235 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 186: @2856
    GIM_Try, /*On fail goto*//*Label 187*/ GIMT_Encode4(2867), // Rule ID 281 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 187: @2867
    GIM_Try, /*On fail goto*//*Label 188*/ GIMT_Encode4(2878), // Rule ID 309 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 188: @2878
    GIM_Try, /*On fail goto*//*Label 189*/ GIMT_Encode4(2889), // Rule ID 336 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule191Enabled),
      // Combiner Rule #191: match_ors; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner157),
    // Label 189: @2889
    GIM_Try, /*On fail goto*//*Label 190*/ GIMT_Encode4(2987), // Rule ID 155 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule113Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] d1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] p
      // No operand predicates
      // MIs[1] s1
      GIM_RecordRegType, /*MI*/1, /*Op*/2, /*TempTypeIdx*/uint8_t(-1),
      // MIs[1] Operand 3
      GIM_CheckConstantInt8, /*MI*/1, /*Op*/3, 0,
      // MIs[0] d2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[2] p
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/2, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
      // MIs[2] s2
      // No operand predicates
      // MIs[2] Operand 3
      GIM_CheckConstantInt8, /*MI*/2, /*Op*/3, 0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner6),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/1, /*Val*/GIMT_Encode8(0),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      // Combiner Rule #113: double_icmp_zero_or_combine
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_OR),
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/GIMT_Encode2(RegState::Define),
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // s1
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // s2
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/GIMT_Encode2(TargetOpcode::G_ICMP),
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/0, // root
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // p
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/0,
      GIR_AddSimpleTempRegister, /*InsnID*/1, /*TempRegID*/1,
      GIR_EraseRootFromParent_Done,
    // Label 190: @2987
    GIM_Try, /*On fail goto*//*Label 191*/ GIMT_Encode4(3011), // Rule ID 114 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #84: binop_same_val @ [__binop_same_val_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 191: @3011
    GIM_Try, /*On fail goto*//*Label 192*/ GIMT_Encode4(3034), // Rule ID 105 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[2]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 192: @3034
    GIM_Reject,
    // Label 10: @3035
    GIM_Try, /*On fail goto*//*Label 193*/ GIMT_Encode4(3046), // Rule ID 95 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // Combiner Rule #77: propagate_undef_any_op; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
    // Label 193: @3046
    GIM_Try, /*On fail goto*//*Label 194*/ GIMT_Encode4(3057), // Rule ID 143 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule103Enabled),
      // Combiner Rule #103: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner77),
    // Label 194: @3057
    GIM_Try, /*On fail goto*//*Label 195*/ GIMT_Encode4(3068), // Rule ID 172 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule130Enabled),
      // Combiner Rule #130: not_cmp_fold; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner101),
    // Label 195: @3068
    GIM_Try, /*On fail goto*//*Label 196*/ GIMT_Encode4(3079), // Rule ID 196 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule146Enabled),
      // Combiner Rule #146: xor_of_and_with_same_reg; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner117),
    // Label 196: @3079
    GIM_Try, /*On fail goto*//*Label 197*/ GIMT_Encode4(3090), // Rule ID 238 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 197: @3090
    GIM_Try, /*On fail goto*//*Label 198*/ GIMT_Encode4(3101), // Rule ID 282 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 198: @3101
    GIM_Try, /*On fail goto*//*Label 199*/ GIMT_Encode4(3112), // Rule ID 310 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 199: @3112
    GIM_Try, /*On fail goto*//*Label 200*/ GIMT_Encode4(3135), // Rule ID 106 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[3]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 200: @3135
    GIM_Reject,
    // Label 11: @3136
    GIM_Try, /*On fail goto*//*Label 201*/ GIMT_Encode4(3147), // Rule ID 139 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule101Enabled),
      // Combiner Rule #101: extend_through_phis; wip_match_opcode 'G_PHI'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner75),
    // Label 201: @3147
    GIM_Reject,
    // Label 12: @3148
    GIM_Try, /*On fail goto*//*Label 202*/ GIMT_Encode4(3159), // Rule ID 361 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule214Enabled),
      // Combiner Rule #214: fold_global_offset; wip_match_opcode 'G_GLOBAL_VALUE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner180),
    // Label 202: @3159
    GIM_Reject,
    // Label 13: @3160
    GIM_Try, /*On fail goto*//*Label 203*/ GIMT_Encode4(3171), // Rule ID 346 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule201Enabled),
      // Combiner Rule #201: unmerge_anyext_build_vector; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner167),
    // Label 203: @3171
    GIM_Try, /*On fail goto*//*Label 204*/ GIMT_Encode4(3182), // Rule ID 347 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule202Enabled),
      // Combiner Rule #202: unmerge_merge; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner168),
    // Label 204: @3182
    GIM_Try, /*On fail goto*//*Label 205*/ GIMT_Encode4(3193), // Rule ID 349 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule204Enabled),
      // Combiner Rule #204: unmerge_cst; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner170),
    // Label 205: @3193
    GIM_Try, /*On fail goto*//*Label 206*/ GIMT_Encode4(3204), // Rule ID 350 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule205Enabled),
      // Combiner Rule #205: unmerge_undef; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner171),
    // Label 206: @3204
    GIM_Try, /*On fail goto*//*Label 207*/ GIMT_Encode4(3215), // Rule ID 351 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule206Enabled),
      // Combiner Rule #206: unmerge_dead_to_trunc; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner172),
    // Label 207: @3215
    GIM_Try, /*On fail goto*//*Label 208*/ GIMT_Encode4(3226), // Rule ID 352 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule207Enabled),
      // Combiner Rule #207: unmerge_zext_to_zext; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner173),
    // Label 208: @3226
    GIM_Reject,
    // Label 14: @3227
    GIM_Try, /*On fail goto*//*Label 209*/ GIMT_Encode4(3238), // Rule ID 348 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule203Enabled),
      // Combiner Rule #203: merge_unmerge; wip_match_opcode 'G_MERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner169),
    // Label 209: @3238
    GIM_Try, /*On fail goto*//*Label 210*/ GIMT_Encode4(3300),
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 211*/ GIMT_Encode4(3267), // Rule ID 353 //
        GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule208Enabled),
        // MIs[0] root
        // No operand predicates
        // MIs[0] x
        // No operand predicates
        // MIs[0] undef
        GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
        GIM_CheckIsSafeToFold, /*NumInsns*/1,
        // Combiner Rule #208: merge_of_x_and_undef
        GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner174),
      // Label 211: @3267
      GIM_Try, /*On fail goto*//*Label 212*/ GIMT_Encode4(3299), // Rule ID 354 //
        GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule209Enabled),
        // MIs[0] root
        // No operand predicates
        // MIs[0] x
        // No operand predicates
        // MIs[0] zero
        GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
        // MIs[1] Operand 1
        GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
        GIM_CheckIsSafeToFold, /*NumInsns*/1,
        // Combiner Rule #209: merge_of_x_and_zero
        GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner175),
      // Label 212: @3299
      GIM_Reject,
    // Label 210: @3300
    GIM_Reject,
    // Label 15: @3301
    GIM_Try, /*On fail goto*//*Label 213*/ GIMT_Encode4(3312), // Rule ID 68 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule66Enabled),
      // Combiner Rule #66: extract_all_elts_from_build_vector; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner49),
    // Label 213: @3312
    GIM_Try, /*On fail goto*//*Label 214*/ GIMT_Encode4(3323), // Rule ID 97 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
      // Combiner Rule #78: propagate_undef_all_ops; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
    // Label 214: @3323
    GIM_Try, /*On fail goto*//*Label 215*/ GIMT_Encode4(3334), // Rule ID 132 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule94Enabled),
      // Combiner Rule #94: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
    // Label 215: @3334
    GIM_Try, /*On fail goto*//*Label 216*/ GIMT_Encode4(3348), // Rule ID 345 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule200Enabled),
      GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
      // MIs[0] dst
      // No operand predicates
      // MIs[0] unused
      // No operand predicates
      // Combiner Rule #200: combine_use_vector_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner166),
    // Label 216: @3348
    GIM_Reject,
    // Label 16: @3349
    GIM_Try, /*On fail goto*//*Label 217*/ GIMT_Encode4(3360), // Rule ID 131 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule94Enabled),
      // Combiner Rule #94: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
    // Label 217: @3360
    GIM_Reject,
    // Label 17: @3361
    GIM_Try, /*On fail goto*//*Label 218*/ GIMT_Encode4(3372), // Rule ID 338 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule193Enabled),
      // Combiner Rule #193: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner159),
    // Label 218: @3372
    GIM_Reject,
    // Label 18: @3373
    GIM_Try, /*On fail goto*//*Label 219*/ GIMT_Encode4(3394), // Rule ID 124 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule88Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] t
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
      // MIs[1] ptr
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #88: i2p_to_p2i
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner68),
    // Label 219: @3394
    GIM_Try, /*On fail goto*//*Label 220*/ GIMT_Encode4(3415), // Rule ID 89 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[3]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 220: @3415
    GIM_Reject,
    // Label 19: @3416
    GIM_Try, /*On fail goto*//*Label 221*/ GIMT_Encode4(3427), // Rule ID 123 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 221: @3427
    GIM_Try, /*On fail goto*//*Label 222*/ GIMT_Encode4(3448), // Rule ID 90 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[4]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 222: @3448
    GIM_Reject,
    // Label 20: @3449
    GIM_Try, /*On fail goto*//*Label 223*/ GIMT_Encode4(3470), // Rule ID 135 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule97Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
      // MIs[1] src0
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #97: bitcast_bitcast_fold
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner73),
    // Label 223: @3470
    GIM_Try, /*On fail goto*//*Label 224*/ GIMT_Encode4(3491), // Rule ID 87 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[1]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 224: @3491
    GIM_Reject,
    // Label 21: @3492
    GIM_Try, /*On fail goto*//*Label 225*/ GIMT_Encode4(3521), // Rule ID 18 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FREEZE),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #18: idempotent_prop @ [__idempotent_prop_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 225: @3521
    GIM_Try, /*On fail goto*//*Label 226*/ GIMT_Encode4(3544), // Rule ID 43 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #41: freeze_of_non_undef_non_poison
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 226: @3544
    GIM_Try, /*On fail goto*//*Label 227*/ GIMT_Encode4(3555), // Rule ID 44 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // Combiner Rule #42: push_freeze_to_prevent_poison_from_propagating
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 227: @3555
    GIM_Reject,
    // Label 22: @3556
    GIM_Try, /*On fail goto*//*Label 228*/ GIMT_Encode4(3567), // Rule ID 69 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
      // Combiner Rule #67: extending_loads; wip_match_opcode 'G_LOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
    // Label 228: @3567
    GIM_Reject,
    // Label 23: @3568
    GIM_Try, /*On fail goto*//*Label 229*/ GIMT_Encode4(3579), // Rule ID 70 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
      // Combiner Rule #67: extending_loads; wip_match_opcode 'G_SEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
    // Label 229: @3579
    GIM_Reject,
    // Label 24: @3580
    GIM_Try, /*On fail goto*//*Label 230*/ GIMT_Encode4(3591), // Rule ID 71 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
      // Combiner Rule #67: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
    // Label 230: @3591
    GIM_Reject,
    // Label 25: @3592
    GIM_Try, /*On fail goto*//*Label 231*/ GIMT_Encode4(3603), // Rule ID 99 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
      // Combiner Rule #80: erase_undef_store; wip_match_opcode 'G_STORE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner63),
    // Label 231: @3603
    GIM_Reject,
    // Label 26: @3604
    GIM_Try, /*On fail goto*//*Label 232*/ GIMT_Encode4(3615), // Rule ID 125 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
      // Combiner Rule #89: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner69),
    // Label 232: @3615
    GIM_Try, /*On fail goto*//*Label 233*/ GIMT_Encode4(3626), // Rule ID 255 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule167Enabled),
      // Combiner Rule #167: constant_fold_cast_op; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner134),
    // Label 233: @3626
    GIM_Try, /*On fail goto*//*Label 234*/ GIMT_Encode4(3647), // Rule ID 56 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] select
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SELECT),
      // MIs[1] cond
      // No operand predicates
      // MIs[1] true
      // No operand predicates
      // MIs[1] false
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #54: select_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
    // Label 234: @3647
    GIM_Try, /*On fail goto*//*Label 235*/ GIMT_Encode4(3668), // Rule ID 52 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #50: anyext_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
    // Label 235: @3668
    GIM_Try, /*On fail goto*//*Label 236*/ GIMT_Encode4(3689), // Rule ID 54 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #52: anyext_of_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner35),
    // Label 236: @3689
    GIM_Try, /*On fail goto*//*Label 237*/ GIMT_Encode4(3710), // Rule ID 53 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #51: anyext_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
    // Label 237: @3710
    GIM_Try, /*On fail goto*//*Label 238*/ GIMT_Encode4(3731), // Rule ID 88 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[2]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 238: @3731
    GIM_Reject,
    // Label 27: @3732
    GIM_Try, /*On fail goto*//*Label 239*/ GIMT_Encode4(3743), // Rule ID 133 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule95Enabled),
      // Combiner Rule #95: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner71),
    // Label 239: @3743
    GIM_Try, /*On fail goto*//*Label 240*/ GIMT_Encode4(3754), // Rule ID 134 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule96Enabled),
      // Combiner Rule #96: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner72),
    // Label 240: @3754
    GIM_Try, /*On fail goto*//*Label 241*/ GIMT_Encode4(3765), // Rule ID 171 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule129Enabled),
      // Combiner Rule #129: trunc_shift; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner100),
    // Label 241: @3765
    GIM_Try, /*On fail goto*//*Label 242*/ GIMT_Encode4(3786), // Rule ID 57 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule55Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] select
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SELECT),
      // MIs[1] cond
      // No operand predicates
      // MIs[1] true
      // No operand predicates
      // MIs[1] false
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #55: select_of_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 242: @3786
    GIM_Try, /*On fail goto*//*Label 243*/ GIMT_Encode4(3815), // Rule ID 59 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] binop
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ADD),
      // MIs[1] x
      // No operand predicates
      // MIs[1] const
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #57: narrow_binop_add
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner40),
    // Label 243: @3815
    GIM_Try, /*On fail goto*//*Label 244*/ GIMT_Encode4(3844), // Rule ID 62 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] binop
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_AND),
      // MIs[1] x
      // No operand predicates
      // MIs[1] const
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #60: narrow_binop_and
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
    // Label 244: @3844
    GIM_Try, /*On fail goto*//*Label 245*/ GIMT_Encode4(3873), // Rule ID 61 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] binop
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_MUL),
      // MIs[1] x
      // No operand predicates
      // MIs[1] const
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #59: narrow_binop_mul
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
    // Label 245: @3873
    GIM_Try, /*On fail goto*//*Label 246*/ GIMT_Encode4(3902), // Rule ID 63 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] binop
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_OR),
      // MIs[1] x
      // No operand predicates
      // MIs[1] const
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #61: narrow_binop_or
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner44),
    // Label 246: @3902
    GIM_Try, /*On fail goto*//*Label 247*/ GIMT_Encode4(3931), // Rule ID 60 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule58Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] binop
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] x
      // No operand predicates
      // MIs[1] const
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #58: narrow_binop_sub
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 247: @3931
    GIM_Try, /*On fail goto*//*Label 248*/ GIMT_Encode4(3960), // Rule ID 64 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] binop
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_XOR),
      // MIs[1] x
      // No operand predicates
      // MIs[1] const
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #62: narrow_binop_xor
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner45),
    // Label 248: @3960
    GIM_Try, /*On fail goto*//*Label 249*/ GIMT_Encode4(3981), // Rule ID 47 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] ext
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #45: truncate_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner28),
    // Label 249: @3981
    GIM_Try, /*On fail goto*//*Label 250*/ GIMT_Encode4(4005), // Rule ID 58 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] bv
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperandsGE, /*MI*/1, /*Expected*/2,
      // MIs[1] unused
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #56: buildvector_of_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 250: @4005
    GIM_Try, /*On fail goto*//*Label 251*/ GIMT_Encode4(4026), // Rule ID 46 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] ext
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #44: truncate_of_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
    // Label 251: @4026
    GIM_Try, /*On fail goto*//*Label 252*/ GIMT_Encode4(4047), // Rule ID 45 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] ext
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #43: truncate_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
    // Label 252: @4047
    GIM_Try, /*On fail goto*//*Label 253*/ GIMT_Encode4(4068), // Rule ID 86 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[0]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 253: @4068
    GIM_Try, /*On fail goto*//*Label 254*/ GIMT_Encode4(4089), // Rule ID 65 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] int
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #63: integer_of_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner46),
    // Label 254: @4089
    GIM_Reject,
    // Label 28: @4090
    GIM_Try, /*On fail goto*//*Label 255*/ GIMT_Encode4(4101), // Rule ID 359 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule212Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // Combiner Rule #212: fconstant_to_constant
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner178),
    // Label 255: @4101
    GIM_Reject,
    // Label 29: @4102
    GIM_Try, /*On fail goto*//*Label 256*/ GIMT_Encode4(4113), // Rule ID 254 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule167Enabled),
      // Combiner Rule #167: constant_fold_cast_op; wip_match_opcode 'G_SEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner134),
    // Label 256: @4113
    GIM_Try, /*On fail goto*//*Label 257*/ GIMT_Encode4(4134), // Rule ID 51 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #49: sext_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
    // Label 257: @4134
    GIM_Try, /*On fail goto*//*Label 258*/ GIMT_Encode4(4155), // Rule ID 50 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #48: sext_of_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner31),
    // Label 258: @4155
    GIM_Try, /*On fail goto*//*Label 259*/ GIMT_Encode4(4182), // Rule ID 339 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule194Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
      GIM_MIFlags, /*MI*/1, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[1] x
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #194: sext_trunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner160),
    // Label 259: @4182
    GIM_Reject,
    // Label 30: @4183
    GIM_Try, /*On fail goto*//*Label 260*/ GIMT_Encode4(4194), // Rule ID 158 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule116Enabled),
      // Combiner Rule #116: sext_inreg_of_load; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner88),
    // Label 260: @4194
    GIM_Try, /*On fail goto*//*Label 261*/ GIMT_Encode4(4205), // Rule ID 166 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule124Enabled),
      // Combiner Rule #124: redundant_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner95),
    // Label 261: @4205
    GIM_Try, /*On fail goto*//*Label 262*/ GIMT_Encode4(4216), // Rule ID 223 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule160Enabled),
      // Combiner Rule #160: bitfield_extract_from_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner127),
    // Label 262: @4216
    GIM_Try, /*On fail goto*//*Label 263*/ GIMT_Encode4(4227), // Rule ID 170 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule128Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] imm
      // No operand predicates
      // Combiner Rule #128: sext_inreg_to_zext_inreg
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner99),
    // Label 263: @4227
    GIM_Reject,
    // Label 31: @4228
    GIM_Try, /*On fail goto*//*Label 264*/ GIMT_Encode4(4239), // Rule ID 169 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule127Enabled),
      // Combiner Rule #127: zext_trunc_fold; wip_match_opcode 'G_ZEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner98),
    // Label 264: @4239
    GIM_Try, /*On fail goto*//*Label 265*/ GIMT_Encode4(4250), // Rule ID 253 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule167Enabled),
      // Combiner Rule #167: constant_fold_cast_op; wip_match_opcode 'G_ZEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner134),
    // Label 265: @4250
    GIM_Try, /*On fail goto*//*Label 266*/ GIMT_Encode4(4271), // Rule ID 55 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] select
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SELECT),
      // MIs[1] cond
      // No operand predicates
      // MIs[1] true
      // No operand predicates
      // MIs[1] false
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #53: select_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
    // Label 266: @4271
    GIM_Try, /*On fail goto*//*Label 267*/ GIMT_Encode4(4292), // Rule ID 49 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #47: zext_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
    // Label 267: @4292
    GIM_Try, /*On fail goto*//*Label 268*/ GIMT_Encode4(4319), // Rule ID 340 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule195Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_TRUNC),
      GIM_MIFlags, /*MI*/1, GIMT_Encode4(MachineInstr::NoUWrap),
      // MIs[1] x
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #195: zext_trunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner161),
    // Label 268: @4319
    GIM_Try, /*On fail goto*//*Label 269*/ GIMT_Encode4(4340), // Rule ID 48 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #46: zext_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
    // Label 269: @4340
    GIM_Try, /*On fail goto*//*Label 270*/ GIMT_Encode4(4357), // Rule ID 341 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule196Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NonNeg),
      // MIs[0] root
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // Combiner Rule #196: nneg_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner162),
    // Label 270: @4357
    GIM_Reject,
    // Label 32: @4358
    GIM_Try, /*On fail goto*//*Label 271*/ GIMT_Encode4(4369), // Rule ID 79 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
      // Combiner Rule #73: binop_left_undef_to_zero; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 271: @4369
    GIM_Try, /*On fail goto*//*Label 272*/ GIMT_Encode4(4380), // Rule ID 82 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // Combiner Rule #74: binop_right_undef_to_undef; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 272: @4380
    GIM_Try, /*On fail goto*//*Label 273*/ GIMT_Encode4(4391), // Rule ID 115 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 273: @4391
    GIM_Try, /*On fail goto*//*Label 274*/ GIMT_Encode4(4402), // Rule ID 198 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
      // Combiner Rule #148: shift_immed_chain; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 274: @4402
    GIM_Try, /*On fail goto*//*Label 275*/ GIMT_Encode4(4413), // Rule ID 203 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
      // Combiner Rule #149: shift_of_shifted_logic_chain; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 275: @4413
    GIM_Try, /*On fail goto*//*Label 276*/ GIMT_Encode4(4424), // Rule ID 222 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule159Enabled),
      // Combiner Rule #159: commute_shift; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner126),
    // Label 276: @4424
    GIM_Try, /*On fail goto*//*Label 277*/ GIMT_Encode4(4435), // Rule ID 236 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 277: @4435
    GIM_Try, /*On fail goto*//*Label 278*/ GIMT_Encode4(4446), // Rule ID 289 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 278: @4446
    GIM_Try, /*On fail goto*//*Label 279*/ GIMT_Encode4(4481), // Rule ID 41 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule39Enabled),
      GIM_MIFlags, /*MI*/0, GIMT_Encode4(MachineInstr::NoSWrap),
      // MIs[0] root
      // No operand predicates
      // MIs[0] left
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_VSCALE),
      // MIs[1] imm
      // No operand predicates
      // MIs[0] x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #39: shl_of_vscale
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 279: @4481
    GIM_Try, /*On fail goto*//*Label 280*/ GIMT_Encode4(4504), // Rule ID 107 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[4]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 280: @4504
    GIM_Try, /*On fail goto*//*Label 281*/ GIMT_Encode4(4515), // Rule ID 144 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule104Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] mi.shifted
      // No operand predicates
      // MIs[0] mi.amt
      // No operand predicates
      // Combiner Rule #104: shifts_too_big @ [mi[0]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 281: @4515
    GIM_Try, /*On fail goto*//*Label 282*/ GIMT_Encode4(4526), // Rule ID 159 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule117Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // Combiner Rule #117: reduce_shl_of_extend
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner89),
    // Label 282: @4526
    GIM_Reject,
    // Label 33: @4527
    GIM_Try, /*On fail goto*//*Label 283*/ GIMT_Encode4(4538), // Rule ID 84 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // Combiner Rule #74: binop_right_undef_to_undef; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 283: @4538
    GIM_Try, /*On fail goto*//*Label 284*/ GIMT_Encode4(4549), // Rule ID 116 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 284: @4549
    GIM_Try, /*On fail goto*//*Label 285*/ GIMT_Encode4(4560), // Rule ID 200 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
      // Combiner Rule #148: shift_immed_chain; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 285: @4560
    GIM_Try, /*On fail goto*//*Label 286*/ GIMT_Encode4(4571), // Rule ID 205 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
      // Combiner Rule #149: shift_of_shifted_logic_chain; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 286: @4571
    GIM_Try, /*On fail goto*//*Label 287*/ GIMT_Encode4(4582), // Rule ID 226 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: bitfield_extract_from_shr; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
    // Label 287: @4582
    GIM_Try, /*On fail goto*//*Label 288*/ GIMT_Encode4(4593), // Rule ID 228 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule163Enabled),
      // Combiner Rule #163: bitfield_extract_from_shr_and; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
    // Label 288: @4593
    GIM_Try, /*On fail goto*//*Label 289*/ GIMT_Encode4(4604), // Rule ID 233 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 289: @4604
    GIM_Try, /*On fail goto*//*Label 290*/ GIMT_Encode4(4615), // Rule ID 287 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 290: @4615
    GIM_Try, /*On fail goto*//*Label 291*/ GIMT_Encode4(4638), // Rule ID 109 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[6]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 291: @4638
    GIM_Try, /*On fail goto*//*Label 292*/ GIMT_Encode4(4649), // Rule ID 146 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule104Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] mi.shifted
      // No operand predicates
      // MIs[0] mi.amt
      // No operand predicates
      // Combiner Rule #104: shifts_too_big @ [mi[2]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 292: @4649
    GIM_Reject,
    // Label 34: @4650
    GIM_Try, /*On fail goto*//*Label 293*/ GIMT_Encode4(4661), // Rule ID 83 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // Combiner Rule #74: binop_right_undef_to_undef; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 293: @4661
    GIM_Try, /*On fail goto*//*Label 294*/ GIMT_Encode4(4672), // Rule ID 117 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: binop_left_to_zero; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 294: @4672
    GIM_Try, /*On fail goto*//*Label 295*/ GIMT_Encode4(4683), // Rule ID 157 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule115Enabled),
      // Combiner Rule #115: shl_ashr_to_sext_inreg; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner87),
    // Label 295: @4683
    GIM_Try, /*On fail goto*//*Label 296*/ GIMT_Encode4(4694), // Rule ID 199 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
      // Combiner Rule #148: shift_immed_chain; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 296: @4694
    GIM_Try, /*On fail goto*//*Label 297*/ GIMT_Encode4(4705), // Rule ID 204 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
      // Combiner Rule #149: shift_of_shifted_logic_chain; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 297: @4705
    GIM_Try, /*On fail goto*//*Label 298*/ GIMT_Encode4(4716), // Rule ID 225 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule162Enabled),
      // Combiner Rule #162: bitfield_extract_from_shr; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner129),
    // Label 298: @4716
    GIM_Try, /*On fail goto*//*Label 299*/ GIMT_Encode4(4727), // Rule ID 227 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule163Enabled),
      // Combiner Rule #163: bitfield_extract_from_shr_and; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner130),
    // Label 299: @4727
    GIM_Try, /*On fail goto*//*Label 300*/ GIMT_Encode4(4738), // Rule ID 232 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 300: @4738
    GIM_Try, /*On fail goto*//*Label 301*/ GIMT_Encode4(4749), // Rule ID 288 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 301: @4749
    GIM_Try, /*On fail goto*//*Label 302*/ GIMT_Encode4(4772), // Rule ID 108 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[5]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 302: @4772
    GIM_Try, /*On fail goto*//*Label 303*/ GIMT_Encode4(4783), // Rule ID 145 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule104Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] mi.shifted
      // No operand predicates
      // MIs[0] mi.amt
      // No operand predicates
      // Combiner Rule #104: shifts_too_big @ [mi[1]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner78),
    // Label 303: @4783
    GIM_Reject,
    // Label 35: @4784
    GIM_Try, /*On fail goto*//*Label 304*/ GIMT_Encode4(4795), // Rule ID 214 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
      // Combiner Rule #153: funnel_shift_to_rotate; wip_match_opcode 'G_FSHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner124),
    // Label 304: @4795
    GIM_Try, /*On fail goto*//*Label 305*/ GIMT_Encode4(4806), // Rule ID 218 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule156Enabled),
      // Combiner Rule #156: funnel_shift_overshift; wip_match_opcode 'G_FSHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner125),
    // Label 305: @4806
    GIM_Try, /*On fail goto*//*Label 306*/ GIMT_Encode4(4826), // Rule ID 217 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule155Enabled),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // MIs[0] z
      // No operand predicates
      // MIs[0] Operand 3
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
      // Combiner Rule #155: funnel_shift_left_zero
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
      GIR_RootToRootCopy, /*OpIdx*/0, // x
      GIR_RootToRootCopy, /*OpIdx*/1, // y
      GIR_EraseRootFromParent_Done,
    // Label 306: @4826
    GIM_Reject,
    // Label 36: @4827
    GIM_Try, /*On fail goto*//*Label 307*/ GIMT_Encode4(4838), // Rule ID 215 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule153Enabled),
      // Combiner Rule #153: funnel_shift_to_rotate; wip_match_opcode 'G_FSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner124),
    // Label 307: @4838
    GIM_Try, /*On fail goto*//*Label 308*/ GIMT_Encode4(4849), // Rule ID 219 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule156Enabled),
      // Combiner Rule #156: funnel_shift_overshift; wip_match_opcode 'G_FSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner125),
    // Label 308: @4849
    GIM_Try, /*On fail goto*//*Label 309*/ GIMT_Encode4(4869), // Rule ID 216 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule154Enabled),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      // MIs[0] z
      // No operand predicates
      // MIs[0] Operand 3
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/3, 0,
      // Combiner Rule #154: funnel_shift_right_zero
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::COPY),
      GIR_RootToRootCopy, /*OpIdx*/0, // x
      GIR_RootToRootCopy, /*OpIdx*/2, // z
      GIR_EraseRootFromParent_Done,
    // Label 309: @4869
    GIM_Reject,
    // Label 37: @4870
    GIM_Try, /*On fail goto*//*Label 310*/ GIMT_Encode4(4893), // Rule ID 112 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[9]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 310: @4893
    GIM_Reject,
    // Label 38: @4894
    GIM_Try, /*On fail goto*//*Label 311*/ GIMT_Encode4(4917), // Rule ID 111 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[8]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 311: @4917
    GIM_Reject,
    // Label 39: @4918
    GIM_Try, /*On fail goto*//*Label 312*/ GIMT_Encode4(4929), // Rule ID 152 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule110Enabled),
      // Combiner Rule #110: icmp_to_true_false_known_bits; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner84),
    // Label 312: @4929
    GIM_Try, /*On fail goto*//*Label 313*/ GIMT_Encode4(4940), // Rule ID 153 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule111Enabled),
      // Combiner Rule #111: icmp_to_lhs_known_bits; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner85),
    // Label 313: @4940
    GIM_Try, /*On fail goto*//*Label 314*/ GIMT_Encode4(4951), // Rule ID 156 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule114Enabled),
      // Combiner Rule #114: redundant_binop_in_equality; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner86),
    // Label 314: @4951
    GIM_Try, /*On fail goto*//*Label 315*/ GIMT_Encode4(4962), // Rule ID 150 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule108Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] pred
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] rhs
      // No operand predicates
      // Combiner Rule #108: canonicalize_icmp
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner82),
    // Label 315: @4962
    GIM_Try, /*On fail goto*//*Label 316*/ GIMT_Encode4(4973), // Rule ID 360 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule213Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] tst
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #213: icmp_redundant_trunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner179),
    // Label 316: @4973
    GIM_Reject,
    // Label 40: @4974
    GIM_Try, /*On fail goto*//*Label 317*/ GIMT_Encode4(4985), // Rule ID 151 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule109Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] pred
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] rhs
      // No operand predicates
      // Combiner Rule #109: canonicalize_fcmp
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner83),
    // Label 317: @4985
    GIM_Reject,
    // Label 41: @4986
    GIM_Try, /*On fail goto*//*Label 318*/ GIMT_Encode4(4997), // Rule ID 102 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
      // Combiner Rule #82: select_same_val; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner65),
    // Label 318: @4997
    GIM_Try, /*On fail goto*//*Label 319*/ GIMT_Encode4(5008), // Rule ID 162 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule120Enabled),
      // Combiner Rule #120: select_constant_cmp; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner91),
    // Label 319: @5008
    GIM_Try, /*On fail goto*//*Label 320*/ GIMT_Encode4(5019), // Rule ID 164 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule122Enabled),
      // Combiner Rule #122: match_selects; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner93),
    // Label 320: @5019
    GIM_Try, /*On fail goto*//*Label 321*/ GIMT_Encode4(5030), // Rule ID 304 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule186Enabled),
      // Combiner Rule #186: select_to_minmax; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner152),
    // Label 321: @5030
    GIM_Try, /*On fail goto*//*Label 322*/ GIMT_Encode4(5051), // Rule ID 163 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule121Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] tst
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] tst1
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #121: select_to_iminmax
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner92),
    // Label 322: @5051
    GIM_Try, /*On fail goto*//*Label 323*/ GIMT_Encode4(5080), // Rule ID 161 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule119Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] undef
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #119: select_undef_cmp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
      GIR_EraseRootFromParent_Done,
    // Label 323: @5080
    GIM_Reject,
    // Label 42: @5081
    GIM_Try, /*On fail goto*//*Label 324*/ GIMT_Encode4(5092), // Rule ID 315 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 324: @5092
    GIM_Try, /*On fail goto*//*Label 325*/ GIMT_Encode4(5103), // Rule ID 356 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule210Enabled),
      // Combiner Rule #210: match_addos; wip_match_opcode 'G_UADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner176),
    // Label 325: @5103
    GIM_Reject,
    // Label 43: @5104
    GIM_Try, /*On fail goto*//*Label 326*/ GIMT_Encode4(5115), // Rule ID 187 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule143Enabled),
      // Combiner Rule #143: adde_to_addo; wip_match_opcode 'G_UADDE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 326: @5115
    GIM_Reject,
    // Label 44: @5116
    GIM_Try, /*On fail goto*//*Label 327*/ GIMT_Encode4(5127), // Rule ID 358 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule211Enabled),
      // Combiner Rule #211: match_subo_no_overflow; wip_match_opcode 'G_USUBO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner177),
    // Label 327: @5127
    GIM_Reject,
    // Label 45: @5128
    GIM_Try, /*On fail goto*//*Label 328*/ GIMT_Encode4(5139), // Rule ID 189 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule143Enabled),
      // Combiner Rule #143: adde_to_addo; wip_match_opcode 'G_USUBE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 328: @5139
    GIM_Reject,
    // Label 46: @5140
    GIM_Try, /*On fail goto*//*Label 329*/ GIMT_Encode4(5151), // Rule ID 316 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 329: @5151
    GIM_Try, /*On fail goto*//*Label 330*/ GIMT_Encode4(5162), // Rule ID 355 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule210Enabled),
      // Combiner Rule #210: match_addos; wip_match_opcode 'G_SADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner176),
    // Label 330: @5162
    GIM_Reject,
    // Label 47: @5163
    GIM_Try, /*On fail goto*//*Label 331*/ GIMT_Encode4(5174), // Rule ID 188 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule143Enabled),
      // Combiner Rule #143: adde_to_addo; wip_match_opcode 'G_SADDE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 331: @5174
    GIM_Reject,
    // Label 48: @5175
    GIM_Try, /*On fail goto*//*Label 332*/ GIMT_Encode4(5186), // Rule ID 357 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule211Enabled),
      // Combiner Rule #211: match_subo_no_overflow; wip_match_opcode 'G_SSUBO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner177),
    // Label 332: @5186
    GIM_Reject,
    // Label 49: @5187
    GIM_Try, /*On fail goto*//*Label 333*/ GIMT_Encode4(5198), // Rule ID 190 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule143Enabled),
      // Combiner Rule #143: adde_to_addo; wip_match_opcode 'G_SSUBE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner114),
    // Label 333: @5198
    GIM_Reject,
    // Label 50: @5199
    GIM_Try, /*On fail goto*//*Label 334*/ GIMT_Encode4(5210), // Rule ID 183 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule141Enabled),
      // Combiner Rule #141: mulo_by_2; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner112),
    // Label 334: @5210
    GIM_Try, /*On fail goto*//*Label 335*/ GIMT_Encode4(5221), // Rule ID 185 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule142Enabled),
      // Combiner Rule #142: mulo_by_0; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner113),
    // Label 335: @5221
    GIM_Try, /*On fail goto*//*Label 336*/ GIMT_Encode4(5232), // Rule ID 317 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 336: @5232
    GIM_Reject,
    // Label 51: @5233
    GIM_Try, /*On fail goto*//*Label 337*/ GIMT_Encode4(5244), // Rule ID 184 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule141Enabled),
      // Combiner Rule #141: mulo_by_2; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner112),
    // Label 337: @5244
    GIM_Try, /*On fail goto*//*Label 338*/ GIMT_Encode4(5255), // Rule ID 186 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule142Enabled),
      // Combiner Rule #142: mulo_by_0; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner113),
    // Label 338: @5255
    GIM_Try, /*On fail goto*//*Label 339*/ GIMT_Encode4(5266), // Rule ID 318 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 339: @5266
    GIM_Reject,
    // Label 52: @5267
    GIM_Try, /*On fail goto*//*Label 340*/ GIMT_Encode4(5278), // Rule ID 261 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule173Enabled),
      // Combiner Rule #173: mulh_to_lshr; wip_match_opcode 'G_UMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner139),
    // Label 340: @5278
    GIM_Try, /*On fail goto*//*Label 341*/ GIMT_Encode4(5289), // Rule ID 319 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 341: @5289
    GIM_Reject,
    // Label 53: @5290
    GIM_Try, /*On fail goto*//*Label 342*/ GIMT_Encode4(5301), // Rule ID 320 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 342: @5301
    GIM_Reject,
    // Label 54: @5302
    GIM_Try, /*On fail goto*//*Label 343*/ GIMT_Encode4(5313), // Rule ID 321 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 343: @5313
    GIM_Reject,
    // Label 55: @5314
    GIM_Try, /*On fail goto*//*Label 344*/ GIMT_Encode4(5325), // Rule ID 322 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 344: @5325
    GIM_Reject,
    // Label 56: @5326
    GIM_Try, /*On fail goto*//*Label 345*/ GIMT_Encode4(5337), // Rule ID 202 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
      // Combiner Rule #148: shift_immed_chain; wip_match_opcode 'G_USHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 345: @5337
    GIM_Try, /*On fail goto*//*Label 346*/ GIMT_Encode4(5348), // Rule ID 206 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
      // Combiner Rule #149: shift_of_shifted_logic_chain; wip_match_opcode 'G_USHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 346: @5348
    GIM_Reject,
    // Label 57: @5349
    GIM_Try, /*On fail goto*//*Label 347*/ GIMT_Encode4(5360), // Rule ID 201 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule148Enabled),
      // Combiner Rule #148: shift_immed_chain; wip_match_opcode 'G_SSHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner119),
    // Label 347: @5360
    GIM_Try, /*On fail goto*//*Label 348*/ GIMT_Encode4(5371), // Rule ID 207 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule149Enabled),
      // Combiner Rule #149: shift_of_shifted_logic_chain; wip_match_opcode 'G_SSHLSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner120),
    // Label 348: @5371
    GIM_Reject,
    // Label 58: @5372
    GIM_Try, /*On fail goto*//*Label 349*/ GIMT_Encode4(5383), // Rule ID 323 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 349: @5383
    GIM_Reject,
    // Label 59: @5384
    GIM_Try, /*On fail goto*//*Label 350*/ GIMT_Encode4(5395), // Rule ID 324 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 350: @5395
    GIM_Reject,
    // Label 60: @5396
    GIM_Try, /*On fail goto*//*Label 351*/ GIMT_Encode4(5407), // Rule ID 325 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIXSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 351: @5407
    GIM_Reject,
    // Label 61: @5408
    GIM_Try, /*On fail goto*//*Label 352*/ GIMT_Encode4(5419), // Rule ID 326 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIXSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 352: @5419
    GIM_Reject,
    // Label 62: @5420
    GIM_Try, /*On fail goto*//*Label 353*/ GIMT_Encode4(5431), // Rule ID 247 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
      // Combiner Rule #165: constant_fold_fp_binop; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner132),
    // Label 353: @5431
    GIM_Try, /*On fail goto*//*Label 354*/ GIMT_Encode4(5442), // Rule ID 262 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: redundant_neg_operands; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
    // Label 354: @5442
    GIM_Try, /*On fail goto*//*Label 355*/ GIMT_Encode4(5453), // Rule ID 269 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule176Enabled),
      // Combiner Rule #176: combine_fadd_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner142),
    // Label 355: @5453
    GIM_Try, /*On fail goto*//*Label 356*/ GIMT_Encode4(5464), // Rule ID 270 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule177Enabled),
      // Combiner Rule #177: combine_fadd_fpext_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner143),
    // Label 356: @5464
    GIM_Try, /*On fail goto*//*Label 357*/ GIMT_Encode4(5475), // Rule ID 271 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule178Enabled),
      // Combiner Rule #178: combine_fadd_fma_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner144),
    // Label 357: @5475
    GIM_Try, /*On fail goto*//*Label 358*/ GIMT_Encode4(5486), // Rule ID 272 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule179Enabled),
      // Combiner Rule #179: combine_fadd_fpext_fma_fmul_to_fmad_or_fma; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner145),
    // Label 358: @5486
    GIM_Try, /*On fail goto*//*Label 359*/ GIMT_Encode4(5497), // Rule ID 295 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 359: @5497
    GIM_Try, /*On fail goto*//*Label 360*/ GIMT_Encode4(5508), // Rule ID 327 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 360: @5508
    GIM_Try, /*On fail goto*//*Label 361*/ GIMT_Encode4(5531), // Rule ID 137 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule99Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner3),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #99: right_identity_neg_zero_fp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 361: @5531
    GIM_Reject,
    // Label 63: @5532
    GIM_Try, /*On fail goto*//*Label 362*/ GIMT_Encode4(5543), // Rule ID 248 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
      // Combiner Rule #165: constant_fold_fp_binop; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner132),
    // Label 362: @5543
    GIM_Try, /*On fail goto*//*Label 363*/ GIMT_Encode4(5554), // Rule ID 263 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: redundant_neg_operands; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
    // Label 363: @5554
    GIM_Try, /*On fail goto*//*Label 364*/ GIMT_Encode4(5565), // Rule ID 273 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule180Enabled),
      // Combiner Rule #180: combine_fsub_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner146),
    // Label 364: @5565
    GIM_Try, /*On fail goto*//*Label 365*/ GIMT_Encode4(5576), // Rule ID 274 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule181Enabled),
      // Combiner Rule #181: combine_fsub_fneg_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner147),
    // Label 365: @5576
    GIM_Try, /*On fail goto*//*Label 366*/ GIMT_Encode4(5587), // Rule ID 275 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule182Enabled),
      // Combiner Rule #182: combine_fsub_fpext_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner148),
    // Label 366: @5587
    GIM_Try, /*On fail goto*//*Label 367*/ GIMT_Encode4(5598), // Rule ID 276 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule183Enabled),
      // Combiner Rule #183: combine_fsub_fpext_fneg_fmul_to_fmad_or_fma; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner149),
    // Label 367: @5598
    GIM_Try, /*On fail goto*//*Label 368*/ GIMT_Encode4(5609), // Rule ID 296 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 368: @5609
    GIM_Try, /*On fail goto*//*Label 369*/ GIMT_Encode4(5620), // Rule ID 305 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule187Enabled),
      // Combiner Rule #187: fsub_to_fneg; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner153),
    // Label 369: @5620
    GIM_Reject,
    // Label 64: @5621
    GIM_Try, /*On fail goto*//*Label 370*/ GIMT_Encode4(5632), // Rule ID 249 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
      // Combiner Rule #165: constant_fold_fp_binop; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner132),
    // Label 370: @5632
    GIM_Try, /*On fail goto*//*Label 371*/ GIMT_Encode4(5643), // Rule ID 264 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: redundant_neg_operands; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
    // Label 371: @5643
    GIM_Try, /*On fail goto*//*Label 372*/ GIMT_Encode4(5654), // Rule ID 294 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 372: @5654
    GIM_Try, /*On fail goto*//*Label 373*/ GIMT_Encode4(5665), // Rule ID 328 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 373: @5665
    GIM_Try, /*On fail goto*//*Label 374*/ GIMT_Encode4(5688), // Rule ID 128 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule92Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #92: right_identity_one_fp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 374: @5688
    GIM_Try, /*On fail goto*//*Label 375*/ GIMT_Encode4(5708), // Rule ID 138 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule100Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner4),
      // Combiner Rule #100: right_identity_neg_one_fp
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_RootToRootCopy, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 375: @5708
    GIM_Reject,
    // Label 65: @5709
    GIM_Try, /*On fail goto*//*Label 376*/ GIMT_Encode4(5720), // Rule ID 252 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule166Enabled),
      // Combiner Rule #166: constant_fold_fma; wip_match_opcode 'G_FMA'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner133),
    // Label 376: @5720
    GIM_Try, /*On fail goto*//*Label 377*/ GIMT_Encode4(5731), // Rule ID 267 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: redundant_neg_operands; wip_match_opcode 'G_FMA'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
    // Label 377: @5731
    GIM_Reject,
    // Label 66: @5732
    GIM_Try, /*On fail goto*//*Label 378*/ GIMT_Encode4(5743), // Rule ID 251 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule166Enabled),
      // Combiner Rule #166: constant_fold_fma; wip_match_opcode 'G_FMAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner133),
    // Label 378: @5743
    GIM_Try, /*On fail goto*//*Label 379*/ GIMT_Encode4(5754), // Rule ID 266 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: redundant_neg_operands; wip_match_opcode 'G_FMAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
    // Label 379: @5754
    GIM_Reject,
    // Label 67: @5755
    GIM_Try, /*On fail goto*//*Label 380*/ GIMT_Encode4(5766), // Rule ID 250 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule165Enabled),
      // Combiner Rule #165: constant_fold_fp_binop; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner132),
    // Label 380: @5766
    GIM_Try, /*On fail goto*//*Label 381*/ GIMT_Encode4(5777), // Rule ID 265 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule174Enabled),
      // Combiner Rule #174: redundant_neg_operands; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner140),
    // Label 381: @5777
    GIM_Try, /*On fail goto*//*Label 382*/ GIMT_Encode4(5788), // Rule ID 297 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 382: @5788
    GIM_Reject,
    // Label 68: @5789
    GIM_Try, /*On fail goto*//*Label 383*/ GIMT_Encode4(5800), // Rule ID 298 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 383: @5800
    GIM_Reject,
    // Label 69: @5801
    GIM_Try, /*On fail goto*//*Label 384*/ GIMT_Encode4(5822), // Rule ID 195 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule145Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] float
      // No operand predicates
      // MIs[0] int
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #145: expand_const_fpowi
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner116),
    // Label 384: @5822
    GIM_Reject,
    // Label 70: @5823
    GIM_Try, /*On fail goto*//*Label 385*/ GIMT_Encode4(5844), // Rule ID 177 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule135Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #135: constant_fold_flog2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner106),
    // Label 385: @5844
    GIM_Reject,
    // Label 71: @5845
    GIM_Try, /*On fail goto*//*Label 386*/ GIMT_Encode4(5866), // Rule ID 174 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule132Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #132: constant_fold_fneg
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner103),
    // Label 386: @5866
    GIM_Try, /*On fail goto*//*Label 387*/ GIMT_Encode4(5895), // Rule ID 126 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] t
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
      // MIs[1] src
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #90: fneg_fneg_fold
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 387: @5895
    GIM_Reject,
    // Label 72: @5896
    GIM_Try, /*On fail goto*//*Label 388*/ GIMT_Encode4(5917), // Rule ID 178 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule136Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #136: constant_fold_fptrunc
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner107),
    // Label 388: @5917
    GIM_Try, /*On fail goto*//*Label 389*/ GIMT_Encode4(5938), // Rule ID 136 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule98Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
      // MIs[1] src0
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #98: fptrunc_fpext_fold
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner74),
    // Label 389: @5938
    GIM_Reject,
    // Label 73: @5939
    GIM_Try, /*On fail goto*//*Label 390*/ GIMT_Encode4(5960), // Rule ID 91 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[5]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 390: @5960
    GIM_Reject,
    // Label 74: @5961
    GIM_Try, /*On fail goto*//*Label 391*/ GIMT_Encode4(5982), // Rule ID 92 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #76: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[6]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 391: @5982
    GIM_Reject,
    // Label 75: @5983
    GIM_Try, /*On fail goto*//*Label 392*/ GIMT_Encode4(5994), // Rule ID 75 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
      // Combiner Rule #70: undef_to_fp_zero; wip_match_opcode 'G_SITOFP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
    // Label 392: @5994
    GIM_Try, /*On fail goto*//*Label 393*/ GIMT_Encode4(6009), // Rule ID 179 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule137Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] Operand 1
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
      // Combiner Rule #137: itof_const_zero_fold_si
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner108),
    // Label 393: @6009
    GIM_Reject,
    // Label 76: @6010
    GIM_Try, /*On fail goto*//*Label 394*/ GIMT_Encode4(6021), // Rule ID 74 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
      // Combiner Rule #70: undef_to_fp_zero; wip_match_opcode 'G_UITOFP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
    // Label 394: @6021
    GIM_Try, /*On fail goto*//*Label 395*/ GIMT_Encode4(6036), // Rule ID 180 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule138Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] Operand 1
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/1, 0,
      // Combiner Rule #138: itof_const_zero_fold_ui
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner109),
    // Label 395: @6036
    GIM_Reject,
    // Label 77: @6037
    GIM_Try, /*On fail goto*//*Label 396*/ GIMT_Encode4(6066), // Rule ID 19 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FABS),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #18: idempotent_prop @ [__idempotent_prop_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 396: @6066
    GIM_Try, /*On fail goto*//*Label 397*/ GIMT_Encode4(6087), // Rule ID 175 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule133Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #133: constant_fold_fabs
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner104),
    // Label 397: @6087
    GIM_Try, /*On fail goto*//*Label 398*/ GIMT_Encode4(6115), // Rule ID 256 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule168Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
      // MIs[1] x
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #168: fabs_fneg_fold
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FABS),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 398: @6115
    GIM_Reject,
    // Label 78: @6116
    GIM_Try, /*On fail goto*//*Label 399*/ GIMT_Encode4(6145), // Rule ID 20 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCANONICALIZE),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #18: idempotent_prop @ [__idempotent_prop_match_0[2]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 399: @6145
    GIM_Reject,
    // Label 79: @6146
    GIM_Try, /*On fail goto*//*Label 400*/ GIMT_Encode4(6157), // Rule ID 191 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
      // Combiner Rule #144: combine_minmax_nan; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner115),
    // Label 400: @6157
    GIM_Try, /*On fail goto*//*Label 401*/ GIMT_Encode4(6168), // Rule ID 299 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 401: @6168
    GIM_Try, /*On fail goto*//*Label 402*/ GIMT_Encode4(6179), // Rule ID 329 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 402: @6179
    GIM_Reject,
    // Label 80: @6180
    GIM_Try, /*On fail goto*//*Label 403*/ GIMT_Encode4(6191), // Rule ID 192 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
      // Combiner Rule #144: combine_minmax_nan; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner115),
    // Label 403: @6191
    GIM_Try, /*On fail goto*//*Label 404*/ GIMT_Encode4(6202), // Rule ID 300 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 404: @6202
    GIM_Try, /*On fail goto*//*Label 405*/ GIMT_Encode4(6213), // Rule ID 330 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 405: @6213
    GIM_Reject,
    // Label 81: @6214
    GIM_Try, /*On fail goto*//*Label 406*/ GIMT_Encode4(6225), // Rule ID 331 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM_IEEE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 406: @6225
    GIM_Reject,
    // Label 82: @6226
    GIM_Try, /*On fail goto*//*Label 407*/ GIMT_Encode4(6237), // Rule ID 332 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM_IEEE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 407: @6237
    GIM_Reject,
    // Label 83: @6238
    GIM_Try, /*On fail goto*//*Label 408*/ GIMT_Encode4(6249), // Rule ID 193 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
      // Combiner Rule #144: combine_minmax_nan; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner115),
    // Label 408: @6249
    GIM_Try, /*On fail goto*//*Label 409*/ GIMT_Encode4(6260), // Rule ID 301 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 409: @6260
    GIM_Try, /*On fail goto*//*Label 410*/ GIMT_Encode4(6271), // Rule ID 333 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 410: @6271
    GIM_Reject,
    // Label 84: @6272
    GIM_Try, /*On fail goto*//*Label 411*/ GIMT_Encode4(6283), // Rule ID 194 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule144Enabled),
      // Combiner Rule #144: combine_minmax_nan; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner115),
    // Label 411: @6283
    GIM_Try, /*On fail goto*//*Label 412*/ GIMT_Encode4(6294), // Rule ID 302 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 412: @6294
    GIM_Try, /*On fail goto*//*Label 413*/ GIMT_Encode4(6305), // Rule ID 334 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule189Enabled),
      // Combiner Rule #189: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner155),
    // Label 413: @6305
    GIM_Reject,
    // Label 85: @6306
    GIM_Try, /*On fail goto*//*Label 414*/ GIMT_Encode4(6317), // Rule ID 147 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule105Enabled),
      // Combiner Rule #105: reassoc_ptradd; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner79),
    // Label 414: @6317
    GIM_Try, /*On fail goto*//*Label 415*/ GIMT_Encode4(6328), // Rule ID 149 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule107Enabled),
      // Combiner Rule #107: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner81),
    // Label 415: @6328
    GIM_Try, /*On fail goto*//*Label 416*/ GIMT_Encode4(6339), // Rule ID 181 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule139Enabled),
      // Combiner Rule #139: const_ptradd_to_i2p; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner110),
    // Label 416: @6339
    GIM_Try, /*On fail goto*//*Label 417*/ GIMT_Encode4(6350), // Rule ID 197 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule147Enabled),
      // Combiner Rule #147: ptr_add_with_zero; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner118),
    // Label 417: @6350
    GIM_Try, /*On fail goto*//*Label 418*/ GIMT_Encode4(6361), // Rule ID 230 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 418: @6361
    GIM_Try, /*On fail goto*//*Label 419*/ GIMT_Encode4(6372), // Rule ID 279 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 419: @6372
    GIM_Try, /*On fail goto*//*Label 420*/ GIMT_Encode4(6395), // Rule ID 110 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #83: right_identity_zero @ [__right_identity_zero_match_0[7]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 420: @6395
    GIM_Reject,
    // Label 86: @6396
    GIM_Try, /*On fail goto*//*Label 421*/ GIMT_Encode4(6407), // Rule ID 243 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 421: @6407
    GIM_Try, /*On fail goto*//*Label 422*/ GIMT_Encode4(6418), // Rule ID 290 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 422: @6418
    GIM_Try, /*On fail goto*//*Label 423*/ GIMT_Encode4(6429), // Rule ID 311 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 423: @6429
    GIM_Reject,
    // Label 87: @6430
    GIM_Try, /*On fail goto*//*Label 424*/ GIMT_Encode4(6441), // Rule ID 244 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 424: @6441
    GIM_Try, /*On fail goto*//*Label 425*/ GIMT_Encode4(6452), // Rule ID 291 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 425: @6452
    GIM_Try, /*On fail goto*//*Label 426*/ GIMT_Encode4(6463), // Rule ID 312 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 426: @6463
    GIM_Reject,
    // Label 88: @6464
    GIM_Try, /*On fail goto*//*Label 427*/ GIMT_Encode4(6475), // Rule ID 245 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 427: @6475
    GIM_Try, /*On fail goto*//*Label 428*/ GIMT_Encode4(6486), // Rule ID 292 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 428: @6486
    GIM_Try, /*On fail goto*//*Label 429*/ GIMT_Encode4(6497), // Rule ID 313 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 429: @6497
    GIM_Reject,
    // Label 89: @6498
    GIM_Try, /*On fail goto*//*Label 430*/ GIMT_Encode4(6509), // Rule ID 246 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule164Enabled),
      // Combiner Rule #164: constant_fold_binop; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner131),
    // Label 430: @6509
    GIM_Try, /*On fail goto*//*Label 431*/ GIMT_Encode4(6520), // Rule ID 293 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule184Enabled),
      // Combiner Rule #184: fold_binop_into_select; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner150),
    // Label 431: @6520
    GIM_Try, /*On fail goto*//*Label 432*/ GIMT_Encode4(6531), // Rule ID 314 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule188Enabled),
      // Combiner Rule #188: commute_int_constant_to_rhs; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner154),
    // Label 432: @6531
    GIM_Reject,
    // Label 90: @6532
    GIM_Try, /*On fail goto*//*Label 433*/ GIMT_Encode4(6543), // Rule ID 85 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
      // Combiner Rule #75: unary_undef_to_zero; wip_match_opcode 'G_ABS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
    // Label 433: @6543
    GIM_Reject,
    // Label 91: @6544
    GIM_Try, /*On fail goto*//*Label 434*/ GIMT_Encode4(6555), // Rule ID 173 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule131Enabled),
      // Combiner Rule #131: opt_brcond_by_inverting_cond; wip_match_opcode 'G_BR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner102),
    // Label 434: @6555
    GIM_Reject,
    // Label 92: @6556
    GIM_Try, /*On fail goto*//*Label 435*/ GIMT_Encode4(6567), // Rule ID 26 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
      // Combiner Rule #24: insert_vector_elt_oob; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
    // Label 435: @6567
    GIM_Try, /*On fail goto*//*Label 436*/ GIMT_Encode4(6578), // Rule ID 66 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule64Enabled),
      // Combiner Rule #64: combine_insert_vec_elts_build_vector; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner47),
    // Label 436: @6578
    GIM_Try, /*On fail goto*//*Label 437*/ GIMT_Encode4(6589), // Rule ID 100 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
      // Combiner Rule #81: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner64),
    // Label 437: @6589
    GIM_Try, /*On fail goto*//*Label 438*/ GIMT_Encode4(6628), // Rule ID 38 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] elt
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_EXTRACT_VECTOR_ELT),
      // MIs[1] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/1, /*OtherMI*/0, /*OtherOpIdx*/1,
      // MIs[1] idx
      // No operand predicates
      // MIs[0] idx
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/3, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #36: insert_vector_element_extract_vector_element
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 438: @6628
    GIM_Try, /*On fail goto*//*Label 439*/ GIMT_Encode4(6661), // Rule ID 24 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] elt
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] idx
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #22: insert_vector_element_elt_undef
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 439: @6661
    GIM_Try, /*On fail goto*//*Label 440*/ GIMT_Encode4(6685), // Rule ID 23 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] elt
      // No operand predicates
      // MIs[0] idx
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/3, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #21: insert_vector_element_idx_undef
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_EraseRootFromParent_Done,
    // Label 440: @6685
    GIM_Reject,
    // Label 93: @6686
    GIM_Try, /*On fail goto*//*Label 441*/ GIMT_Encode4(6697), // Rule ID 25 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
      // Combiner Rule #23: match_extract_of_element; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
    // Label 441: @6697
    GIM_Try, /*On fail goto*//*Label 442*/ GIMT_Encode4(6708), // Rule ID 67 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule65Enabled),
      // Combiner Rule #65: extract_vec_elt_build_vec; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
    // Label 442: @6708
    GIM_Try, /*On fail goto*//*Label 443*/ GIMT_Encode4(6719), // Rule ID 73 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // Combiner Rule #69: combine_extracted_vector_load; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner52),
    // Label 443: @6719
    GIM_Try, /*On fail goto*//*Label 444*/ GIMT_Encode4(6730), // Rule ID 101 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
      // Combiner Rule #81: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner64),
    // Label 444: @6730
    GIM_Try, /*On fail goto*//*Label 445*/ GIMT_Encode4(6754), // Rule ID 36 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/9,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[1] e
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #34: extract_vector_element_build_vector_trunc8
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
    // Label 445: @6754
    GIM_Try, /*On fail goto*//*Label 446*/ GIMT_Encode4(6778), // Rule ID 35 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/8,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[1] d
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #33: extract_vector_element_build_vector_trunc7
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
    // Label 446: @6778
    GIM_Try, /*On fail goto*//*Label 447*/ GIMT_Encode4(6802), // Rule ID 34 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/7,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[1] c
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #32: extract_vector_element_build_vector_trunc6
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
    // Label 447: @6802
    GIM_Try, /*On fail goto*//*Label 448*/ GIMT_Encode4(6826), // Rule ID 33 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/6,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #31: extract_vector_element_build_vector_trunc5
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
    // Label 448: @6826
    GIM_Try, /*On fail goto*//*Label 449*/ GIMT_Encode4(6850), // Rule ID 32 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/5,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #30: extract_vector_element_build_vector_trunc4
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
    // Label 449: @6850
    GIM_Try, /*On fail goto*//*Label 450*/ GIMT_Encode4(6874), // Rule ID 31 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/4,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[1] z
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #29: extract_vector_element_build_vector_trunc3
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
    // Label 450: @6874
    GIM_Try, /*On fail goto*//*Label 451*/ GIMT_Encode4(6908), // Rule ID 27 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INSERT_VECTOR_ELT),
      // MIs[1] x
      // No operand predicates
      // MIs[1] value
      // No operand predicates
      // MIs[1] idx
      // No operand predicates
      // MIs[0] idx
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/3,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #25: extract_vector_element_not_const
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/2,
      GIR_EraseRootFromParent_Done,
    // Label 451: @6908
    GIM_Try, /*On fail goto*//*Label 452*/ GIMT_Encode4(6929), // Rule ID 28 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INSERT_VECTOR_ELT),
      // MIs[1] x
      // No operand predicates
      // MIs[1] value
      // No operand predicates
      // MIs[1] idx2
      // No operand predicates
      // MIs[0] idx1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #26: extract_vector_element_different_indices
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
    // Label 452: @6929
    GIM_Try, /*On fail goto*//*Label 453*/ GIMT_Encode4(6958), // Rule ID 37 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHUFFLE_VECTOR),
      // MIs[1] src1
      // No operand predicates
      // MIs[1] src2
      // No operand predicates
      // MIs[1] mask
      // No operand predicates
      // MIs[0] idx
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #35: extract_vector_element_shuffle_vector
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
    // Label 453: @6958
    GIM_Try, /*On fail goto*//*Label 454*/ GIMT_Encode4(6982), // Rule ID 30 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR_TRUNC),
      GIM_CheckNumOperands, /*MI*/1, /*Expected*/3,
      // MIs[1] x
      // No operand predicates
      // MIs[1] y
      // No operand predicates
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #28: extract_vector_element_build_vector_trunc2
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
    // Label 454: @6982
    GIM_Try, /*On fail goto*//*Label 455*/ GIMT_Encode4(7014), // Rule ID 29 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperandsGE, /*MI*/1, /*Expected*/2,
      // MIs[1] unused
      // No operand predicates
      // MIs[0] idx
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #27: extract_vector_element_build_vector
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
    // Label 455: @7014
    GIM_Try, /*On fail goto*//*Label 456*/ GIMT_Encode4(7038), // Rule ID 21 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] vector
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] idx
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #19: match_extract_of_element_undef_vector
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_EraseRootFromParent_Done,
    // Label 456: @7038
    GIM_Try, /*On fail goto*//*Label 457*/ GIMT_Encode4(7062), // Rule ID 22 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] vector
      // No operand predicates
      // MIs[0] idx
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #20: match_extract_of_element_undef_index
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIR_RootToRootCopy, /*OpIdx*/0, // root
      GIR_EraseRootFromParent_Done,
    // Label 457: @7062
    GIM_Reject,
    // Label 94: @7063
    GIM_Try, /*On fail goto*//*Label 458*/ GIMT_Encode4(7074), // Rule ID 96 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
      // Combiner Rule #78: propagate_undef_all_ops; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
    // Label 458: @7074
    GIM_Try, /*On fail goto*//*Label 459*/ GIMT_Encode4(7085), // Rule ID 98 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
      // Combiner Rule #79: propagate_undef_shuffle_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
    // Label 459: @7085
    GIM_Try, /*On fail goto*//*Label 460*/ GIMT_Encode4(7096), // Rule ID 342 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule197Enabled),
      // Combiner Rule #197: combine_shuffle_concat; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner163),
    // Label 460: @7096
    GIM_Try, /*On fail goto*//*Label 461*/ GIMT_Encode4(7107), // Rule ID 344 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule199Enabled),
      // Combiner Rule #199: combine_shuffle_disjoint_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner165),
    // Label 461: @7107
    GIM_Try, /*On fail goto*//*Label 462*/ GIMT_Encode4(7118), // Rule ID 362 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule215Enabled),
      // Combiner Rule #215: shuffle_to_extract; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner181),
    // Label 462: @7118
    GIM_Try, /*On fail goto*//*Label 463*/ GIMT_Encode4(7139), // Rule ID 343 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule198Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] undef
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] mask
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #198: combine_shuffle_undef_rhs
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner164),
    // Label 463: @7139
    GIM_Reject,
    // Label 95: @7140
    GIM_Try, /*On fail goto*//*Label 464*/ GIMT_Encode4(7184), // Rule ID 221 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule158Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
      // MIs[1] rev
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_BITREVERSE),
      // MIs[2] val
      // No operand predicates
      // MIs[1] amt
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner8),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #158: bitreverse_lshr
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SHL),
      GIR_RootToRootCopy, /*OpIdx*/0, // d
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // val
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // amt
      GIR_EraseRootFromParent_Done,
    // Label 464: @7184
    GIM_Try, /*On fail goto*//*Label 465*/ GIMT_Encode4(7228), // Rule ID 220 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule157Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SHL),
      // MIs[1] rev
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_BITREVERSE),
      // MIs[2] val
      // No operand predicates
      // MIs[1] amt
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner7),
      GIM_CheckIsSafeToFold, /*NumInsns*/2,
      // Combiner Rule #157: bitreverse_shl
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_LSHR),
      GIR_RootToRootCopy, /*OpIdx*/0, // d
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // val
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // amt
      GIR_EraseRootFromParent_Done,
    // Label 465: @7228
    GIM_Reject,
    // Label 96: @7229
    GIM_Try, /*On fail goto*//*Label 466*/ GIMT_Encode4(7250), // Rule ID 176 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule134Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src0
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCONSTANT),
      // MIs[1] cst
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #134: constant_fold_fsqrt
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner105),
    // Label 466: @7250
    GIM_Reject,
    // Label 97: @7251
    GIM_Try, /*On fail goto*//*Label 467*/ GIMT_Encode4(7265), // Rule ID 363 //
      GIM_CheckFeatures, GIMT_Encode2(GIFBS_HasDotProd),
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule216Enabled),
      // Combiner Rule #216: ext_addv_to_udot_addv; wip_match_opcode 'G_VECREDUCE_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner182),
    // Label 467: @7265
    GIM_Try, /*On fail goto*//*Label 468*/ GIMT_Encode4(7276), // Rule ID 364 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule217Enabled),
      // Combiner Rule #217: ext_uaddv_to_uaddlv; wip_match_opcode 'G_VECREDUCE_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner183),
    // Label 468: @7276
    GIM_Reject,
    // Label 98: @7277
    GIM_Reject,
    }; // Size: 7278 bytes
  return MatchTable0;
}
#undef GIMT_Encode2
#undef GIMT_Encode4
#undef GIMT_Encode8

#endif // ifdef GET_GICOMBINER_IMPL

#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
, State(0),
ExecInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GICOMBINER_CONSTRUCTOR_INITS

