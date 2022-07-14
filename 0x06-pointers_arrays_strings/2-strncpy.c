#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: The buffer with str copy
 * @src: The source string
 * @n: bytes copied
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ind = 0, src_leng = 0;

	while (src[ind++])
		src_leng++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[ind] = src[ind];

	for (ind = src_leng; ind < n; ind++)
		dest[ind] = '\0';

	return (dest);
}
