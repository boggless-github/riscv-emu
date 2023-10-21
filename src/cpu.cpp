#include <cpu.hpp>

/* 
 * Using uword means that this register is part of
 * the CPU, using any other type of integer means
 * it is simply part of the emulator. 
 * ex: uint64_t CPU::Hart::Cache::page_cnt 
 * is part of the emulator
 */
