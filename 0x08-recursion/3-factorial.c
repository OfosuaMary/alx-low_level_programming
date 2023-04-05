#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: integer parameter
 * Return: -1 if n < 0 or positive interger if otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
