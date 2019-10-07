#include "holberton.h"
/**
 * _strpbrk =
 * @s: cc
 * @accept: cc
 * Return: s + c
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a, b, c = 1, band;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
if (s[a] == accept[b] || band == 0)
band = 0;
else
band = 1;
}
if (band == 0)
c++;
return (s + c);
}
