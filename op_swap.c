#include "monty.h"

/**
 * op_swap - swap the top two elements on the stack
 * @sp: stack pointer
 */
void op_swap(stack_t **sp)
{
	stack_t *p = *sp;

	if (!(p && p != p->next))
		pfailure("L%u: can't swap, stack too short\n", op_env.lineno);

	p->n ^= p->prev->n;
	p->prev->n ^= p->n;
	p->n ^= p->prev->n;
}
