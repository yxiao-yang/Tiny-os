#ifndef __LIB_USER_SYSCALL_H
#define __LIB_USER_SYSCALL_H
#include "stdint.h"

enum SYSCALL_NR {
   SYS_GETPID,
   SYS_WRITE,
   SYS_MALLOC,
   SYS_FREE,
   SYS_FORK,
   SYS_READ,
   SYS_PUTCHAR,
   SYS_CLEAR,
   SYS_GETCWD,
   SYS_OPEN,
   SYS_CLOSE,
   SYS_LSEEK,
   SYS_UNLINK,
   SYS_MKDIR,
   SYS_OPENDIR,
   SYS_CLOSEDIR,
   SYS_CHDIR,
   SYS_RMDIR,
   SYS_READDIR,
   SYS_REWINDDIR,
   SYS_STAT,
   SYS_PS,
   SYS_EXECV,
   SYS_EXIT,
   SYS_WAIT,
   SYS_PIPE,
   SYS_FD_REDIRECT,
   SYS_HELP
};

uint32_t getpid(void);
uint32_t write(int32_t fd, const void* buf, uint32_t count);
void* malloc(uint32_t size);
void free(void* ptr);
int32_t fork(void);
int32_t pipe(int32_t pipefd[2]);
#endif
