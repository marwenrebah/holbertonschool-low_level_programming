#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 *@s1: first one
 *@s2: second one
 * Return: cmp
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
char c1, c2;
while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
{
c1 = *(s1 + i);
c2 = *(s2 + i);
if (c1 > c2 || c1 < c2)
return (c1 - c2);
i++;
}
c1 = *(s1 + i);
c2 = *(s2 + i);
if (c1 == c2)
	return (0);
else if (c1 == '\0')
return (-c2);
else
return (c1);
}
