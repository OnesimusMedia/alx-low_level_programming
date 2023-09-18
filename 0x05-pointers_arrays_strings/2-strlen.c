#include "main.h"

/**
 * _strlen - the length of a string.
 * @s: int variable
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
