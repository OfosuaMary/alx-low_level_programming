#include <stdio.h>
/**
 * main - print out numbers base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num = '0';
	char alph = 'a';

	while (1)
	{
		if (num <= '9')
		{
			putchar(num);
			num++;
		}
		else if ((num > '9') && (alph <= 'f'))
		{
			putchar(alph);
			alph++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
