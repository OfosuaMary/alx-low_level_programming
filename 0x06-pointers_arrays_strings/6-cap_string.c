#include "main.h"
/**
 * cap_string - coverts from lower to uppercase
 * @n: string parameter
 * Return: string pointer
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
		{
			if ((n[i - 1] == ' ') || (n[i - 1] == '\t') ||
				(n[i - 1] == ',') || (n[i - 1] == '\n') ||
				(n[i - 1] == ';') || (n[i - 1] == '.') ||
				(n[i - 1] == '!') || (n[i - 1] == '?') ||
				(n[i - 1] == '"') || (n[i - 1] == '(') ||
				(n[i - 1] == ')') || (n[i - 1] == '{') ||
				(n[i - 1] == '}'))
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
