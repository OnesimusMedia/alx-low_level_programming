#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *pointer = str;

	while (*pointer)
	{
		if (*pointer >= 'a' && *pointer <= 'z')
		{
			*pointer = *pointer - 32;
		}
		pointer++;
	}

	return (str);
}
