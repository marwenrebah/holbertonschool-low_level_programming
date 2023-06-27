#include "main.h"

/**
 * print_rev -prints a string in reverse
 *@s: variable return as string.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
	x++;
}
for (x -= 1; x >= 0; x--)
{
	_putchar(s[x]);
}
_putchar('\n');
}
