#include "main.h"
/**
 *print_diagonal-draws a diagonal line
 * @n: number of times the character printed
 */
void print_diagonal(int n)
{
int x, c;
if (n > 0)
{
for (x = 0; x < n; x++)
{
for (c = 1; c <= x; c++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
