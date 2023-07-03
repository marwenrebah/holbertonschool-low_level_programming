#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculates the length of a given string using recursion
 *@s: string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
	i++;
	i += _strlen_recursion(s + 1);
}
return(1);
}
