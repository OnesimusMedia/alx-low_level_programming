#include "main.h"

/**
 * print_triangle -  triangle with # and a new line.
 * @size:  size of the triangley
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, diff;

		for (i = 0; i < size; i++)
		{
			diff = size - i;
			for (j = 1; j <= size; j++)
			{
				if (j >= diff)
				{
					_putchar(35);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
