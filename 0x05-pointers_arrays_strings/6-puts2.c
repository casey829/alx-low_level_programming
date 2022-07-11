#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: a strinig
 */
void puts2(char *str)
{
	int i = 0;

	int leng = 0;

	while (str[i++])
		leng++;

	for (i = 0; i < leng; i += 2)
		putchar(str[i]);

	putchar('\n');
}
