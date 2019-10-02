#include "holberton.h"
/**
 * _strcpy - copues
 * @dest:
 * @src:
 * Return: dest a copy
 */
char *_strcpy(char *dest, char *src)
{
int a = 0;

while (*src != 0)
{
dest[a] = *src;
a++;
src++;
}
return (dest);
}