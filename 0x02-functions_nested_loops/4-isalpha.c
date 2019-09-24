#include "holberton.h"
/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 or 0
 * On error, -1 is returned, and errno is set appropriately.
*/
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c > 'A' && c < 'Z'))
{
return (1);
_putchar('\n');
}
else
{
return (0);
_putchar('\n');
}
}
