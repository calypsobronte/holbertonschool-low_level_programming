#include "holberton.h"
/**
 * leet - description
 * @s: descript
 * Return: s
 */
char *leet(char *s)
{
int a = 0, b;
char c[] = "aeotl";
char d[] = "43071";
while (s[a] != 0)
{
for (b = 0; b < 6; b++)
{
if (s[a] == c[b] || s[a] + 32 == c[b + 1])
{
s[a] = d[b];
}
}
a++;
}
return (s);
}
