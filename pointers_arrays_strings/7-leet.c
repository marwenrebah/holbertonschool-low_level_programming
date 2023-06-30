/**
 * leet - crypto
 * @ch: the string to crypt
 * Return: ch
 */
char *leet(char *ch)
{
int i = 0, j;
char st[11] = "AaEeLlOoTt", st_num[11] = "4433110077";
while (*(ch + i))
{
j = 0;
while (*(st + j) != *(ch + i) && *(st + j) != '\0')
j++;
if (*(st + j) != '\0')
*(ch + i) = *(st_num + j);
i++;
}
return (ch);
}
