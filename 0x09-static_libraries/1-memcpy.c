#include "main.h"
/**
 * _memcpy -copiea memory area
 * @dest: address of the destination string
 * @src: addres of source string
 * @n: number of bytes
 * Return: character pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
