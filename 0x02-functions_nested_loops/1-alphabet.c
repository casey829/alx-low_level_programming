#include "main.h"

/**
 * main - a function that prints the alphabet
 *
 * Return:Always  0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for(i = 'a'; i < 'z'; i++)
	{
		_putchar(i);
	}
         	_putgchar('\n');
}
