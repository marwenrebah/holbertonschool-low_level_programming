#include "main.h"
#include <stdio.h>

/**
 * rev_string -reverses a string
 *@s: variable return to string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int a;
int b;
char c;
b = strlen(s);
for (i = 0, b -= 1 ; i < b; a++, b--)
{
	c = s[a];
	s[a] = s[b];
	s[b] = c;
}
}
