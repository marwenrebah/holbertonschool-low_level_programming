#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print the given numbers seperated by a given seperator
 * @separator: the given string to seperate numbers
 * @n: count of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int x;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
(seperator != NULL && i != n - 1) ?
printf("%d%s", x, separator) : printf("%d", x);
}
putchar("\n");
}
