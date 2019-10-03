#include "holberton.h"
/**
 * _strcat - function that concatebe two strings
 * @dest: leeter
 * @src: letter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a = 0, b;
while (dest[a] != 0)
a++;
for (b = 0; src[b] != 0; b++, a++)
dest[a] = src[b];
dest[a] = 0;
return (dest);
}
