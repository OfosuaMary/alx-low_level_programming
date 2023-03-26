#include <stdio.h>
/**
 * main - print sum of multiples of 3 and 5 of 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int a, sum;

	sum = 0;
	for (a = 1023; a > 0; a--)
	{
		if ((a % 5) == 0)
		{
			sum += a;
		}
		else if ((a % 3) == 0)
		{
			sum += a;
		}
		else
		{
		}
	}
	printf("%d\n", sum);
	return (0);
}
