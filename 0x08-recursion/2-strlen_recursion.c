#include "main.h"

/**
 * _strlen_recursion - Find the length of a string
 * @s: The string to find length
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s != 0)
	{
		c++;
		return (c + _strlen_recursion(s + 1));
	}
	return (c);
}
