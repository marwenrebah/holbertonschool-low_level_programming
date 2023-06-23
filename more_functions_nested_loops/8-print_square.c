#include "main.h"

/**
 * print_square -print a square
 * @size: size of the square
 */
void print_square(int size)
{
int x, c;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (c = 0; c < size; c++)
_putchar('#');
if (x == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
