#include <stdio.d>
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
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

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
