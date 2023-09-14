#include "main.h"

/**
 * print_numbers - numbers void 0 to 9.
 *
 *
 * Return: void.
 *
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
