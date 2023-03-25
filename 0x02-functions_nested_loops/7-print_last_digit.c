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
	char c;

	w = a % 10;
 	c = char(w);
	_putchar(c);
	return (w);
}
