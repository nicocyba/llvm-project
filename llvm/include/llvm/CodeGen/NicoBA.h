#pragma once

#include "llvm/CodeGen/MachineCombinerPattern.h"
#include "llvm/CodeGen/MachineInstr.h"
#include <regex>
#include <string>
#include <vector>

namespace nico {

enum MachineCombinerPattern2 : unsigned {
    // These are commutative variants for reassociating a computation chain. See
    // the comments before getMachineCombinerPatterns() in TargetInstrInfo.cpp.
    REASSOC_AX_BY,
    REASSOC_AX_YB,
    REASSOC_XA_BY,
    REASSOC_XA_YB,

    TARGET_PATTERN_START
};

inline std::string to_string(MachineCombinerPattern2 pattern) {
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

inline std::string to_string(AArch64MachineCombinerPattern2 pattern) {
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
} // end namespace nico
namespace llvm {

enum CurrentBackendStage : unsigned {
    INIT,
    IRTRANSLATOR,
    PRELEGALIZERCOMBINER,
    LEGALIZER,
    POSTLEGALIZERCOMBINER,
    REGBANKSELECT,
    INSTRUCTIONSELECT,
    COMBINER,
    MACHINECOMBINER
};

inline std::string to_string(CurrentBackendStage stage) {
    switch (stage) {
        case INIT: return "init";
        case IRTRANSLATOR:
            return "irtranslator";
        case PRELEGALIZERCOMBINER:
            return "prelegalizercombiner";
        case LEGALIZER:
            return "legalizer";
        case POSTLEGALIZERCOMBINER:
            return "postlegalizercombiner";
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

inline thread_local CurrentBackendStage current_stage = INIT;

inline thread_local bool is_globalisel = false;

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

// thread local wrapper to clear data after each run
struct MachineCombinerDataVector : public std::vector<MachineCombinerData> {
    ~MachineCombinerDataVector() {
        for (auto& i : *this) {
            i.inserted.clear();
            i.deleted.clear();
        }
        this->clear();
    }
};

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
    std::string pattern_match_name;
    std::string pattern_match_type; 
    bool match_success;
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



inline thread_local MachineCombinerDataVector data_machinecombiner;
inline thread_local GlobalISelDataVector<GlobalISelData> data_globalisel;
inline thread_local GlobalISelDataVector<GlobalISelDataPattern> data_globalisel_patterns;

inline thread_local std::vector<std::tuple<const std::string, const std::string, unsigned>> data_gicombiner;

auto MI2String = [](MachineInstr& MI) {
    std::string InstrStr;
    llvm::raw_string_ostream OS(InstrStr);
    MI.print(OS);
    OS.flush();
    InstrStr = std::regex_replace(InstrStr, std::regex("\\n"), "");
    InstrStr = std::regex_replace(InstrStr, std::regex("<regmask.*more...>"), "<regmask...>");
    return InstrStr;
};

// auto logEvent = [](const std::string& Event, MachineInstr& MI) {
//     data_gicombiner.emplace_back(Event, MI2String(MI), MI.getOpcode());
// };


auto log_backend_event = [](const std::string& stage, const std::string& pattern_name, const std::string& pattern_type, bool match_success) {
    // data_globalisel.emplace_back({to_string(current_stage), event, MI.getParent()->getParent(), MI.getParent(), MI2String(MI), MI2String(MI), pattern});
    data_globalisel_patterns.emplace_back(GlobalISelDataPattern{stage, pattern_name, pattern_type, match_success});
};
} // end namespace llvm...

// template <typename T1, typename T2, typename T3>
// inline bool mi_match_wrapper(T1&& a, T2&& b, T3&& c) {
//     llvm::outs() << "\t\t\t\t\t" << __PRETTY_FUNCTION__ << "\n";
//     return mi_match(std::forward<T1>(a), std::forward<T2>(b), std::forward<T3>(c));
// }
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

template <typename T1, typename T2, typename T3>
inline bool mi_match_wrapper2(T1&&, T2&&, T3&&, bool flag) {
    if (flag) {
        if (auto result = extractT3Type(__PRETTY_FUNCTION__)) {
            std::string t3type = *result;
            t3type = std::regex_replace(t3type, std::regex("llvm::MIPatternMatch::bind_ty<Register>"), "Register");
            t3type = std::regex_replace(t3type, std::regex("llvm::MIPatternMatch::bind_ty<MachineInstr*>"), "MachineInstr*");
            t3type = std::regex_replace(t3type, std::regex("llvm::MIPatternMatch::bind_ty<LLT>"), "LLT");
            t3type = std::regex_replace(t3type, std::regex("llvm::MIPatternMatch::bind_ty<CmpInst::Predicate>"), "CmpInst::Predicate");
            // if (t3type.find("MachineInstr") != std::string::npos) {
            //   t3type = "MachineInstr";
            // } else if (t3type.find("MachineOperand") != std::string::npos) {
            //   t3type = "MachineOperand";
            // } else if (t3type.find("MachineRegisterInfo") != std::string::npos) {
            //   t3type = "MachineRegisterInfo";
            // }
            llvm::outs() << "\t\t\t\t\tPattern: " << t3type << "\n";
        } else {
            llvm::outs() << "\t\t\t\t\tPattern not found\n";
        }
    }
    return flag;
    // return mi_match(std::forward<T1>(a), std::forward<T2>(b), std::forward<T3>(c));
}

inline void simplifyBindTy(std::string& str) {
    const std::string start_marker = "llvm::MIPatternMatch::bind_ty<";
    size_t start_pos;

    // Loop as long as we can find a new occurrence of the start_marker
    while ((start_pos = str.find(start_marker)) != std::string::npos) {
        // --- This part is the same: find the matching bracket ---
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
            // --- This part is new: extract content and replace ---

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
  constexpr bool is_T1_Register = std::is_same<std::decay_t<T1>, llvm::Register>::value;

  std::string file_cleaned = std::regex_replace(file, std::regex("/libraries/llvm-project/llvm/"), "");
  std::string pattern = *extractT3Type(__PRETTY_FUNCTION__);
  simplifyBindTy(pattern);
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<Register>"), "Register");
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<MachineInstr*>"), "MachineInstr*");
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<LLT>"), "LLT");
  // pattern = std::regex_replace(pattern, std::regex("llvm::MIPatternMatch::bind_ty<CmpInst::Predicate>"), "CmpInst::Predicate");

  llvm::outs() << "\t\t\t\t\t" << __func__ << ": " << caller << " | " << pattern << " | " << (is_T1_MachineInstr? "MachineInstr" : "Register") << " (" << file_cleaned << ":" << line << ")\n";
  // llvm::outs() << "\t\t\t\t\tT1 is MachineInstr: " << is_T1_MachineInstr << ", T1 is Register: " << is_T1_Register << "\n";
  // if (!is_T1_Register) {
  //   log_backend_event("mi_match", caller, pattern, true);
  // }
  bool result = mi_match(std::forward<T1>(a), std::forward<T2>(b), std::forward<T3>(c));
  llvm::log_backend_event(llvm::to_string(llvm::current_stage), caller, pattern, result? true : false);
  return result;
}
