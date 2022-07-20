#include "main.h"

/**
 * _sqrt_recursion - find square root
 * @n: Number to find square root of
 *
 * Return: The square root value
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (n, 1);
}
