#include "main.h"

/**
 * times_table - prints the 9 mult table
 *
 * Retun: void
 *
 */
void times_table(void)
{
	int a,  b, p;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');


			p = a * b;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p% 10) + '0');
		}
		_putchar('\n');
	}
}
