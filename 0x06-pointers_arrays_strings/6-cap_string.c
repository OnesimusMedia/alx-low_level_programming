#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap = 1;

	while (*ptr)
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' ||
				*ptr == '.' || *ptr == '!' ||
				*ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' ||
				*ptr == '{' || *ptr == '}')
		{
			cap = 1;
		}
		else if (cap && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			cap = 0;
		}
		else
		{
			cap = 0;
		}
		ptr++;
	}

	return (str);
}
