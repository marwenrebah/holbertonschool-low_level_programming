#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory ussing malloc
 * @b: size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
