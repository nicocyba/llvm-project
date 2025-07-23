#pragma once

#include <vector>
#include <string>
#include <regex>
#include "llvm/CodeGen/MachineInstr.h"
#include "llvm/CodeGen/MachineCombinerPattern.h"

namespace llvm {

// AArch64 MachineCombiner patterns
enum AArch64MachineCombinerPattern2 : unsigned {
  // These are patterns used to reduce the length of dependence chain.
  SUBADD_OP1 = MachineCombinerPattern::TARGET_PATTERN_START,
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

inline thread_local bool is_globalisel = false;

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

struct GlobalISelData {
  std::string caller; // irtranslator, legalizer, ...
  std::string event; // created, deleted, special
  std::string mf; //mf name
  std::string mbb; // mbb name
  std::string mi_before; // mi name
  std::string mi_after; // mi name
};

// Use a thread_local wrapper with a destructor to clear the vector on thread exit.
struct MachineCombinerDataVector : public std::vector<MachineCombinerData> {
  ~MachineCombinerDataVector() { 
    for (auto &i : *this) {
      i.inserted.clear();
      i.deleted.clear();
    }
    this->clear(); 
  }
};

struct GlobalISelDataVector : public std::vector<GlobalISelData> {
  ~GlobalISelDataVector() { 
    // for (auto &i : *this) {
    //   i.inserted.clear();
    //   i.deleted.clear();
    // }
    this->clear(); 
  }
};

inline thread_local MachineCombinerDataVector data_machinecombiner;
inline thread_local GlobalISelDataVector data_globalisel;
inline thread_local std::vector<std::tuple<const std::string, const std::string, unsigned>> data_gicombiner;

auto logEvent = [](const std::string& Event, MachineInstr &MI) {
  std::string InstrStr;
  llvm::raw_string_ostream OS(InstrStr);
  MI.print(OS);
  OS.flush();
  InstrStr = std::regex_replace(InstrStr, std::regex("\\n"), "");
  data_gicombiner.emplace_back(Event, InstrStr, MI.getOpcode());
};

auto MI2String = [](MachineInstr &MI) {
  std::string InstrStr;
  llvm::raw_string_ostream OS(InstrStr);
  MI.print(OS);
  OS.flush();
  InstrStr = std::regex_replace(InstrStr, std::regex("\\n"), "");
  return InstrStr;
};
} // end namespace llvm