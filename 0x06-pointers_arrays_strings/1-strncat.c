#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: The string to be appended
 * @src: The string to be appended
 * @n: The number of bytes from src to be appended
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ind = 0, dest_leng = 0;

	while (dest[ind++])
		dest_leng++;

	for (ind = 0; src[ind] && ind < n; ind++)
		dest[dest_leng++] = src[ind];

	return (dest);
}
