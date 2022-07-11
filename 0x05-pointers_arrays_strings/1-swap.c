#include <stdio.h>

/**
 * swap_int - unction that swaps the values of two integers.
 * @a: first int
 * @b: second int
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
