#include "main.h"
#include <stdio.h>

/**
 * swap_int -Swaps the values of two integers
 *@a: variable a
 *@b: variable b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
