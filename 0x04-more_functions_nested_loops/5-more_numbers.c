#include "main.h"
/**
 * more_numbers - print numbers 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count <= 10; count++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}
