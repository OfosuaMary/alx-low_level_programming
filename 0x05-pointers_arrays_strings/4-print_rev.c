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
	len -= 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}