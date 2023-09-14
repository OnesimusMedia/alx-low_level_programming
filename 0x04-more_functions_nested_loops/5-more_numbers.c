#include "main.h"

/**
 * more_numbers - 10 times numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			int q;

			if (k > 9)
			{
				q = k / 10;
			}
			else
			{
				q = k;
			}
			_putchar(q + '0');
			if (k > 9)
				_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
