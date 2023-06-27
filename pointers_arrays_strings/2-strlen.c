#include "main.h"
#include <stdio.h>

/**
 * _strlen -return the length of a string
 *@s: variable return the length of a string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*s != '\0')
{
	x++;
	s++;
}
return (x);
}
