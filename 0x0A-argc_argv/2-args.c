#include <stdio.h>
/**
 * main - prints all argument passed  arguments passed
 * @argc: count of argument
 * @argv: array pointer to string argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
