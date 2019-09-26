#include "holberton.h"
/**
 * print_line - void
 * @n: print
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
int a;
for (a = 0; n > 0 && a < n; a++)
_putchar('_');
_putchar('\n');
}
