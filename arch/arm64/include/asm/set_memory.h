/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 */

#ifndef _ASM_ARM64_SET_MEMORY_H
#define _ASM_ARM64_SET_MEMORY_H

#include <asm-generic/set_memory.h>

/* Prototypes for backported functions in mm/pageattr.c */
int set_memory_ro(unsigned long addr, int numpages);
int set_memory_rw(unsigned long addr, int numpages);
int set_memory_x(unsigned long addr, int numpages);
int set_memory_nx(unsigned long addr, int numpages);
int set_memory_valid(unsigned long addr, int numpages, int enable);

#endif /* _ASM_ARM64_SET_MEMORY_H */