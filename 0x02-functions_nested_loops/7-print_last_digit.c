#include "holberton.h"
/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: ret + '0'
 * On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int n)
{
int ret;

ret = n % 10;

if (ret < 0)
{
ret = (ret * (-1));
}
_putchar(ret + '0');
return (ret);
}
