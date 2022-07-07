#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Return - from 0 to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i);
		_putchar('%d', 10);
	}
	_putchar('\n');
}
