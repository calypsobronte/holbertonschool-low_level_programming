#include "holberton.h"
#include <stdio.h> 
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
char *p;
if (size == 0)
{
return (NULL);
}
else
{
p = malloc(sizeof(char) * size);
while (size--)
{
p[size] = c;
}
return (p);
}
return (NULL);
}
