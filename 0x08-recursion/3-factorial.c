#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
