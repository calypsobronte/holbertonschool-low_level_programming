#include "dog.h"
#include <stdio.h>
/**
 * print_dog - diferent
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d)
{
char *cname = (d->name);
char *cowner = (d->owner);
if (!cname)
cname = "(nil)";
if (!cowner)
cowner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", cname, d->age, cowner);
}
}
