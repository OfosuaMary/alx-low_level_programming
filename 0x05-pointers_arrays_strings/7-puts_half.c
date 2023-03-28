#include "main.h"
/**
 * puts_half - prints string reverse
 * @s: String parameter
 * Return: void
 */
void puts_half(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	if((len % 2) == 1)
	{
		 len = (len - 1) / 2;
	}
	else
	{
	len = len / 2;
	len -= 1;
	}
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
