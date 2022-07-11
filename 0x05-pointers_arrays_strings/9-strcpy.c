#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: A buffer to copy the string to
 * @src: A source string to
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;

	for (num = 0; src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	dest[num] = '\0';

	return (dest);
}
