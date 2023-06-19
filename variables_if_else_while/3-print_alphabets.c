#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char x, c;
x = 'a';
c = 'A';
while (x <= 'z')
{
	putchar(x);
	x++;
}
while (c <= 'Z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}


