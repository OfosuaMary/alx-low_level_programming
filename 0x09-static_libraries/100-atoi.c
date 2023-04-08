#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: pointer parameter
 * Return: Integer
 */
int _atoi(char *s)
{
	int i = 0;
	int incount = 0;

	while (*(s + i) != '\0')
	{
		if(*(s + i) >= 0)
		{
			*(s + incount) = *(s + i);
			incount++;
		}
		else if ((*(s + i) >= 'a') || (*(s + i) >= 'A'))
		{
		}
		else if((*(s + i) == '-') || ((*s + i) == '+'));
		{
			*(s + incount) = *(s + i);
			incount++;
		}
		i++;
	}
}
