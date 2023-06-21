#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch = "_putchar";

for (i = 0; ch[i] != '\0'; i++)
{
	putchar(ch[i]);
}
putchar('\n');
return (0);
}
