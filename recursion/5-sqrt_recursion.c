#include "main.h"
/**
 * find - natural square root of a number
 * @a: number
 * @b: root
 * Return: square root
 */
int find(int a, int b)
{
if ((b * b) == a)
return (b);
if (b == a / 2)
return (-1);
return (find(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
int b = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find(n, b));
}
