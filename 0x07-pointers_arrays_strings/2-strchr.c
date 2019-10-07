#include "holberton.h"
/**
 * _strchr - print 0
 * @s: string
 * @c: string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
unsigned int a = 0;
while (s[a] != 0)
{
if (s[a] == c)
return (s + a);
a++;
}
return ('\0');
}
