#include "main.h"
/**
 * print_alphabet_x10 - print aplhabet x10
 */
void print_alphabet_x10(void)
{
char c = 'a';
int x;
for (x = 0; x < 10; x++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
c = 'a';
}
}
