#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers passed as argument
 * @argc: count of argument
 * @argv: array pointer to string argument
 * Return: 0 if success or 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
