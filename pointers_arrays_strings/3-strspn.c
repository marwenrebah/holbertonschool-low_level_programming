/**
 * _strspn - calcultes matching characters
 * @s: string to look into
 * @accept: contains matching characters
 * Return: len: number of matched characters
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0, v;
char *p;
while ((*s) != '\0')
{
v = 0;
p = accept;
while ((*p) != '\0')
{
if (*(p) == *(s))
{
len++;
v = 1;
}
p++;
}
if (!v)
return (len);
s++;
}
return (len);
}
