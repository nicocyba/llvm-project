#pragma once

#include <vector>
#include <string>
#include <regex>
#include "llvm/CodeGen/MachineInstr.h"


namespace llvm {

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