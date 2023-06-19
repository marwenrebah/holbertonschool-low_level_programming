#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the  variable n
 * compiled and run on.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>5)
	printf("%S and is greater than 5\n", n);
else if(n=0)
	printf("%S and is 0\n", n)
else if(n<6>0)
	printf("%S and is less than 6 and not 0\n", n);
return (0);
}
