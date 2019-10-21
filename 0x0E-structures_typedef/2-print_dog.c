/* libraries */
#include "dog.h"
#include <stdio.h>
void print_dog(struct dog *d)
{
if (d != NULL)
{
    if (!d->name)
    printf("nil");
    else
    printf("Name: %s\n", d->name);
    if (!d->age)
    printf("nil");
    else
    printf("Age: %lf\n", d->age);
    if (!d->owner)
    printf("nil");
    else
    printf("Owner: %s\n", d->owner);
}
}