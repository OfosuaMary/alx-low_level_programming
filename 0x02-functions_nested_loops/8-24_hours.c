#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e;

	 e = 1;
	for (a = '0'; a <= '2'; a++)
	{
		if (e == 1)
		{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if ((a == 2) && (b == 3) && (c == 5) && (d == 9))
					{
						e = 0;
					}
					else
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
		}
		else
		{
			break;
		}
	}
}
