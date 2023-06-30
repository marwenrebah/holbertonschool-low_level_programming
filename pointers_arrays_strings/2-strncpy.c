#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strncpy - copies a string
 *@dest: first one
 *@src: second one
 *@n: number of characters
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr;
ptr = dest;
if (dest == NULL)
{
return (NULL);
}
while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
return(ptr);
}