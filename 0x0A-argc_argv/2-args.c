#include "main.h"

/**
 * main - program that prints all arguments
 * @argc: number of parameters
 * @argv: array of parameters
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
