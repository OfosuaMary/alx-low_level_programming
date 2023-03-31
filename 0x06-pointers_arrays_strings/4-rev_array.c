#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse content of an array of integers
 * @a: integer pointer
 * @n: number of element in the array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int r, i = 0;

	for (; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
