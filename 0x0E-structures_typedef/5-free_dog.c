#include "dog.h"
#include <stdio.h>
void free_dog(dog_t *d)
{
if (!d)
{
free(d->name);
free(d->owner);
free(d);
}
}