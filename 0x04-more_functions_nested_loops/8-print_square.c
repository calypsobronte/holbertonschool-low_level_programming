#include "holberton.h"
/**
 * print_square - writes the character c to stdout
 * @size: The character to print
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
_putchar(35);
_putchar('\n');
}
}
else
_putchar('\n');
}
