#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a given function on each
 * element of the array
 * @array: the given array
 * @size: arrays size
 * @action: function to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *p;
if (!action || array)
return;
while (p != array + size)
{
action(*p);
p++;
}
}
