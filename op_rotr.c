#include "monty.h"

/**
 * op_rotr - rotate downward (toward bottom of stack)
 * @sp: stack pointer
 */
void op_rotr(stack_t **sp)
{
	if (*sp)
		*sp = (*sp)->next;
}
