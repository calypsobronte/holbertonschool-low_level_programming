#include "holberton.h"
/**
 * print_numbers - void
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
_putchar(a);
_putchar('\n');
}
