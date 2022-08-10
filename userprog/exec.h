#ifndef __USERPROG__EXEC_H
#define __USERPROG__EXEC_H

#include "stdint.h"
#include "string.h"
#include "../thread/thread.h"

static bool segment_load(int32_t fd, uint32_t offset, uint32_t filesz, uint32_t vaddr);
static int32_t load(const char* pathname);
int32_t sys_execv(const char* path, const char* argv[]);

#endif