#include "holberton.h"
/**
 * infinite_add - string
 * @n1: letter
 * @n2: letter
 * @r: letter
 * @size_r: letter
 * Return: s
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a, b, c, d, e, f = 0;
for (a = 0; n1[a] != '\0'; a++)
{}
for (b = 0; n2[b] != '\0'; b++)
{}
if (a > size_r || b > size_r)
return (0);
a--;
b--;
for (c = 0; c < size_r - 1; a--, b--, c++)
{
e = f;
if (a >= 0)
e += n1[a] - '0';
if (b >= 0)
e += n2[b] - '0';
if (a < 0 && b < 0 && e == 0)
{
break;
}
f = e / 10;
r[c] = e % 10 + '0';
}
r[c] = '\0';
if (a >= 0 || b >= 0 || f)
return (0);
for (c -= 1, d = 0; d < c; c--, d++)
{
f = r[c];
r[c] = r[d];
r[d] = f;
}
return (r);
}