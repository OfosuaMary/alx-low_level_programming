#include <stdio.h>
/**
 * main - prints singledigits of base 10
 * Return: 0
 */
int main(void)
{
	int alph = 0;

	while (alph < 10)
	{
		printf("%d", alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
