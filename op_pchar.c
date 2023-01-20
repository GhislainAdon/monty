#include "monty.h"

/**
 * op_pchar - print the character at the top of the stack
 * @sp: stack pointer
 */
void op_pchar(stack_t **sp)
{
	if (*sp)
	{
		if ((*sp)->n > 0 && (*sp)->n < 128)
			printf("%c\n", (*sp)->n);
		else
			pfailure("L%u: can't pchar, value out of range\n", op_env.lineno);
	}
	else
		pfailure("L%u: can't pchar, stack empty\n", op_env.lineno);


}
