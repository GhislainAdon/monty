#include "monty.h"

/**
 * op_push - push an element onto the stack
 * @sp: stack pointer
 */
void op_push(stack_t **sp)
{
	stack_t *new = NULL;
	const char *nstr = op_env.argv[1];

	if (!(nstr && isinteger(nstr)))
		pfailure("L%u: usage: push integer\n", op_env.lineno);

	new = malloc(sizeof(*new));
	if (!new)
		pfailure("Error: malloc failed\n");

	new->n = atoi(nstr);
	if (*sp)
	{
		new->prev = (*sp);
		new->next = (*sp)->next;
		new->next->prev = new;
		(*sp)->next = new;
		if (op_env.mode == LIFO)
			(*sp) = new;
	}
	else
	{
		new->prev = new;
		new->next = new;
		(*sp) = new;
	}
}
