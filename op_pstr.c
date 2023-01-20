#include "monty.h"

/**
 * op_pstr - print the string starting from the top of the stack
 * @sp: stack pointer
 */
void op_pstr(stack_t **sp)
{
	stack_t *p = NULL;

	if (*sp)
	{
		(*sp)->next->prev = NULL;

		for (p = *sp; p && p->n > 0 && p->n < 128; p = p->prev)
			putchar(p->n);

		(*sp)->next->prev = *sp;
	}

	putchar('\n');
}
