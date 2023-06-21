#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
x = 48;
for (x < 58)
{
putchar(x);
x++;
if (x < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
