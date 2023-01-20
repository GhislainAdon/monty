#include "monty.h"

/**
 * op_sub - sub the top two elements on the stack
 * @sp: stack pointer
 */
void op_sub(stack_t **sp)
{
	int to_sub = 0;

	if (!(*sp && *sp != (*sp)->next))
		pfailure("L%u: can't sub, stack too short\n", op_env.lineno);

	to_sub = (*sp)->n;

	op_pop(sp);

	(*sp)->n -= to_sub;
}
