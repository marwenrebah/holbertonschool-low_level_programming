/**
 * cap_string - capitalizes a given string
 * @ch: the string to capitalize
 * Return: ch
 */
char *cap_string(char *ch)
{
int i = 0;
char c;
if (*(ch) <= 'z' && *(ch) >= 'a')
*(ch) -= 32;
while (*(ch + i))
{
c = *(ch + i);
if (i != 0)
{
if (c == '.' || c == ',' || c == ';' || c == '!' || c == '}'
|| c == '\t' || c == '\n' || c == '?' || c == '"' || c == '('
|| c == ')' || c == '{' || c == ' ')
{
if (*(ch + i + 1) >= 'a' && *(ch + i + 1) <= 'z')
{
*(ch + i + 1) -= 32;
i++;
}
}
}
i++;
}
return (ch);
}
