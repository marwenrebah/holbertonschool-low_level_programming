#include "dog.h"
#include<stdio.h>
/**
*init_dog - dog structure
*@d: struct to initialize
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: always void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
