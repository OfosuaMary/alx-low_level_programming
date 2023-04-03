#include "main.h"
/**
 * _memset - fills memory with constant
 * @s: string pointer
 * @b: parameter of type char
 * @n: number of bytes
 * Return: address of string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
