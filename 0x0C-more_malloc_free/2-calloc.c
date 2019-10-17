#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - void
 * @nmemb: string
 * @size: string
 * Return: p
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
p[i + 1] = 0;
return (p);
}
