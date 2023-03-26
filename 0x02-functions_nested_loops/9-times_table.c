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
		for (a = 0; a <= 9; b++)
		{
			c = a * b;
			_putchar(c + '0')
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
