#include "main.h"

/**
 * print_most_numbers - numbers void 0 to 9 ex. 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + c);
		}
		c++;
	}
	_putchar('\n');
}
