#include "main.h"
#include <string.h>
/**
 * _strcpy - coppies using  pointer
 * @dest: string pointer
 * @src: string pointer
 * Return: pointer to a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
