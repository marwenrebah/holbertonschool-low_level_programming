#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: character
 * Return: a string
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ch;
if (!size)
return (NULL);
ch = (char *) malloc(sizeof(char) * size);
if (ch != NULL)
{
for (i = 0; i < size; i++)
*(ch + i) = c;
}
return (ch);
}
