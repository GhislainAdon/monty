#include "monty.h"

/**
 * op_div - div the top two elements on the stack
 * @sp: stack pointer
 */
void op_div(stack_t **sp)
{
	int to_div = 0;

	if (!(*sp && *sp != (*sp)->next))
		pfailure("L%u: can't div, stack too short\n", op_env.lineno);

	to_div = (*sp)->n;
	if (!to_div)
		pfailure("L%u: division by zero\n", op_env.lineno);

	op_pop(sp);

	(*sp)->n /= to_div;
}
