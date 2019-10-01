#include "holberton.h"
/**
 * _strlen - character
 * @s: - letter
 * Return: a
 */
int _strlen(char *s)
{
int a;
while (s[a] != 0)
a++;
return (a);
}
