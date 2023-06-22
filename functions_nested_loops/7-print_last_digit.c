#include "main.h"
/**
 *print_last_digit -Prints the last digit of a number
 * @x: numbmer
 * Return: 0
 */
int print_last_digit(long x)
{
if (x < 48)
	x *= -1;
_putchar(48 + (x % 10));
return (x % 10);
}
