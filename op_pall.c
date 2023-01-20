#include "monty.h"

/**
 * op_pall - print each element on the stack
 * @sp: stack pointer
 */
void op_pall(stack_t **sp)
{
	stack_t *p = NULL;

	if (*sp)
	{
		(*sp)->next->prev = NULL;

		for (p = *sp; p; p = p->prev)
			printf("%d\n", p->n);

		(*sp)->next->prev = *sp;
	}
}
