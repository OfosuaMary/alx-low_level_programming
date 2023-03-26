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
				printf(",   %d", c);
			}
			else if (b == 0)
			{
				printf("%d", c);
			}
			else if ((c >= 10) && (c < 100))
			{
				printf(",  %d", c);
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
