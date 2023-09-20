#include "main.h"

#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *pointer = dest;

	while (*pointer)
	{
		pointer++;
	}

	while (*src)
	{
		*pointer = *src;
		pointer++;
		src++;
	}

	*pointer = '\0';

	return (dest);
}
