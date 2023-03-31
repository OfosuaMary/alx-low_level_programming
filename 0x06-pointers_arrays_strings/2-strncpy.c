#include "main.h"
#include <stddef.h>
/**
 * _strncpy - concantenates two strings
 * @dest: character pointer
 * @src: character pointer
 * @n - count
 * Return: string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[j] = src[j];
		         j++;
		}
		else 
		{
			break;
		}
	}
	return (dest);
}
