include "main.h"
/**
 * _strcat - concantenates ywo strings
 * @dest: character pointer
 * @src: charater pointer
 * Return: string pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *appnd;

	while (*(dest + i) != '\0')
	{
		*(appnd + i) = *(dest + i);
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(appnd + i) = *(src + j);
		i++;
		j++;
	}
	*(appnd + i) = '\0';
	return (appnd);
}
