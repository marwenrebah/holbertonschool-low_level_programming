#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 *@dest: first one
 *@src: second one
 *@n: number of characters
 * Return: copied to
 */
char *_strncpy(char *dest, char *src, int n)
{
char *index;
index = dest;
if (dest == NULL)
{
return (NULL);
}
char *ptr = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
