#ifndef _MONTY_H_
#define _MONTY_H_

#define  _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct allow - this checks the line of code
 * @drag: this is the argument
 * @paper: this points to the code paper
 * @input: this is the input code
 * @que: this changes que
 * Description: this describes the code
 */

typedef struct allow
{
	char *drag;
	FILE *paper;
	char *input;
	int que;
} bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *resize(char *ptr, unsigned int due, unsigned int pext);
ssize_t readin(char **line, int paper);
char *sanitize(char *input);
void push_t(stack_t **stk, unsigned int cnt);
void print_all(stack_t **stk, unsigned int cnt);
void print_int(stack_t **stk, unsigned int cnt);
int ops(char *input, stack_t **stk, unsigned int cnt, FILE *paper);
void free_mem(stack_t *stk);
void pop_t(stack_t **stk, unsigned int cnt);
void swap_t(stack_t **stk, unsigned int cnt);
void add_t(stack_t **stk, unsigned int cnt);
void nop_t(stack_t **stk, unsigned int cnt);
void sub_t(stack_t **stk, unsigned int cnt);
void div_to(stack_t **stk, unsigned int cnt);
void mul_t(stack_t **stk, unsigned int cnt);
void mod_t(stack_t **stk, unsigned int cnt);
void p_char(stack_t **stk, unsigned int cnt);
void p_str(stack_t **stk, unsigned int cnt);
void rotl_t(stack_t **stk, unsigned int cnt);
void rotr_t(stack_t **stk, __attribute__((unused)) unsigned int cnt);
void node_t(stack_t **stk, int n);
void enqueue_t(stack_t **stk, int n);
void queue_t(stack_t **stk, unsigned int cnt);
void st_p(stack_t **stk, unsigned int cnt);

#endif
