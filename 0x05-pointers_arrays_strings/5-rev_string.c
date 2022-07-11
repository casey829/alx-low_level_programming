#include <stdio.h>

/**
 * rev_string -  function that reverses a string
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, leng = 0;

	char rv;

	while (s[i++])
		leng++;

	for (i = leng - 1; i >= leng / 2; i--)
	{
		rv = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1] = rv;
	}
}
