#include "main.h"
/**
 * rev_string - prints string reverse
 * @s: String parameter
 * Return: void
 */
void rev_string(char *s)
{
	int len, i = 0;
	char rev[] = NULL;

	while (s[len] != '\0')
	{
	len++;
	}
	while (len >= 0)
	{
		rev[i] == s[len];
		len--;
		i++;
	}
	s = rev;
}
