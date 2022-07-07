#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Return - from 0 to 14
 */
void more_numbers(void)
{
	int i, tm;

	for (tm = 0; tm < 10; tm++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
