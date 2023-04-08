#include "main.h"
/**
 * _islower - checks for lower character
 * @c: character tobe checked
 * Return: 1 if lower or 0 if otherwise
 */
int _islower(int c)
{
	int check;

	for (check = 'a'; check <= 'z'; check++)
	{
		if (c == check)
			return (1);
	}
return (0);
}
