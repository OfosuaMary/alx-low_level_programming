#include "main.h"
/**
 * _isdigit -checks for a digit  0 to 9
 * @c: intefer parameter
 * Return: 0 if not digit otherwise 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
