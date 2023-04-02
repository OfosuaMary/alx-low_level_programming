#include "main.h"
/**
 * rot13 - coverts from lower to uppercase
 * @n: string parameter
 * Return: string pointer
 */
char *rot13(char *n)
{
	int j, i = 0;
	char normalSet[52] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char leetSet[52] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";

	while (n[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == normalSet[j])
			{
				n[i] = leetSet[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
