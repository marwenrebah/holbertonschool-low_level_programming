#include "main.h"
/**
 * is_divisible - checks if a number is divisible
 * @i: number
 * @d: divisor
 * Return: 0 if divisible, else 1
 */
int is_divisible(int i, int d)
{
if (i % d == 0)
return (0);
if (d == i / 2)
return (1);
return (its_divisible(i, d + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *@n: number
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
int d = 2;
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (its_divisible(n, d));
}
