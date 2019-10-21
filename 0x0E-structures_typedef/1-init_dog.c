#include "dog.h"
#include <stdio.h>
/**
 * init_dog - copy of var
 * @name: char
 * @age: float
 * @owner: char
 * @d: struct
 * @dog: struct
 * Return: point p
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
    (*d).name = name;
    (*d).age = age;
    (*d).owner = owner;
    }
}
