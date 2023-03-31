#include "main.h"
#include <stddef.h>
/**
 * _strncat - concantenates two strings
 * @dest: character pointer
 * @src: character pointer
 * @n - count
 * Return: string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i + j] = src[j];
		         j++;
		}
		else 
		{
			break;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}
