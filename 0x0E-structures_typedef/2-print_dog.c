#include "dog.h"
#include <stdio.h>
/**
 * print_dog - diferent
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
    char cname = (d->name);
    char cowner = (d->owner);
    float cage = (d->age)
    if (!cname)
    cname = "(nil)";
    if (!cowner)
    cowner = "(nil)";
    printf("Name: %s\nAge: %f\nOwner: %s\n", cname, age, cowner);
}
}
