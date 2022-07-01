#include <stdio.h>

/**
 * main - prints all the numbers of base
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 16; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
