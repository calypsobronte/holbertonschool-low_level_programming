#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - of string to integer
 * @s: convert
 * Return: s
 */
int _atoi(char *s)
{
int a = 0, b = 0, c;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == '-')
b++;
if (s[c] > 47 && s[c] < 58)
{
while (s[c] > 47 && s[c] < 58)
a = a * 10 - (s[c++] - 48);
break;
}
}
return (a *= b % 2 == 0 ? -1 : 1);
}