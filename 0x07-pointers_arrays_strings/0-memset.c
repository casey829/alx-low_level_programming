#include "main.h"

/**
 * _memset - Fills first n bytes
 * @s: pointer to memory area
 * @b: character to fill memory area
 * @n: number of bytes
 * Return:pointer to filled memoery area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int indx;
	char *memory = s, value = b;

	for (indx = 0; indx < n; indx++)
		memory[indx] = value;

	return (memory);
}
