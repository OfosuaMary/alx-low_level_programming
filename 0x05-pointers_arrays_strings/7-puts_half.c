#include "main.h"
/**
 * puts_half - prints string reverse
 * @s: String parameter
 * Return: void
 */
void puts_half(char *s)
{
	int len, i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
		if ((len % 2) == 1)
		{
		 	i = (len - 1) / 2;
		}
		else
		{
			i = len / 2;
		}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
