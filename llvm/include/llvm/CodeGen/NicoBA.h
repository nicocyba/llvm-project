#pragma once

#include <vector>
#include <string>

#include "llvm/CodeGen/MachineInstr.h"


namespace llvm {


auto logEvent = [](const std::string& Event, MachineInstr &MI) {
  std::string InstrStr;
  llvm::raw_string_ostream OS(InstrStr);
  MI.print(OS);
  OS.flush();
  llvm::data_gicombiner.emplace_back(Event, InstrStr, MI.getOpcode());
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
inline thread_local MachineCombinerDataVector data_machinecombiner;
inline thread_local std::vector<std::tuple<const std::string, const std::string, unsigned>> data_gicombiner;
} // end namespace llvm