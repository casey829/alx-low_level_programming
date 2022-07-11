#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: function that prints half of a string
 */
void puts_half(char *str)
{
	int i = o;

	int leng = 0;

	int j;

	while (str[i++])
		leng++;

	if (leng % 2 == 0)
		j = leng / 2;
	else
		j = (leng + 1) / 2;
	for (i = j; i < leng; i++)
		putchar(str[i]);

	putchar('\n');
}
