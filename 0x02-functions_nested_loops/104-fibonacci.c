#include <stdio.h>
/**
 * main - print 1st 50 fibonnaci start with 1 and 2
 * Return: returns 0
 */
int main(void)
{
	int count;
	unsigned long a, b, c;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);
	for (count = 1; count <= 96; count++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
