#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char x, i ;

x = '0';
i = 'A';
while (x <= '9')
{
	putchar(x);
	x++;
}
while (i <= 'F')
{
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
