#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	printf("Enter Number :");
	scanf("%d", &i);
	positive_or_negative(i);

	return (0);
}
