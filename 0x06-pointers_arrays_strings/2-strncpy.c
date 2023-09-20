#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies n characters from src to dest.
 * @dest: The destination string where the copy will be placed.
 * @src: The source string to be copied.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] =  src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
