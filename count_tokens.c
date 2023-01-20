#include "monty.h"
#include <ctype.h>

/**
 * count_tokens - count the words in a string
 * @str: the string to evaluate
 *
 * Return: Return the number of tokens in str.
 */
size_t count_tokens(const char *str)
{
	size_t count = 0;

	while (*str)
	{
		while (isspace(*str))
			++str;
		if (!*str)
			break;
		do {
			++str;
		} while (*str && !isspace(*str));

		++count;
	}
	return (count);
}

