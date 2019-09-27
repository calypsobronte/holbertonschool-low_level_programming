#include "holberton.h"
/**
 * print_number - writes the character c to stdout
 * @n: The character to print
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
if (n > -10 && n < 10)
{
if (n < 0)
{
_putchar('-');
n = n * -1;
}
_putchar(n + '0');
}
else
{
print_number(n / 10);
n = n % 10;
if (n < 0)
n = n * -1;
_putchar(n + '0');
}
}
