#include "holberton.h"
/**
 * print_alphabet - writes the character c to stdout
 *
 * On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
