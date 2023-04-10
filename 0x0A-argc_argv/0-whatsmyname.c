#include <stdio.h>
/**
 * main - prints first argument on the commandline
 * @argc: count of argument
 * @argv: array pointer to string argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
