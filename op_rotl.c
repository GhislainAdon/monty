#include "monty.h"

/**
 * op_rotl - rotate upward (toward top of stack)
 * @sp: stack pointer
 */
void op_rotl(stack_t **sp)
{
	if (*sp)
		*sp = (*sp)->prev;
}
