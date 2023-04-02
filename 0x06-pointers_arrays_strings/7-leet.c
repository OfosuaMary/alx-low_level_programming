#include "main.h"
/**
 * leet - coverts from lower to uppercase
 * @n: string parameter
 * Return: string pointer
 */
char *leet(char *n)
{
	int j, i = 0;
	char normalSet[10] = "aAEeoOtTlL";
	char leetSet[10] = "4433007711";

	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == normalSet[j])
			{
				n[i] = leetSet[j];
			}
		}
		i++;
	}
	return (n);
}
