#include "main.h"
/**
 * jack_bauer -prints every minute of the day
 */
void jack_bauer(void)
{
int a, b, c, d, e = 9;
for (a = 0; a <= 2; a++)
{
for (b = 0; b <= e; b++)
{
if (a == 2)
	e = 3;
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
_putchar(a + 48);
_putchar(b + 48);
_putchar(':');
_putchar(c + 48);
_putchar(d + 48);
_putchar('\n');
}
}
}
}
}

