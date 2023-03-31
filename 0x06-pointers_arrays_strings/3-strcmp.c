#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: interger
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
		else
		{
		}
	}
	return (0);

}
