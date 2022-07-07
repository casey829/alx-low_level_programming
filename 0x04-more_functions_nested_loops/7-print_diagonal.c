#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int lna, lnb;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lna = 1; lna <= n; lna++)
		{
			for (lnb = 1; lnb < co; lnb++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
