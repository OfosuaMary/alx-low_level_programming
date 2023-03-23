#include "main.h"
/**
 * print_sign - checks for sign of a number
 * @n: character tobe checked
 * Return: 1 if greater than 0 or 0 equal to 0 or -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}