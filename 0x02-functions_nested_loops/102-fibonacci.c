#include <stdio.h>
/**
 * main - print 1st 50 fibonnaci start with 1 and 2
 * Return: returns 0
 */
int main(void)
{
	int count, a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d", a, b);
	for (count = 1; count <= 50; count++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
