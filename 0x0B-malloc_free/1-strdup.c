#include "holberton.h"
#include <stdio.h> 
#include <stdlib.h>

char *_strdup(char *str)
{
char *p;
unsigned int a = 0 , i = 0;
if (str == 0)
return (NULL);
else
while (str[a] != 0)
{
a++;
}
p = malloc(a * sizeof(char));
while (i < a)
{
p[i] = *str;
str++;
i++;
}
return (p);
}