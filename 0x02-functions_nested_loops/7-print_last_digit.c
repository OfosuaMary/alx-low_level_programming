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
	write(1, w, 1);
	return (w);
}
