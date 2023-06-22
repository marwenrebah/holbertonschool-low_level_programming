#include "main.h"
/**
 * _islower - checks if c is lowercase
 * @c: character
 * Return : 1 or 0
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
else
return (0);
}
