#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: Array with reversed ints
 * @n: ints in an array
 */
void reverse_array(int *a, int n)
{
	int i, ind;

	for (ind = n - 1; ind >= n / 2; ind--)
	{
		i = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] - i;
	}
}
