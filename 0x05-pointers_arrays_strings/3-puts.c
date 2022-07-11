#include <stdio.h>

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
