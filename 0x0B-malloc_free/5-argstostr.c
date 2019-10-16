#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - punt
 * @ac: intero
 * @av: char
 * Return: p
*/
char *argstostr(int ac, char **av)
{
int a, b, c, d, e;
char *p;
if (ac == 0)
return (NULL);
if (av == 0)
return (NULL);
a = b = c = d = 0;
for (a = 0; av[a]; a++)
{
for (b = 0; av[a][b]; b++)
c++;
}
e = ac + 1;
p = malloc(c * sizeof(char) + e);
if (p == NULL)
return (NULL);
for (a = 0; av[a]; a++)
{
for (b = 0; av[a][b]; b++, d++)
p[d] = av[a][b];
p[d] = '\n';
d++;
}
p[d] = '\0';
return (p);
}
