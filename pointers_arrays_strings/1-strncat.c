#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *@dest: first one
 *@src: second one
 *@n: n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (*(dest + a) != '\0')
a++;
while (*(src + b) != '\0' && b < n)
{
*(dest + a) = *(src + b);
a++;
b++;
}
*(dest + a) = '\0';
return (dest);
}
