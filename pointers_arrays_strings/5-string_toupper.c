/**
 * string_toupper - converts each low into upp
 * @ch: the given string
 * Return: ch
 */
char *string_toupper(char *ch)
{
int i = 0;
while (*(ch + i) != '\0')
{
if (*(h + i) >= 'a' && *(ch + i) <= 'z')
	*(ch + i) -= 32;
i++;
}
return (ch);
}
