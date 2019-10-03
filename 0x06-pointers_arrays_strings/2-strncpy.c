#include "holberton.h"
/**
 * _strncpy -  description
 * @dest: ///
 * @src: ---
 * @n: ===
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int b, i;
for (b = 0; b < n && src[b] != 0; b++)
dest[b] = src[b];
for (i = b; i < n; i++)
dest[i] = 0;
return (dest);
}
