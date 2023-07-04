#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *@dest: first one
 *@src: second one
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a = 0, b = 0;
while (*(dest + a) != '\0')
a++;
while (*(src + b) != '\0')
{
	*(dest + a) = *(src + b);
	a++;
	b++;
}
*(dest + a) = '\0';
return (dest);
}
