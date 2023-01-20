#include "monty.h"

/**
 * op_add - add the top two elements on the stack
 * @sp: stack pointer
 */
void op_add(stack_t **sp)
{
	int to_add = 0;

	if (!(*sp && *sp != (*sp)->next))
		pfailure("L%u: can't add, stack too short\n", op_env.lineno);

	to_add = (*sp)->n;

	op_pop(sp);

	(*sp)->n += to_add;
}
