#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings - print given strings seperated by a given seperator
 * @separator: seperate words
 * @n: number of words
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *s;
va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
s != NULL ? printf("%s", s) : printf("(nil)");
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
putchar('\n');
}
