/**
 * _memset - fills n bytes of the memory with a given
 * char
 * @s: the  pointer to the memory area to be filled
 * @b: the given char
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
