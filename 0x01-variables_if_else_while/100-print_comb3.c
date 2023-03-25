#include <stdio.h>
#include <unistd.h>
/**
 * main - prints double  digits
 * Return: 0
 */
int main(void)
{
	int alph = '0';
	int alph1;

	while (alph <= '8')
	{
		alph1 = '1';
		while (alph1 <= '9')
		{
			putchar(alph);
			putchar(alph1);
			if ((alph == '8') && (alph1 == '9'))
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			alph1++;
		}
		alph++;
	}
		putchar('\n');
	return (0);
}
