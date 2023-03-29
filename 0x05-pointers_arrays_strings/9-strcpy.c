#include "main.h"
/**
 * _strcpy -coppies using  pointer 
 * @dest: string pointer
 * #src: string pointer
 * Return: pointer to a string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; i < strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
