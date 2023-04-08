#include "main.h"
#include <stddef.h>
/**
 * _strncpy - concantenates two strings
 * @dest: character pointer
 * @src: character pointer
 * @n: count
 * Return: string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
