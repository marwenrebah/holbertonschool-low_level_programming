#include <stdlib.h>
/**
 * alloc_grid - allocate a matrix
 * @width: matrix's width
 * @height: matrix's height
 * Return: m
 */
int **alloc_grid(int width, int height)
{
	int **m, i;

	m = (int **) malloc(sizeof(int *) * width);
	for (i = 0; i < height; i++)
		*(m + i) = (int *) malloc(sizeof(int) * height);
	return (m);
}
