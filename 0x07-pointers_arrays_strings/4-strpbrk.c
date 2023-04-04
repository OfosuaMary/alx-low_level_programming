#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: Main sting
 * @accept: set of string for the search
 * Return: pointer of the first character found
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
