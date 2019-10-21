#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - copy of var
 * @name: char
 * @age: float
 * @owner: char
 * Return: point p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
char *cname = name;
char *cowner = owner;
p->name = cname;
p->age = age;
p->owner = cowner;
return (p);
}
