#include "main.h"
/**
 * print_array - print n elements of an array
 * @a: string parameter
 * @n: integer paramerer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
		{
		}
		else
		{
			printf(", ");
		}
		i++;
	}
	_putchar('\n');
}
