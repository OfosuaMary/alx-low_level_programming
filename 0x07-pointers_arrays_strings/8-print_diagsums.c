#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of 2 diagonals
 * @a: pointer of integer
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, r, w, g, count;

	w = 0;
	g = 0;
	count = size + 1;
	for (i = 0; i < size; i++)
	{
		w = w + *(a + (count * i));
	}
	printf("%d, ", w);
	count = size - 1;
	for (r = 1; r <= size; r++)
	{
		g = g + *(a + (count * r));
	}
	printf("%d\n", g);
}
