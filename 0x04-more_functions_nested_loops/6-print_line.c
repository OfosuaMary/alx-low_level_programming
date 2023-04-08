#include "main.h"
/**
 * print_line - draw straight line in terminal
 * @n: COUNT
 * return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}