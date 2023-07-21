#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - idex for first element
 * for which cmp does not return 0
 * @array: the given array
 * @size: the array's size
 * @cmp: the function to compare
 * Return: 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (!cmp || !array)
return (-1);
if (size <= 0)
return (-1);
while (i < size)
{
if (cmp(*(array + i)))
return (i);
i++;
}
return (-1);
}
