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
if (str == NULL)
return (NULL);
while (str[a] != '\0')
{
a++;
}
p = malloc(a * (sizeof(char)));
if (p == NULL)
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
