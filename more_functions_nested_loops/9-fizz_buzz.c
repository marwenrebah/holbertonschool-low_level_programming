#include "main.h"
#include <stdio.h>
/**
 * main -print to 100
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 5 == 0)
printf("Buzz");
else if (i % 3 == 0)
printf("Fizz");
else
printf("%d", i);
if (i != 100)
putchar(' ');
else
putchar('\n');
}
return (0);
}
