#include "monty.h"
#include <ctype.h>
#include <string.h>

/**
 * tokenize - split a string into words
 * @str: the string to tokenize
 *
 * Return: If memory allocation fails, or if str is NULL or contains no words,
 * return NULL. Otherwise, return a NULL-terminated array of the words in str.
 */
char **tokenize(char *str)
{
	char **tokens = NULL;
	size_t count = 0;

	if (!str)
		return (NULL);

	count = count_tokens(str);
	if (!count)
		return (NULL);

	tokens = malloc(sizeof(char *) * (count + 1));
	if (!tokens)
		return (NULL);

	for (count = 0; *str; ++count)
	{
		while (isspace(*str))
			*str++ = '\0';
		if (*str)
			tokens[count] = str;
		else
			break;
		do {
			++str;
		} while (*str && !isspace(*str));
	}
	tokens[count] = NULL;

	return (tokens);
}
