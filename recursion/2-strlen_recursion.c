#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculates the length of a given string using recursion
 *@s: string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (*s)
	return(0);
return(1 + _strlen_recursion(s + 1));
}
