#include <stdio.h>
/**
 * main - print out lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
