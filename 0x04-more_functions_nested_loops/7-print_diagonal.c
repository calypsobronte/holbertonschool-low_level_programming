#include "holberton.h"
/**
 * print_line - void
 * @n: print
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = 1; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}