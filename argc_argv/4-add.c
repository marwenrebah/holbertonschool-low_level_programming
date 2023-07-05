#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two positive numbers
 * @argc: argc
 * @argv: argv
 * Return: 0 if no number is passed, 1 if number contains symbols
 */
int main(int argc, char **argv)
{
int n, d, s = 0;
for (n = 1; n < argc; n++)
{
for (d = 0; argv[n][d]; d++)
{
if (argv[n][d] < '0' || argv[n][d] > '9')
return (printf("Error\n"), 1);
}
s += atoi(argv[n]);
}
printf("%d\n", s);
return (0);
}
