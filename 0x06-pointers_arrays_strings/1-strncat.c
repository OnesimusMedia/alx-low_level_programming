#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pointer = dest;

	while (*pointer)
	{
		pointer++;
	}

	while (*src && n > 0)
	{
		*pointer = *src;
		pointer++;
		src++;
		n--;
	}

	*pointer = '\0';

	return (dest);
}
