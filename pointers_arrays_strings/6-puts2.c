#include "main.h"

/**
 * puts2 -prints every other character of a string
 *@str: variale return the string
 * Return: Always 0.
 */
void puts2(char *str)
{
for (int i = 0; i < str; i += 2)
{
	putchar(str[i]);
}
_putchar('\n');
}
