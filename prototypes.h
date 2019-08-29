#ifndef _PROTOTYPES_H_
#define _PROTOTYPES_H_
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <strings.h>
#include <limits.h>
#include <signal.h>

#define delim " \t\r\n"

extern char **environ;

int _strcmp(char *s1, char *s2);
void ctrlc(int sig_num);
int exit_func(char *my_str);
int _strcmp(char *s1, char *s2);
char *rm_enter(char *str);
char **new_argv(int argc, char *str);
int co_argc(char *str);
void free_grid(char **array, int lengthArray);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void no_interactive(char *buffer, char **argv, size_t buf_size);
void exec(char **argv, char *buf, int argc, int count);

#endif
