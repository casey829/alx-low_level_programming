#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @n: integer
 * @a: integer
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);

		if (num == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
