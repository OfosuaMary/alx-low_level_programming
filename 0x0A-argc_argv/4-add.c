#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers passed as argument
 * @argc: count of argument
 * @argv: array pointer to string argument
 * Return: 0 if success or 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}
	else
	{
		int i = 0;

		for (; i < argc; i++)
		{
			if (*argv[i] >= '0')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
