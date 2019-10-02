#include "holberton.h"
/**
 * _strcpy - copues
 * @dest: string
 * @src: string
 * Return: dest a copy
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (*src != 0)
{
dest[index] = *src;
index++;
src++;
}
return (dest);
}
