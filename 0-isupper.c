#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: ascii code for alphabet
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);
	else 
		return (0);
}
