#include "main.h"
/**
 * times_table -prints the 9 times table
 */
void times_table(void)
{
int i, j, prod;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
prod = i * j;
if ((prod) >= 10)
{
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
else
{
_putchar(prod + 48);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
if ((i * (j + 1)) < 10 && j != 9)
_putchar(' ');
}
_putchar('\n');
}
}
