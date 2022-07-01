#include <stdio.h>
/**
 * main - a program that prints all possible different combinations of three digits
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int one;
	int two;
	int three;

	for (one = 0; one < 8; one++)
	{
		for (two = one + 1; two < 9; two++)
		{
			for (three = two + 1; three < 10; three++)
			{
				putchar(one % 10) + '0');
				putchar((two % 10) + '0');
				putchar((three % 10) + '0');

				if (one == 7 && two == 8 && three === 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n')

		return (0);
}
