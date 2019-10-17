#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - void
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 * Return: p
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int j;
char *p;
int i = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != 0)
{
i++;
}
p = malloc((i + n + 1) * (sizeof(char)));
if (p == NULL)
{
return (NULL);
}
i = j = 0;
while (s1[i] != 0)
{
p[i] = s1[i];
i++;
}
while (j < n && s2[j] != 0)
{
p[i] = s2[j];
i++, j++;
}
p[i] = '\0';
return (p);
}
