#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n: line whit down slash
 *
 * Return: void.
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
