#include <stdio.h>
#include <unistd.h>
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
		if (alph < '9')
		{
			putchar(',');
			putchar(' ');
		}
		alph++;
	}
		putchar('\n');
	return (0);
}
