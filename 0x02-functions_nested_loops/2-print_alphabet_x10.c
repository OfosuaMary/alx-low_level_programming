#include "main.h"

/**
 * print_alphabet_x10 -  print alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char ch;

	while (i <= 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	i++;
	_putchar('\n');
	}
}

