#include "main.h"

/**
 * calculate_sqrt - Helper function to calculate the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, or -1 if not found.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (calculate_sqrt(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root if found, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (calculate_sqrt(n, 0));
}
