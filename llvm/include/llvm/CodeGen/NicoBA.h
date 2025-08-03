#pragma once

#include "llvm/CodeGen/MachineCombinerPattern.h"
#include "llvm/CodeGen/MachineInstr.h"
#include "llvm/CodeGen/MachineBasicBlock.h"
#include "llvm/CodeGen/GlobalISel/MIPatternMatch.h"
#include <iterator>
#include <regex>
#include <string>
#include <vector>
#include <set>
#include <chrono>

namespace nico {
struct GlobalISelData {
    std::string caller; // irtranslator, legalizer, ...
    std::string event; // created, deleted, special
    std::string mf; // mf name
    std::string mbb; // mbb name
    std::string mi_before; // mi name
    std::string mi_after; // mi name
    std::string pattern; // MIPattern
};

struct GlobalISelDataPattern {
    std::string stage; // irtranslator, legalizer, ...
    std::string pattern_match_file;
    std::string pattern_match_name;
    std::string pattern_match_type; 
    std::string mbb; // mbb name
    bool match_success;
};

// definition of machinecombiner data structure
struct MachineCombinerData {
    unsigned idx;
    unsigned mbb_pred;
    unsigned mbb_succ;
    unsigned mbb_size;
    unsigned mf_size;
    std::vector<std::string> inserted;
    std::vector<std::string> deleted;
    std::string mf;
    std::string mbb;
    std::string pattern;
};

auto MI2String = [](const llvm::MachineInstr& MI) {
    std::string InstrStr;
    llvm::raw_string_ostream OS(InstrStr);
    MI.print(OS);
    OS.flush();
    InstrStr = std::regex_replace(InstrStr, std::regex("\\n"), "");
    InstrStr = std::regex_replace(InstrStr, std::regex("<regmask.*more...>"), "<regmask...>");
    return InstrStr;
};


// thread local wrapper to clear data after each run
struct MachineCombinerDataVector : public std::vector<nico::MachineCombinerData> {
    ~MachineCombinerDataVector() {
        for (auto& i : *this) {
            i.inserted.clear();
            i.deleted.clear();
        }
        this->clear();
    }
};



template <typename T>
struct GlobalISelDataVector : public std::vector<T> {
    ~GlobalISelDataVector() {
        // for (auto &i : *this) {
        //   i.inserted.clear();
        //   i.deleted.clear();
        // }
        this->clear();
    }
};


inline thread_local std::set<std::string> used_matchers;

inline thread_local nico::MachineCombinerDataVector data_machinecombiner;
inline thread_local nico::GlobalISelDataVector<nico::GlobalISelData> data_globalisel;
inline thread_local nico::GlobalISelDataVector<nico::GlobalISelDataPattern> data_globalisel_patterns;

inline thread_local std::vector<std::tuple<const std::string, const std::string, unsigned>> data_gicombiner;

inline std::string to_string(int value) {
    switch (value) {
        case 0: return "GIM_Try";
        case 1: return "GIM_SwitchOpcode";
        case 2: return "GIM_SwitchType";
        case 3: return "GIM_RecordInsn";
        case 4: return "GIM_RecordInsnIgnoreCopies";
        case 5: return "GIM_CheckFeatures";
        case 6: return "GIM_CheckOpcode";
        case 7: return "GIM_CheckOpcodeIsEither";
        case 8: return "GIM_CheckNumOperands";
        case 9: return "GIM_CheckNumOperandsLE";
        case 10: return "GIM_CheckNumOperandsGE";
        case 11: return "GIM_CheckI64ImmPredicate";
        case 12: return "GIM_CheckAPIntImmPredicate";
        case 13: return "GIM_CheckAPFloatImmPredicate";
        case 14: return "GIM_CheckImmOperandPredicate";
        case 15: return "GIM_CheckAtomicOrdering";
        case 16: return "GIM_CheckAtomicOrderingOrStrongerThan";
        case 17: return "GIM_CheckAtomicOrderingWeakerThan";
        case 18: return "GIM_CheckMemorySizeEqualTo";
        case 19: return "GIM_CheckMemoryAddressSpace";
        case 20: return "GIM_CheckMemoryAlignment";
        case 21: return "GIM_CheckMemorySizeEqualToLLT";
        case 22: return "GIM_CheckMemorySizeLessThanLLT";
        case 23: return "GIM_CheckMemorySizeGreaterThanLLT";
        case 24: return "GIM_CheckIsBuildVectorAllOnes";
        case 25: return "GIM_CheckIsBuildVectorAllZeros";
        case 26: return "GIM_CheckSimplePredicate";
        case 27: return "GIM_CheckCxxInsnPredicate";
        case 28: return "GIM_CheckHasNoUse";
        case 29: return "GIM_CheckHasOneUse";
        case 30: return "GIM_CheckType";
        case 31: return "GIM_RootCheckType";
        case 32: return "GIM_CheckPointerToAny";
        case 33: return "GIM_CheckRegBankForClass";
        case 34: return "GIM_RootCheckRegBankForClass";
        case 35: return "GIM_CheckComplexPattern";
        case 36: return "GIM_CheckConstantInt";
        case 37: return "GIM_CheckConstantInt8";
        case 38: return "GIM_CheckLiteralInt";
        case 39: return "GIM_CheckIntrinsicID";
        case 40: return "GIM_CheckCmpPredicate";
        case 41: return "GIM_CheckIsMBB";
        case 42: return "GIM_CheckIsImm";
        case 43: return "GIM_CheckIsSafeToFold";
        case 44: return "GIM_CheckIsSameOperand";
        case 45: return "GIM_CheckIsSameOperandIgnoreCopies";
        case 46: return "GIM_CheckAllSameOperand";
        case 47: return "GIM_CheckAllSameOperandIgnoreCopies";
        case 48: return "GIM_CheckCanReplaceReg";
        case 49: return "GIM_MIFlags";
        case 50: return "GIM_MIFlagsNot";
        case 51: return "GIM_RecordNamedOperand";
        case 52: return "GIM_RecordRegType";
        case 53: return "GIM_Reject";
        case 54: return "GIR_MutateOpcode";
        case 55: return "GIR_BuildMI";
        case 56: return "GIR_BuildRootMI";
        case 57: return "GIR_BuildConstant";
        case 58: return "GIR_Copy";
        case 59: return "GIR_RootToRootCopy";
        case 60: return "GIR_CopyRemaining";
        case 61: return "GIR_CopyOrAddZeroReg";
        case 62: return "GIR_CopySubReg";
        case 63: return "GIR_AddImplicitDef";
        case 64: return "GIR_AddImplicitUse";
        case 65: return "GIR_AddRegister";
        case 66: return "GIR_AddIntrinsicID";
        case 67: return "GIR_SetImplicitDefDead";
        case 68: return "GIR_SetMIFlags";
        case 69: return "GIR_UnsetMIFlags";
        case 70: return "GIR_CopyMIFlags";
        case 71: return "GIR_AddTempRegister";
        case 72: return "GIR_AddSimpleTempRegister";
        case 73: return "GIR_AddTempSubRegister";
        case 74: return "GIR_AddImm";
        case 75: return "GIR_AddImm8";
        case 76: return "GIR_AddCImm";
        case 77: return "GIR_ComplexRenderer";
        case 78: return "GIR_ComplexSubOperandRenderer";
        case 79: return "GIR_ComplexSubOperandSubRegRenderer";
        case 80: return "GIR_CustomRenderer";
        case 81: return "GIR_DoneWithCustomAction";
        case 82: return "GIR_CustomOperandRenderer";
        case 83: return "GIR_CopyConstantAsSImm";
        case 84: return "GIR_CopyFConstantAsFPImm";
        case 85: return "GIR_ConstrainOperandRC";
        case 86: return "GIR_ConstrainSelectedInstOperands";
        case 87: return "GIR_RootConstrainSelectedInstOperands";
        case 88: return "GIR_MergeMemOperands";
        case 89: return "GIR_EraseFromParent";
        case 90: return "GIR_EraseRootFromParent_Done";
        case 91: return "GIR_MakeTempReg";
        case 92: return "GIR_ReplaceReg";
        case 93: return "GIR_ReplaceRegWithTempReg";
        case 94: return "GIR_Done";
        case 95: return "GIR_Coverage";
        case 96: return "GIU_NumOpcodes";
        // default: return "<unknown>";
    }
}

inline std::string getUnixTimestampStringChrono() {
    auto currentTimePoint = std::chrono::system_clock::now();
    auto durationSinceEpoch = currentTimePoint.time_since_epoch();
    auto microsecondsSinceEpoch = std::chrono::duration_cast<std::chrono::microseconds>(durationSinceEpoch);

    long long timestamp = microsecondsSinceEpoch.count();

    return std::to_string(timestamp);
}

// function to get index of mi in mbb
inline unsigned get_index_of_mi(const llvm::MachineBasicBlock *MBB, const llvm::MachineInstr *MI) {
    return std::distance(MBB->begin(), llvm::MachineBasicBlock::const_iterator(MI));
}


enum MachineCombinerPattern2 : unsigned {
    // These are commutative variants for reassociating a computation chain. See
    // the comments before getMachineCombinerPatterns() in TargetInstrInfo.cpp.
    REASSOC_AX_BY,
    REASSOC_AX_YB,
    REASSOC_XA_BY,
    REASSOC_XA_YB,

    TARGET_PATTERN_START
};

inline std::string to_string(nico::MachineCombinerPattern2 pattern) {
    switch (pattern) {
        case REASSOC_AX_BY:
            return "REASSOC_AX_BY";
        case REASSOC_AX_YB:
            return "REASSOC_AX_YB";
        case REASSOC_XA_BY:
            return "REASSOC_XA_BY";
        case REASSOC_XA_YB:
            return "REASSOC_XA_YB";
        case TARGET_PATTERN_START:
            return "TARGET_PATTERN_START";
        // default:
        //     return "TARGET_PATTERN_START";
    }
}

// AArch64 MachineCombiner patterns
enum AArch64MachineCombinerPattern2 : unsigned {
    // These are patterns used to reduce the length of dependence chain.
    SUBADD_OP1 = MachineCombinerPattern2::TARGET_PATTERN_START,
    SUBADD_OP2,

    // These are multiply-add patterns matched by the AArch64 machine combiner.
    MULADDW_OP1,
    MULADDW_OP2,
    MULSUBW_OP1,
    MULSUBW_OP2,
    MULADDWI_OP1,
    MULSUBWI_OP1,
    MULADDX_OP1,
    MULADDX_OP2,
    MULSUBX_OP1,
    MULSUBX_OP2,
    MULADDXI_OP1,
    MULSUBXI_OP1,
    // NEON integers vectors
    MULADDv8i8_OP1,
    MULADDv8i8_OP2,
    MULADDv16i8_OP1,
    MULADDv16i8_OP2,
    MULADDv4i16_OP1,
    MULADDv4i16_OP2,
    MULADDv8i16_OP1,
    MULADDv8i16_OP2,
    MULADDv2i32_OP1,
    MULADDv2i32_OP2,
    MULADDv4i32_OP1,
    MULADDv4i32_OP2,

    MULSUBv8i8_OP1,
    MULSUBv8i8_OP2,
    MULSUBv16i8_OP1,
    MULSUBv16i8_OP2,
    MULSUBv4i16_OP1,
    MULSUBv4i16_OP2,
    MULSUBv8i16_OP1,
    MULSUBv8i16_OP2,
    MULSUBv2i32_OP1,
    MULSUBv2i32_OP2,
    MULSUBv4i32_OP1,
    MULSUBv4i32_OP2,

    MULADDv4i16_indexed_OP1,
    MULADDv4i16_indexed_OP2,
    MULADDv8i16_indexed_OP1,
    MULADDv8i16_indexed_OP2,
    MULADDv2i32_indexed_OP1,
    MULADDv2i32_indexed_OP2,
    MULADDv4i32_indexed_OP1,
    MULADDv4i32_indexed_OP2,

    MULSUBv4i16_indexed_OP1,
    MULSUBv4i16_indexed_OP2,
    MULSUBv8i16_indexed_OP1,
    MULSUBv8i16_indexed_OP2,
    MULSUBv2i32_indexed_OP1,
    MULSUBv2i32_indexed_OP2,
    MULSUBv4i32_indexed_OP1,
    MULSUBv4i32_indexed_OP2,

    // Floating Point
    FMULADDH_OP1,
    FMULADDH_OP2,
    FMULSUBH_OP1,
    FMULSUBH_OP2,
    FMULADDS_OP1,
    FMULADDS_OP2,
    FMULSUBS_OP1,
    FMULSUBS_OP2,
    FMULADDD_OP1,
    FMULADDD_OP2,
    FMULSUBD_OP1,
    FMULSUBD_OP2,
    FNMULSUBH_OP1,
    FNMULSUBS_OP1,
    FNMULSUBD_OP1,
    FMLAv1i32_indexed_OP1,
    FMLAv1i32_indexed_OP2,
    FMLAv1i64_indexed_OP1,
    FMLAv1i64_indexed_OP2,
    FMLAv4f16_OP1,
    FMLAv4f16_OP2,
    FMLAv8f16_OP1,
    FMLAv8f16_OP2,
    FMLAv2f32_OP2,
    FMLAv2f32_OP1,
    FMLAv2f64_OP1,
    FMLAv2f64_OP2,
    FMLAv4i16_indexed_OP1,
    FMLAv4i16_indexed_OP2,
    FMLAv8i16_indexed_OP1,
    FMLAv8i16_indexed_OP2,
    FMLAv2i32_indexed_OP1,
    FMLAv2i32_indexed_OP2,
    FMLAv2i64_indexed_OP1,
    FMLAv2i64_indexed_OP2,
    FMLAv4f32_OP1,
    FMLAv4f32_OP2,
    FMLAv4i32_indexed_OP1,
    FMLAv4i32_indexed_OP2,
    FMLSv1i32_indexed_OP2,
    FMLSv1i64_indexed_OP2,
    FMLSv4f16_OP1,
    FMLSv4f16_OP2,
    FMLSv8f16_OP1,
    FMLSv8f16_OP2,
    FMLSv2f32_OP1,
    FMLSv2f32_OP2,
    FMLSv2f64_OP1,
    FMLSv2f64_OP2,
    FMLSv4i16_indexed_OP1,
    FMLSv4i16_indexed_OP2,
    FMLSv8i16_indexed_OP1,
    FMLSv8i16_indexed_OP2,
    FMLSv2i32_indexed_OP1,
    FMLSv2i32_indexed_OP2,
    FMLSv2i64_indexed_OP1,
    FMLSv2i64_indexed_OP2,
    FMLSv4f32_OP1,
    FMLSv4f32_OP2,
    FMLSv4i32_indexed_OP1,
    FMLSv4i32_indexed_OP2,

    FMULv2i32_indexed_OP1,
    FMULv2i32_indexed_OP2,
    FMULv2i64_indexed_OP1,
    FMULv2i64_indexed_OP2,
    FMULv4i16_indexed_OP1,
    FMULv4i16_indexed_OP2,
    FMULv4i32_indexed_OP1,
    FMULv4i32_indexed_OP2,
    FMULv8i16_indexed_OP1,
    FMULv8i16_indexed_OP2,

    FNMADD,
};

inline std::string to_string(nico::AArch64MachineCombinerPattern2 pattern) {
    switch (pattern) {
        case SUBADD_OP1:
            return "SUBADD_OP1";
        case SUBADD_OP2:
            return "SUBADD_OP2";
        case MULADDW_OP1:
            return "MULADDW_OP1";
        case MULADDW_OP2:
            return "MULADDW_OP2";
        case MULSUBW_OP1:
            return "MULSUBW_OP1";
        case MULSUBW_OP2:
            return "MULSUBW_OP2";
        case MULADDWI_OP1:
            return "MULADDWI_OP1";
        case MULSUBWI_OP1:
            return "MULSUBWI_OP1";
        case MULADDX_OP1:
            return "MULADDX_OP1";
        case MULADDX_OP2:
            return "MULADDX_OP2";
        case MULSUBX_OP1:
            return "MULSUBX_OP1";
        case MULSUBX_OP2:
            return "MULSUBX_OP2";
        case MULADDXI_OP1:
            return "MULADDXI_OP1";
        case MULSUBXI_OP1:
            return "MULSUBXI_OP1";
        case MULADDv8i8_OP1:
            return "MULADDv8i8_OP1";
        case MULADDv8i8_OP2:
            return "MULADDv8i8_OP2";
        case MULADDv16i8_OP1:
            return "MULADDv16i8_OP1";
        case MULADDv16i8_OP2:
            return "MULADDv16i8_OP2";
        case MULADDv4i16_OP1:
            return "MULADDv4i16_OP1";
        case MULADDv4i16_OP2:
            return "MULADDv4i16_OP2";
        case MULADDv8i16_OP1:
            return "MULADDv8i16_OP1";
        case MULADDv8i16_OP2:
            return "MULADDv8i16_OP2";
        case MULADDv2i32_OP1:
            return "MULADDv2i32_OP1";
        case MULADDv2i32_OP2:
            return "MULADDv2i32_OP2";
        case MULADDv4i32_OP1:
            return "MULADDv4i32_OP1";
        case MULADDv4i32_OP2:
            return "MULADDv4i32_OP2";
        case MULSUBv8i8_OP1:
            return "MULSUBv8i8_OP1";
        case MULSUBv8i8_OP2:
            return "MULSUBv8i8_OP2";
        case MULSUBv16i8_OP1:
            return "MULSUBv16i8_OP1";
        case MULSUBv16i8_OP2:
            return "MULSUBv16i8_OP2";
        case MULSUBv4i16_OP1:
            return "MULSUBv4i16_OP1";
        case MULSUBv4i16_OP2:
            return "MULSUBv4i16_OP2";
        case MULSUBv8i16_OP1:
            return "MULSUBv8i16_OP1";
        case MULSUBv8i16_OP2:
            return "MULSUBv8i16_OP2";
        case MULSUBv2i32_OP1:
            return "MULSUBv2i32_OP1";
        case MULSUBv2i32_OP2:
            return "MULSUBv2i32_OP2";
        case MULSUBv4i32_OP1:
            return "MULSUBv4i32_OP1";
        case MULSUBv4i32_OP2:
            return "MULSUBv4i32_OP2";
        case MULADDv4i16_indexed_OP1:
            return "MULADDv4i16_indexed_OP1";
        case MULADDv4i16_indexed_OP2:
            return "MULADDv4i16_indexed_OP2";
        case MULADDv8i16_indexed_OP1:
            return "MULADDv8i16_indexed_OP1";
        case MULADDv8i16_indexed_OP2:
            return "MULADDv8i16_indexed_OP2";
        case MULADDv2i32_indexed_OP1:
            return "MULADDv2i32_indexed_OP1";
        case MULADDv2i32_indexed_OP2:
            return "MULADDv2i32_indexed_OP2";
        case MULADDv4i32_indexed_OP1:
            return "MULADDv4i32_indexed_OP1";
        case MULADDv4i32_indexed_OP2:
            return "MULADDv4i32_indexed_OP2";
        case MULSUBv4i16_indexed_OP1:
            return "MULSUBv4i16_indexed_OP1";
        case MULSUBv4i16_indexed_OP2:
            return "MULSUBv4i16_indexed_OP2";
        case MULSUBv8i16_indexed_OP1:
            return "MULSUBv8i16_indexed_OP1";
        case MULSUBv8i16_indexed_OP2:
            return "MULSUBv8i16_indexed_OP2";
        case MULSUBv2i32_indexed_OP1:
            return "MULSUBv2i32_indexed_OP1";
        case MULSUBv2i32_indexed_OP2:
            return "MULSUBv2i32_indexed_OP2";
        case MULSUBv4i32_indexed_OP1:
            return "MULSUBv4i32_indexed_OP1";
        case MULSUBv4i32_indexed_OP2:
            return "MULSUBv4i32_indexed_OP2";
        case FMULADDH_OP1:
            return "FMULADDH_OP1";
        case FMULADDH_OP2:
            return "FMULADDH_OP2";
        case FMULSUBH_OP1:
            return "FMULSUBH_OP1";
        case FMULSUBH_OP2:
            return "FMULSUBH_OP2";
        case FMULADDS_OP1:
            return "FMULADDS_OP1";
        case FMULADDS_OP2:
            return "FMULADDS_OP2";
        case FMULSUBS_OP1:
            return "FMULSUBS_OP1";
        case FMULSUBS_OP2:
            return "FMULSUBS_OP2";
        case FMULADDD_OP1:
            return "FMULADDD_OP1";
        case FMULADDD_OP2:
            return "FMULADDD_OP2";
        case FMULSUBD_OP1:
            return "FMULSUBD_OP1";
        case FMULSUBD_OP2:
            return "FMULSUBD_OP2";
        case FNMULSUBH_OP1:
            return "FNMULSUBH_OP1";
        case FNMULSUBS_OP1:
            return "FNMULSUBS_OP1";
        case FNMULSUBD_OP1:
            return "FNMULSUBD_OP1";
        case FMLAv1i32_indexed_OP1:
            return "FMLAv1i32_indexed_OP1";
        case FMLAv1i32_indexed_OP2:
            return "FMLAv1i32_indexed_OP2";
        case FMLAv1i64_indexed_OP1:
            return "FMLAv1i64_indexed_OP1";
        case FMLAv1i64_indexed_OP2:
            return "FMLAv1i64_indexed_OP2";
        case FMLAv4f16_OP1:
            return "FMLAv4f16_OP1";
        case FMLAv4f16_OP2:
            return "FMLAv4f16_OP2";
        case FMLAv8f16_OP1:
            return "FMLAv8f16_OP1";
        case FMLAv8f16_OP2:
            return "FMLAv8f16_OP2";
        case FMLAv2f32_OP2:
            return "FMLAv2f32_OP2";
        case FMLAv2f32_OP1:
            return "FMLAv2f32_OP1";
        case FMLAv2f64_OP1:
            return "FMLAv2f64_OP1";
        case FMLAv2f64_OP2:
            return "FMLAv2f64_OP2";
        case FMLAv4i16_indexed_OP1:
            return "FMLAv4i16_indexed_OP1";
        case FMLAv4i16_indexed_OP2:
            return "FMLAv4i16_indexed_OP2";
        case FMLAv8i16_indexed_OP1:
            return "FMLAv8i16_indexed_OP1";
        case FMLAv8i16_indexed_OP2:
            return "FMLAv8i16_indexed_OP2";
        case FMLAv2i32_indexed_OP1:
            return "FMLAv2i32_indexed_OP1";
        case FMLAv2i32_indexed_OP2:
            return "FMLAv2i32_indexed_OP2";
        case FMLAv2i64_indexed_OP1:
            return "FMLAv2i64_indexed_OP1";
        case FMLAv2i64_indexed_OP2:
            return "FMLAv2i64_indexed_OP2";
        case FMLAv4f32_OP1:
            return "FMLAv4f32_OP1";
        case FMLAv4f32_OP2:
            return "FMLAv4f32_OP2";
        case FMLAv4i32_indexed_OP1:
            return "FMLAv4i32_indexed_OP1";
        case FMLAv4i32_indexed_OP2:
            return "FMLAv4i32_indexed_OP2";
        case FMLSv1i32_indexed_OP2:
            return "FMLSv1i32_indexed_OP2";
        case FMLSv1i64_indexed_OP2:
            return "FMLSv1i64_indexed_OP2";
        case FMLSv4f16_OP1:
            return "FMLSv4f16_OP1";
        case FMLSv4f16_OP2:
            return "FMLSv4f16_OP2";
        case FMLSv8f16_OP1:
            return "FMLSv8f16_OP1";
        case FMLSv8f16_OP2:
            return "FMLSv8f16_OP2";
        case FMLSv2f32_OP1:
            return "FMLSv2f32_OP1";
        case FMLSv2f32_OP2:
            return "FMLSv2f32_OP2";
        case FMLSv2f64_OP1:
            return "FMLSv2f64_OP1";
        case FMLSv2f64_OP2:
            return "FMLSv2f64_OP2";
        case FMLSv4i16_indexed_OP1:
            return "FMLSv4i16_indexed_OP1";
        case FMLSv4i16_indexed_OP2:
            return "FMLSv4i16_indexed_OP2";
        case FMLSv8i16_indexed_OP1:
            return "FMLSv8i16_indexed_OP1";
        case FMLSv8i16_indexed_OP2:
            return "FMLSv8i16_indexed_OP2";
        case FMLSv2i32_indexed_OP1:
            return "FMLSv2i32_indexed_OP1";
        case FMLSv2i32_indexed_OP2:
            return "FMLSv2i32_indexed_OP2";
        case FMLSv2i64_indexed_OP1:
            return "FMLSv2i64_indexed_OP1";
        case FMLSv2i64_indexed_OP2:
            return "FMLSv2i64_indexed_OP2";
        case FMLSv4f32_OP1:
            return "FMLSv4f32_OP1";
        case FMLSv4f32_OP2:
            return "FMLSv4f32_OP2";
        case FMLSv4i32_indexed_OP1:
            return "FMLSv4i32_indexed_OP1";
        case FMLSv4i32_indexed_OP2:
            return "FMLSv4i32_indexed_OP2";
        case FMULv2i32_indexed_OP1:
            return "FMULv2i32_indexed_OP1";
        case FMULv2i32_indexed_OP2:
            return "FMULv2i32_indexed_OP2";
        case FMULv2i64_indexed_OP1:
            return "FMULv2i64_indexed_OP1";
        case FMULv2i64_indexed_OP2:
            return "FMULv2i64_indexed_OP2";
        case FMULv4i16_indexed_OP1:
            return "FMULv4i16_indexed_OP1";
        case FMULv4i16_indexed_OP2:
            return "FMULv4i16_indexed_OP2";
        case FMULv4i32_indexed_OP1:
            return "FMULv4i32_indexed_OP1";
        case FMULv4i32_indexed_OP2:
            return "FMULv4i32_indexed_OP2";
        case FMULv8i16_indexed_OP1:
            return "FMULv8i16_indexed_OP1";
        case FMULv8i16_indexed_OP2:
            return "FMULv8i16_indexed_OP2";
        case FNMADD:
            return "FNMADD";
        // default:
        //     return "<unknown>";
    }
}


inline thread_local std::set<const llvm::MachineInstr *> CreatedInstrsNico;
inline thread_local std::set<const std::string> DeletedInstrsNico;
inline thread_local std::set<const llvm::MachineInstr *> ChangedInstrsNico;

struct GlobalISelDataInstruction {
    std::string stage;
    std::vector<std::string> logs;
    std::vector<std::tuple<std::string, unsigned, unsigned>> state_before;
    std::vector<std::tuple<std::string, unsigned, unsigned>> state_after;
    std::vector<std::tuple<std::string, unsigned, unsigned>> created;
    std::vector<std::tuple<std::string, unsigned, unsigned>> changed;
    std::vector<std::tuple<std::string, unsigned, unsigned>> deleted;
};

inline thread_local std::vector<GlobalISelDataInstruction> total_data;

inline void reset_observerdata() {
    CreatedInstrsNico.clear();
    DeletedInstrsNico.clear();
    ChangedInstrsNico.clear();
}
inline void reset_observerdata(const std::string& filename, const std::string& function_name, const std::vector<std::tuple<std::string, unsigned, unsigned>>& state_before_loc, const std::vector<std::tuple<std::string, unsigned, unsigned>>& state_after_loc) {
    total_data.back().state_before = std::move(state_before_loc);
    total_data.back().state_after = std::move(state_after_loc);

    // created
    for (const auto &C : nico::CreatedInstrsNico)
        total_data.back().created.push_back(
            std::make_tuple(nico::MI2String(*C), nico::get_index_of_mi(C->getParent(), C), C->getParent()->getNumber())
        );
    
    // changed
    for (const auto &C : nico::ChangedInstrsNico)
        total_data.back().changed.push_back(
            std::make_tuple(nico::MI2String(*C), nico::get_index_of_mi(C->getParent(), C), C->getParent()->getNumber())
        );

    // deleted
    for (const auto &C : nico::DeletedInstrsNico)
        total_data.back().deleted.push_back(
            std::make_tuple(C, -1, -1)
        );

    // std::string temp_after;
    // for (const auto &C : MIs)
    //     temp_after += formatv("{0} | ", nico::MI2String(*C));
    // if (!temp_after.empty() && temp_after.size() >= 3)
    //     temp_after.erase(temp_after.size() - 3);

    // llvm::log_backend_event(
    //     llvm::to_string(llvm::current_stage), filename, function_name,
    //     formatv("{0}###{1}###{2} -> {3}###{4}###{5}###{6}",
    //         static_cast<unsigned>({0}), StringRef("{1}"), temp_before, temp_after, obs_created, obs_changed, obs_deleted), nico::getUnixTimestampStringChrono(), true
    // );

    // clear the thread local data
    CreatedInstrsNico.clear();
    DeletedInstrsNico.clear();
    ChangedInstrsNico.clear();
}

auto log_backend_event = [](auto&&... args) {
    data_globalisel_patterns.emplace_back(nico::GlobalISelDataPattern{std::forward<decltype(args)>(args)...});
};

enum CurrentBackendStage : unsigned {
    INIT,
    IRTRANSLATOR,
    PRELEGALIZERCOMBINER,
    PRELEGALIZERCOMBINERO0,
    LEGALIZER,
    POSTLEGALIZERCOMBINER,
    POSTLEGALIZERLOWERING,
    REGBANKSELECT,
    INSTRUCTIONSELECT,
    COMBINER,
    MACHINECOMBINER
};

inline thread_local nico::CurrentBackendStage current_stage = INIT;

inline std::string to_string(nico::CurrentBackendStage stage) {
    switch (stage) {
        case INIT: return "init";
        case IRTRANSLATOR:
            return "irtranslator";
        case PRELEGALIZERCOMBINER:
            return "prelegalizercombiner";
        case PRELEGALIZERCOMBINERO0:
            return "prelegalizercombinerO0";
        case LEGALIZER:
            return "legalizer";
        case POSTLEGALIZERCOMBINER:
            return "postlegalizercombiner";
        case POSTLEGALIZERLOWERING:
            return "postlegalizerlowering";
        case REGBANKSELECT:
            return "regbankselect";
        case INSTRUCTIONSELECT:
            return "instructionselect";
        case COMBINER:
            return "combiner";
        case MACHINECOMBINER:
            return "machinecombiner";
        // default:
        //     return "init";
    }
}

// write function that extracts classname and function name from a string which is __PRETTY_FUNCTION__
inline std::string getFunctionName(const std::string& prettyFunction) {
    size_t start = prettyFunction.find("::") + 2; // Skip to the first "::"
    size_t end = prettyFunction.find('(', start);
    return prettyFunction.substr(start, end - start);
}

inline std::optional<std::string> extractT3Type(const std::string& input) {
    // Define the start and end markers
    const std::string start_marker = "T3 = ";
    const char end_marker = ']';

    // 1. Find the position of "T3 = "
    size_t start_pos = input.find(start_marker);
    if (start_pos == std::string::npos) {
        return std::nullopt; // Start marker not found
    }

    // Adjust position to be right after the marker
    start_pos += start_marker.length();

    // 2. Find the closing bracket ']' starting from our new position
    size_t end_pos = input.find(end_marker, start_pos);
    if (end_pos == std::string::npos) {
        return std::nullopt; // End marker not found
    }

    // 3. Extract the substring between the two positions
    return input.substr(start_pos, end_pos - start_pos);
}


inline void simplifyBindTy(std::string& str) {
    const std::string start_marker = "llvm::MIPatternMatch::bind_ty<";
    size_t start_pos;

    // Loop as long as we can find a new occurrence of the start_marker
    while ((start_pos = str.find(start_marker)) != std::string::npos) {
        int depth = 1;
        size_t end_pos = std::string::npos;
        for (size_t i = start_pos + start_marker.length(); i < str.length(); ++i) {
            if (str[i] == '<') {
                depth++;
            } else if (str[i] == '>') {
                depth--;
            }
            if (depth == 0) {
                end_pos = i;
                break;
            }
        }

        if (end_pos != std::string::npos) {
            // 1. Get the content from inside the brackets
            size_t content_start_pos = start_pos + start_marker.length();
            size_t content_length = end_pos - content_start_pos;
            std::string content = str.substr(content_start_pos, content_length);

            // 2. Replace the entire pattern (from "llvm..." to ">") with the content
            size_t whole_pattern_length = end_pos - start_pos + 1;
            str.replace(start_pos, whole_pattern_length, content);
        } else {
            // Malformed string, break to avoid an infinite loop
            break;
        }
    }
}

template <typename T1, typename T2, typename T3>
inline bool mi_match_wrapper(T1&& a, T2&& b, T3&& c, const char* caller = __builtin_FUNCTION(), const char* file = __builtin_FILE(), unsigned line = __builtin_LINE()) {
  // Type trait checks
  constexpr bool is_T1_MachineInstr = std::is_same<std::decay_t<T1>, llvm::MachineInstr>::value
                                 || std::is_same<std::decay_t<T1>, llvm::MachineInstr*>::value;
  // constexpr bool is_T1_Register = std::is_same<std::decay_t<T1>, llvm::Register>::value;

  std::string file_cleaned = std::regex_replace(file, std::regex("/libraries/llvm-project/llvm/"), "");
  file_cleaned = std::regex_replace(file_cleaned, std::regex("/libraries/llvm-project/build/"), "");
  std::string pattern = *nico::extractT3Type(__PRETTY_FUNCTION__);
  nico::simplifyBindTy(pattern);
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<Register>"), "Register");
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<MachineInstr*>"), "MachineInstr*");
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<LLT>"), "LLT");
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<CmpInst::Predicate>"), "CmpInst::Predicate");

  
  // llvm::outs() << "\t\t\t\t\tT1 is MachineInstr: " << is_T1_MachineInstr << ", T1 is Register: " << is_T1_Register << "\n";
  // if (!is_T1_Register) {
  //   log_backend_event("mi_match", caller, pattern, true);
  // }
  bool result = llvm::MIPatternMatch::mi_match(std::forward<T1>(a), std::forward<T2>(b), std::forward<T3>(c));
  nico::log_backend_event(nico::to_string(nico::current_stage), file_cleaned, caller, pattern, "mbb_name_placeholder", result? true : false);
  llvm::outs() << "\t\t\t\t\t" << __func__ << ": " << caller << " | " << pattern << " | " << (is_T1_MachineInstr? "MachineInstr" : "Register") << " | status: " << (result ? "Success" : "Failure") << " (" << file_cleaned << ":" << line << ")\n";
  return result;
}

// used in llvm-project/llvm/utils/TableGen/GlobalISelCombinerEmitter.cpp
auto escapeString = [](const std::string& input) -> std::string {
        std::string out;
        for (char c : input) {
            switch (c) {
                case '\\': out += "\\\\"; break;
                case '\"': out += "\\\""; break;
                case '\n': out += "\\n"; break;
                case '\r': out += "\\r"; break;
                case '\t': out += "\\t"; break;
                default:
                    if (static_cast<unsigned char>(c) < 32 || static_cast<unsigned char>(c) > 126) {
                        char buf[8];
                        snprintf(buf, sizeof(buf), "\\x%02x", static_cast<unsigned char>(c));
                        out += buf;
                    } else {
                        out += c;
                    }
            }
        }
        return out;
    };


} // end namespace nico
