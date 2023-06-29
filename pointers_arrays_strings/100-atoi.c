#include "main.h"
/**
 * _atoi - function
 *@s: char
 * Return: int
 */
int _atoi(char *s)
{
int number = 0, x, sign = 1;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == '-')
{
sign *= -1;
}
if (s[x] >= '0' && s[x] <= '9')
{
number = number * 10 + s[x] - '0';
}
}
return (number *sign);
}
