#include <stdio.h>

/**
 * print_diagsums - print sums of
 * two diagonals
 *
 * @a: the matrix
 *
 * @size: the size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, a1 = 0, a2 = 0;

	for (i = 0; i < size; i++)
	{
		a1 += a[i];
		a += size;
	}

	a -= size;
	for (i = 0; i < size; i++)
	{
		a2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", a1, a2);
}

