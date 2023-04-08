#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a charachter in a string
 * @s: source string
 * @c: the charater to be found
 * Return: string pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}
