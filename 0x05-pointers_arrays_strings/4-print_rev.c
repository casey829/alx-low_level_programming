#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse
 * @s: a string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int leng = 0;

	int i = 0;

	while (s[i++])
		leng++;

	for (i = leng - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
