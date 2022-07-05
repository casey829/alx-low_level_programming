#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return - Always 0 (Success)
 */
void times_table(void)
{
	int row;
	int colmn;
	int dgt;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colmn = 0; colmn <= 9; colmn++)
		{
			dgt = (row * colmn);
			if ((dgt / 10) > 0)
			{
				_putchar((dgt / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dgt % 10) + '0');

			if (colmn < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
