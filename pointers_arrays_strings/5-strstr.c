#include <stddef.h>
/**
 * _strstr - finds and loctaes the substring
 * in the main string
 *
 * @haystack: the main string
 *
 * @needle: the substring
 *
 * Return: sub
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack, *s, *p2;

	if (*(needle) == '\0')
		return (haystack);
	while (*(p) != '\0')
	{
		if (*(needle) == *(p))
		{
			p2 = needle;
			s = p;
			while (*(p2) != '\0' && *(s) == *(p2))
			{
				s++;
				p2++;
			}
			if (*(p2) == '\0')
				return (p);
		}
		p++;
	}
	return (NULL);
}
