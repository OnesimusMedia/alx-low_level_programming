#include "main.h"

/**
 * _isupper - more funtions check character is uppercase.
 *
 * @c: character for evaluation.
 * Return: 1 upper or 0 lower.
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
