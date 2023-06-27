#include "main.h"
#include <stdio.h>
#include <string.h>
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
for (a = 0, b -= 1 ; a < b; a++, b--)
{
	c = s[a];
	s[a] = s[b];
	s[b] = c;
}
}
