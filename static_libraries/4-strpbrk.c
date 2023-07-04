#include <stddef.h>
/**
 * _strpbrk - returns the pointer to the first
 * found occurence
 *
 * @s:to search in
 *
 * @accept: letters of search
 *
 * Return: t
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, v = 100, ok;

	while (*(accept) != '\0')
	{
		ok = 1;
		i = 0;
		while (*(s + i) && ok)
		{
			if (*(s + i) == *(accept))
			{
				ok = 0;
				if (i < v)
					v = i;
			}
			i++;
		}
		accept++;
	}
	if (v == 100)
		return (NULL);
	return (s + v);
}
