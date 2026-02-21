/* CPU detection stub for SIM_BACKEND - no CPUID or x87 precision needed */

int _cpu_detect_asm(void) {
  return 6; /* report Pentium Pro / P6 class */
}

void single_precision_asm(void) {
  /* no-op in simulation */
}

void double_precision_asm(void) {
  /* no-op in simulation */
}
