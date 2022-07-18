#include "main.h"

/**
 * _strchr - Locates char in string
 * @s: String to be searched
 * @c: Char in string
 * Return: if c is found, pointer and if c is not found, null
 */
char *_strchr(char *s, char c)
{
	int indx;

	for (indx = 0; s[indx] >= '\0'; indx++)
	{
		if (s[indx] == c)
			return (s + indx);
	}

	return ('\0');
}
