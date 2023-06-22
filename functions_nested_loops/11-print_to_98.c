#include "main.h"
/**
 * print_to_98 -prints all natural numberrs from n to 98
 * @n: the number to start counting from
 */
void print_to_98(int n)
{
	if(n < 0)
	{
		_putchar(((-n) / 100) + 48);
		_putchar((((-n) % 100) / 10) + 48);
		_putchar(((-n) % 10) + 48);
	}
	else
	{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
		_putchar((n % 10) + 48);
	}
}

