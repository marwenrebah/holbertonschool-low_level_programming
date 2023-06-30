/**
 * _memcpy - copy a memory
 * @dest: the to copy to
 * @src: the source to copy from
 * @n: how many to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
