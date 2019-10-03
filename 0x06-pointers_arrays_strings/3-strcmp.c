#include "holberton.h"
/**
 * _strcmp - description
 * @s1: descript
 * @s2: descript
 * Return: j
 */
int _strcmp(char *s1, char *s2)
{
int a = 0, b, c, d;
while (s1[a] == s2[a] && s1[a] != 0 && s2[a] != 0)
a++;
c = s1[a] + '0';
d = s2[a] + '0';
b = c - d;
return (b);
}
