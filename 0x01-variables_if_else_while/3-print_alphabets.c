#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 * Return: (0) Success
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
