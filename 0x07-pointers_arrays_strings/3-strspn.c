#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn - get the length of a prefix string
 * @s: string parameter
 * @accept: string parameter
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			else
			{
			}
		}
		if (*(accept + j) == '\0')
			return (i);
	}
	return (i);
}
