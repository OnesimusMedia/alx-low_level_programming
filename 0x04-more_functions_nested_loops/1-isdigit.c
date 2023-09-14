#include "main.h"

/**
 * _isdigit - character is a digit
 * @c: number checked
 *
 * Return: 1 for character or 0 for others
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
