#include <stdio.h>
/**
 * main - prints singledigits of base 10
 * Return: 0
 */
int main(void)
{
	int alph = '0';

	while (alph <= '9')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
