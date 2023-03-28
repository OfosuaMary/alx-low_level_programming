#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string as parameter
 * Return: void
 */
void puts_half(char *str)
{
	int len, i  = 0;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 1)
	{
		i = (len - 1) / 2;
	}
	else
	{
		i = (len / 2) + 1;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
