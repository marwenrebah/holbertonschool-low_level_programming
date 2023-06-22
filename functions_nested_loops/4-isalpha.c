#include "main.h"
/**
 *_isalpha - checks if c is lowercase or uppercase
 * @c: character
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 65 && c >= 90))
		return (1);
		else
		return (0);
}
