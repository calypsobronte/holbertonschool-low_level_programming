#include "holberton.h"
/**
 * print_most_numbers - void
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
if (a != '2' && a != '4')
_putchar(a);
_putchar('\n');
}