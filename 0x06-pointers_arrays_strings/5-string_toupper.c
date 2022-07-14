#include "main.h"

/**
 * string_toupper - changes case of letters
 * @str: string with letters
 * Return: pointer to changes string with case letters
 */
char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind++])
	{
		if (str[ind] >= 'a' && str[ind] <= 'z')
			str[ind] -= 32;

		ind++;
	}

	return (str);
}
