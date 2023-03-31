#include "main.h"
/**
 * string_toupper - coverts from lower to uppercase
 * @n: string parameter
 * Return: string pointer
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
		{
			n[i] = n[i] - 32;
		}
		else
		{
			n[i] = n[i];
		}
		i++;
	}
	return (n);
}
