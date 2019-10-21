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
unsigned int i, j, k, l;
if (name == NULL || owner == NULL)
return (NULL);
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
for (i = 0; name[i]; i++)
;
i++;
p->name = malloc(i * (sizeof(char)));
if (p->name == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < j; i++)
{
p->name[i] = name[i];
}
p->age = age;
for (k = 0; owner[k]; k++)
;
k++;
p->owner = malloc(k * (sizeof(char)));
if (p->owner == NULL)
{
free(p->name)
free(p);
return (NULL);
}
for (i = 0; i < k; i++)
p->owner[i] = owner[i];
return (p);
}
