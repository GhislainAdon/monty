#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

typedef void (*instruction_fn)(stack_t **);

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @fn: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	instruction_fn fn;
} instruction_t;

/**
 * enum stack_mode_n - stack mode enumeration
 * @LIFO: operate as a stack
 * @FIFO: operate as a queue
 */
typedef enum stack_mode_n
{
	LIFO = 0,
	FIFO = 1
} stack_mode_t;

/**
 * struct op_env_s - operation environment
 * @sp: top of the stack
 * @argv: argument vector
 * @line: line buffer
 * @linesz: line buffer size
 * @lineno: line number
 * @mode: stack operation mode
 */
typedef struct op_env_s
{
	stack_t *sp;
	char **argv;
	char *line;
	size_t linesz;
	size_t lineno;
	stack_mode_t mode;
} op_env_t;

extern op_env_t op_env;

instruction_fn get_instruction_fn(const char *opcode);

void op_add(stack_t **sp);
void op_div(stack_t **sp);
void op_mod(stack_t **sp);
void op_mul(stack_t **sp);
void op_nop(stack_t **sp);
void op_pall(stack_t **sp);
void op_pchar(stack_t **sp);
void op_pint(stack_t **sp);
void op_pop(stack_t **sp);
void op_pstr(stack_t **sp);
void op_push(stack_t **sp);
void op_queue(stack_t **sp);
void op_rotl(stack_t **sp);
void op_rotr(stack_t **sp);
void op_stack(stack_t **sp);
void op_sub(stack_t **sp);
void op_swap(stack_t **sp);

char **tokenize(char *str);
size_t count_tokens(const char *str);

void free_op_env(void);
void free_stack(stack_t **sp);

void pfailure(const char *fmt, ...);

int isinteger(const char *str);

#endif /* MONTY_H */
