#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: initial number
 * Return: void
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d\n", n);
			break;
		}

	}
}
