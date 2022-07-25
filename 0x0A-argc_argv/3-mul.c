#include  "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: number of parameters
 * @argv: array of params
 *
 * Return: SUCCESS ? 0 : 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		goto ERROR;

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

ERROR:	printf("Error\n");
	return (1);
}
