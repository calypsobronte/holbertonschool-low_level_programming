#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - pasar el tama;o dependiendo de la cadena
 * @str: char pointer
 * Return: NULL
 */
char *_strdup(char *str)
{
char *p;
unsigned int a = 0, i = 0;
if (str == 0)
return (NULL);
else
{
while (str[a] != 0)
{
a++;
}
p = malloc(a * (sizeof(char)));
if (p == 0)
{
return (NULL);
}
while (i < a)
{
p[i] = str[i];
i++;
}
return (p);
}
}
