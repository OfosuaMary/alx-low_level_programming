#include <stdio.h>
/**
 * main - prints singledigits of base 10
 * Return: 0
 */
int main(void)
{
	int alph = '0';

	while (1)
	{
		if (alph < '9')
		{
			putchar(alph);
			putchar(',');
			putchar(' ');
			alph++;
		}
		else
		{
			putchar(alph);
			break;
		}
	}
	putchar('\n');
	return (0);
}
