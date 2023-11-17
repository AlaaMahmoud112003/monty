#ifndef MAIN_H
#define MAIN_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_my - doubly linked list 
 * @m: int
 * @prevc: data
 * @nexted: data
 * Description: doubly linked list 
 */
typedef struct stack_my
{
        int m;
        struct stack_my *prevc;
        struct stack_my *nexted;
} stack_t;

/**
 * struct instruction_my - oparation code and function
 * @myopcode: oparation code
 * @func: that function handles the opcode
 * Description: oparation code and its function
 */
typedef struct instruction_my
{
        char *myopcode;
        void (*func)(stack_t **mystack, unsigned int myline_number);
} instruction_t;

extern stack_t *headd;
typedef void (*oparation_func)(stack_t **, unsigned int);
void myopen_file(char *fi_name);
int myparse_line(char *buffer, int myline_number, int form);
void myread_file(FILE *);
int mylen_chars(FILE *);
void myfind_func(char *, char *, int, int);
stack_t *mycreate_node(int m);
void myfree_nodes(void);
void myprint_stack(stack_t **, unsigned int);
void myadd_to_stack(stack_t **, unsigned int);
void myadd_to_queue(stack_t **, unsigned int);
void mycall_fun(oparation_func, char *, char *, int, int);
void myprint_top(stack_t **, unsigned int);
void mypop_top(stack_t **, unsigned int);
void mynop(stack_t **, unsigned int);
void myswap_nodes(stack_t **, unsigned int);
void myadd_nodes(stack_t **, unsigned int);
void mysub_nodes(stack_t **, unsigned int);
void mydiv_nodes(stack_t **, unsigned int);
void mymul_nodes(stack_t **, unsigned int);
void mymod_nodes(stack_t **, unsigned int);
void myprint_char(stack_t **, unsigned int);
void myprint_str(stack_t **, unsigned int);
void myrotl(stack_t **, unsigned int);
void myerror(int error_cd, ...);
void mymore_error(int error_cd, ...);
void mystring_error(int error_cd, ...);
void myrotr(stack_t **, unsigned int);
#endif
