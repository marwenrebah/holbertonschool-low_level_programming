#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 *@dest: first one
 *@src: second one
 *@n: n
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *index;
index = dest;
if (dust == NULL)
{
return (NULL);
}
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
return (index);
}
