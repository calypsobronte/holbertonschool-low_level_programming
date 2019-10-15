#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - pasar el tama;o dependiendo de la cadena
 * @s1: char pointer
 * @s2: char pointer
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0, k = 0, l = 0;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != 0)
{
i++;
}
while (s2[j] != 0)
{
j++;
}
j++;
k = i + j;
p = malloc(k * (sizeof(char)));
while (l < i)
{
p[l] = *s1;
s1++;
l++;
}
l = 0;
while (l < j)
{
p[i + l] = *s2;
s2++;
l++;
}
return (p);
}
