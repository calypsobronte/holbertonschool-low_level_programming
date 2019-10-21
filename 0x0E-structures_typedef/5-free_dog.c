#include "dog.h"
#include <stdio.h>
/**
 * free_dog - copy of var
 * @d: char
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
