#include "main.h"
/**
 * _print_rev_recursion - print reverse of a string
 * @s: string parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
