#include "main.h"

/**
 * times_table - Entry Point
 * Description: Prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, ans, tens, unit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i*j;
			_putchar(ans);
		}
	}
}
