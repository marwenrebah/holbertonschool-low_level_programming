#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char x, i;
x = '0';
i = 'a';
while (x <= '9')
{
	putchar(x);
	x++;
}
while (i <= 'f')
{
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
