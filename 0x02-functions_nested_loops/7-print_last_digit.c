#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - prints the last digit of a number
 * @a: received number
 * Return: last digit
 */
int print_last_digit(int a)
{
	int w;

	w = a % 10;
	if (w <0)
	{
		w = -1 * w;
	}
	_putchar(w + '0');
	return (w);
}
