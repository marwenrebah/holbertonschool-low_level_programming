#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half -prints half of a string
 *@str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0, i = 0;
	int n;
j = strlen(str);
	if ((j % 2) == 0)
		n = j / 2;
	else
		n = (j + 1) / 2;
	for (i = n ; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
