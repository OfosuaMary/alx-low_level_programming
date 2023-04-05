#include "main.h"
/**
 * _pow_recursion - finds the value of x raised to the power y
 * @x: integer parameter
 * @y: integer parameter
 * Return: -1 if y<0, positive number if otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
