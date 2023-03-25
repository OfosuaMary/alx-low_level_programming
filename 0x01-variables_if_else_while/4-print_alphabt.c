#include <stdio.h>
/**
 * main - print out lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if ((alph == 'q') || (alph == 'e'))
		{
			alph++;
		}
		else
		{
			putchar(alph);
			alph++;
		}
	}
	putchar('\n');
	return (0);
}
