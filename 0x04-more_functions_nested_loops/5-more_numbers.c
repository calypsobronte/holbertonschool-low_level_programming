#include "holberton.h"
/**
 * more_numbers - void
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
