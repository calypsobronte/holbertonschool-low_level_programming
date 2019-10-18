#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - memory in blocks
 * @ptr: string
 * @old_size: string
 * @new_size: string
 * Return: p
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned char *p;
unsigned int i = 0;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(new_size * (sizeof(void *)));
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
p = malloc(new_size * (sizeof(char)));
if (p == NULL)
{
return (NULL);
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
{
p[i] = ((char *)ptr)[i];
}
free(ptr);
return (p);
}
for (i = 0; i < new_size; i++)
{
p[i] = ((char *)ptr)[i];
}
free(ptr);
return (p);
}
