#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - prints a struct
 * @d: variable
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
printf("Name: (nill)\n");
else
printf("Name: (nill)\n" d->name);
printf("Age: %f\n", d->age)
if (d->owner == NULL)
printf("Owner: (nill)\n")
else
printf("Owner: %s\n", d->owner);
}
}
