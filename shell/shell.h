#ifndef __SHELL_SHELL_H
#define __SHELL_SHELL_H

#include "stdint.h"

void print_prompt(void);
static void readline(char* buf,int32_t count);
void my_shell(void);
static int32_t cmd_parse(char* cmd_str,char** argv,char token);
static void cmd_execute(uint32_t argc, char** argv);

#endif
