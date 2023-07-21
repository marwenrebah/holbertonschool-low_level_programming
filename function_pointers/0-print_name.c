#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - Print a name
* @name: name of the person
* @f: the function to realise that
**/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
