#include <stdio.h>

/**
 * main - print single numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = 0; num <= 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
