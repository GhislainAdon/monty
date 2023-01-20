#include "monty.h"

/**
 * op_mod - mod the top two elements on the stack
 * @sp: stack pointer
 */
void op_mod(stack_t **sp)
{
	int to_mod = 0;

	if (!(*sp && *sp != (*sp)->next))
		pfailure("L%u: can't mod, stack too short\n", op_env.lineno);

	to_mod = (*sp)->n;
	if (!to_mod)
		pfailure("L%u: division by zero\n", op_env.lineno);

	op_pop(sp);

	(*sp)->n %= to_mod;
}
