#include "main.h"

/**
 * print_alphabet -  print alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 1;
        char ch;

	while (i >= 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
	}
}

