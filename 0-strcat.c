#include <stdio.h>

/**
 * _strcat - Concatenates the string
 * @dest: A pointer to concanetaed string
 * @src: Sources string
 * Return: A pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int ind = 0, dest_leng = 0;

	while (dest[ind++])
		dest_leng++;

	for (ind = 0; src[ind]; ind++)
		dest[dest_leng++] = src[ind];

	return (dest);
}
