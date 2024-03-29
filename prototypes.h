#ifndef _PROTOTYPES_H_
#define _PROTOTYPES_H_
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define delim " \t\r\n"

extern char **environ;

int _strcmp(char *s1, char *s2);
void ctrlc(int sig_num);
int exit_func(char *my_str);

#endif
