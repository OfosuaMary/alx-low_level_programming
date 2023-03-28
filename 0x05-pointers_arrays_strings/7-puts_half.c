#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string as parameter
 * Return: void
 */
void puts_half(char *str)
{
	int len, i  = 0;

	_putchar('s');
	while (str[i] != '\0')
	{
		i++;
		_putchar(len);
	}
	if ((len % 2) == 1)
	{
		i = (len - 1) / 2;
		_putchar(i);
	}
	else
	{
		i = len / 2;
		_putchar(i);
		_putchar(i);
	}
	while (str[i] != '\0')
	{
		_putchar('k');
		if ((i % 2) == 0)
		{
		_putchar(str[i]);
		}
		else
		{
		}
		i++;
	}
		_putchar('\n');
}
