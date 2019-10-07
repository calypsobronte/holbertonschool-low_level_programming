#include "holberton.h"
/**
 * _memcpy - recorrido donde mandamos todo de la fuente al destino
 * @dest: destino
 * @src: fuente
 * @n: n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
