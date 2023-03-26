#include "main.h"
/**
 * times_table - print 9times table
 * Returns: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c < 10)
			{
				_putchar(c + '0');
				if (b == 9)
				{
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			else
			{
				int g = c % 10;
				int h = c / 10;

				_putchar(h + '0');
				_putchar(g + '0');
				if (b != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
				else
				{
				}
			}
		}
		_putchar('\n');
	}
}
