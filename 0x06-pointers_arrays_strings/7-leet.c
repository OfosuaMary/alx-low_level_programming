#include "main.h"
/**
 * leet - coverts from lower to uppercase
 * @n: string parameter
 * Return: string pointer
 */
char *leet(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if ((n[i] == 'a') || (n[i] == 'A'))
		{
			n[i] = '4';
		}
		else if ((n[i] == 'E') || (n[i] == 'e'))
		{
			n[i] = '3';
		}
		else if ((n[i] == 'O') || (n[i] == 'o'))
		{
			n[i] = '0';
		}
		else if ((n[i] == 't') || (n[i] == 'T'))
		{
			n[i] = '7';
		}
		else if ((n[i] == 'L') || (n[i] == 'l'))
		{
			n[i] = '1';
		}
		i++;
	}
	return (n);
}
