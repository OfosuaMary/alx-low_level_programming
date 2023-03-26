#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print ntimes table
 * @n: n times table
 * Returns: void
 */
void print_times_table(int n)
{
	int a, b, c;

	if ((n > 15) || (n < 0))
	{
	}
	else
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if ((c < 10) && (b != 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (b == 0)
			{
				_putchar(c + '0');
			}
			else if ((c >= 10) && (c < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				printf("%d", c);
			}
			else
			{
				printf(", %d", c);
			}
		}
		_putchar('\n');
	}
	}
}
