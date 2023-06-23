#include "main.h"

/**
 * more_numbers -prints numbers 0 to 9 except 2 and 4
 */
void more_numbers(void)
{
int x, c;
for (c = 0; c <= 9; c++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
