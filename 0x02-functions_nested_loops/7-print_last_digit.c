#include "holberton.h"
/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: ret
 * On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int n)
{
int ret;

if (n >= 0)
{
ret = n % 10;
_putchar(ret + '0');
}
else
{
ret = (n * -1) % 10;
_putchar(ret + '0');
}
return (ret);
}
