#include <stdarg.h>
/**
 * sum_them_all - sum all the parameters
 * passed to a function
 * @n: a constant num
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list args;
if (!n)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
return (sum);
}
