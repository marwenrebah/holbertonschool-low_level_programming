#include "main.h"

/**
 * _strcpy- copies the string pointed
 *@dest: var
 *@src: var
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int x;
x = 0;
while (src[x])
{
	dest[x] = src[x];
	x++;
}
return (dest);
}
