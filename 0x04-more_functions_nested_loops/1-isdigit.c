#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit
 * @c: takes in a character/digit
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
