#include <stddef.h>
/**
 * _strchr - first occurenece in a string of a given char
 * @s: the string
 * @c: the given char
 * Return: p or NULL : pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
char *p = s;
while (p)
{
if ((*p) == c)
return (p);
if ((*p) == '\0')
return (NULL);
p++;
}
return (NULL);
}
