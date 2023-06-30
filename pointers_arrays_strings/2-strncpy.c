#include <stdlib.h>
/**
 * _strlen - calculates length of a string
 *@ch: given string
 *Return: len
 *
 */
int _strlen(char *ch)
{
int i = 0, len = 0;
while (*(ch + i) != '\0')
{
len++;
i++;
}
return (len);
}
/**
 * _strncpy - copies a string
 *@dest: first one
 *@src: second one
 *@n: number of characters
 * Return: copied to
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (j < n)
{
*(dest + i) = *(src + j);
if (*(src + j) == '\0')
j--;
j++;
i++;
}
if (*(src + i) == '\0')
{
while (i < _strlen(dest))
{
*(dest + i) = '\0';
i++;
}
}
return (dest);
}
