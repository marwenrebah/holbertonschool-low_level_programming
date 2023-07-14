#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two given srings
 * @s1: first one
 * @s2: second one
 * Return: ch
 */
char *str_concat(char *s1, char *s2)
{
char *ch;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
ch = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
if (ch != NULL)
{
	strcpy(ch, s1);
	strcat(ch, s2);
}
return (ch);
}
