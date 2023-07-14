#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointer to a new allocated space memory
 * wich contains a copy of a given string
 * @str: the given string
 * Return: ch
 */
char *_strdup(char *str)
{
char *ch;
if (str == NULL)
return (NULL);
ch = (char *) malloc(sizeof(char) * (strlen(str) + 1));
if (ch != NULL)
{
strcpy(ch, str);
}
return (ch);
}
