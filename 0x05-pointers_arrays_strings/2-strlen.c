#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s++)
		leng++;

	return (leng);
}
