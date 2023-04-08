#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: Main sting
 * @needle: set of string for the search
 * Return: pointer of the first character found
 */
char *_strstr(char *haystack, char *needle)
{
	int j, temp, i = 0;

	for (; *(haystack + i) != '\0'; i++)
	{
		temp = i;
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + temp) == *(needle + j))
			{
				temp++;
			}
			else
			{
				temp = 0;
				break;
			}
			if (*(needle + (j + 1)) == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
