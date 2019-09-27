#include "holberton.h"
/**
* print_triangle - void
* @size: print
*
* On error, -1 is returned, and errno is set appropriately.
*/
void print_triangle(int size)
{
int a, b;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = size; b >= 1 ; b--)
{
if (a < b)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}