#include "main.h"
/**
 * print_rev - prints string reverse
 * @s: String parameter
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}
