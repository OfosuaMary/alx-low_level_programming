#include <stdio.h>
/**
 * main - print 1st 50 fibonnaci start with 1 and 2
 * Return: returns 0
 */
int main(void)
{
	unsigned long sum, a, b, c;

	a = 1;
	b = 2;
	c = 0;
	sum = 0;
	printf("%lu, %lu", a, b);
	while (1)
	{
		if (c <= 4000000)
		{
		c = a + b;
		if ((c % 2) == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
