#include "main.h"

/**
 * _strlen - the length of a string.
 * @s: int variable
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int conta = 0, i;

	while (*(s + i) != '\0')
	{
		i++;
		conta++;
	}

	return (conta);
}
