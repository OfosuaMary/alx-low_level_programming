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
	int alph2;

	while (alph <= '7')
	{
		alph1 = alph + 1;
		while (alph1 <= '8')
		{
			alph2 = alph1 + 1;
			while (alph2 <= '9')
			{
			putchar(alph);
			putchar(alph1);
			putchar(alph2);
			if ((alph == '7') && (alph1 == '8') && (alph2 == '9'))
			{
				break;
			}
			else
			{
			/*	putchar(alph);*/
			/*	putchar(alph1);*/
				putchar(',');
				putchar(' ');
			}
			alph2++;
		}
			alph1++;
		}
		alph++;
	}
		putchar('\n');
	return (0);
}
