#include "holberton.h"
/**
 * _strlen_recursion - print
 * @s: piont
 * Return: 0
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s)
{
n++;
return (n + _strlen_recursion(++s));
}
else
return (0);
}
