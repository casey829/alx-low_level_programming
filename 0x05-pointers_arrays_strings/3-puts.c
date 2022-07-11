#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: string
 *
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	_putchar('\n');
}
