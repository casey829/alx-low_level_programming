#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int two;
	int one;

	for (two = 0; two <= 9; two++)
	{
		for (one = two + 1; one <= 9; one++)
		{
			putchar(two + '0');
			putchar(one + '0');

			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
