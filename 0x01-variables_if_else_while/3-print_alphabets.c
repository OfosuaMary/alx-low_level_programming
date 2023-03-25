#include <stdio.h>
/**
 * main - print out lowercase alphabet followed but uppercase alphabets
 * Return: 0
 */
int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (1)
	{
		if (alph <= 'z')
		{
			putchar(alph);
			alph++;
		}
		else if ((alph > 'z') && (ALPH <= 'Z'))
		{
			putchar(ALPH);
			ALPH++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
