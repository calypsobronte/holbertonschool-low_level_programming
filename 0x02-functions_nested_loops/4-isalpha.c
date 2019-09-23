#include "holberton.h"
/**
 * main - empty file
 *
 * Return: ALways 0 (Success)
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
