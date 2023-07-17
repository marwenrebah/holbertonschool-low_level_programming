#ifndef HEADER_H
#define HEADER_H
/**
 *   struct dog - dog
 * Return: Always 0.
 * @name : char ;
 * @age: float ;
 * @owner: *char ;
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
