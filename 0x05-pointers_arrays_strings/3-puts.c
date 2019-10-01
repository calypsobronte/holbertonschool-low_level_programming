#include "holberton.h"
/**
 * _puts - prints string
 *@str: character letter
*/
void _puts(char *str)
{
int a;
for (a = 0; str[a] != 0; a++)
_putchar(str[a]);
_putchar('\n');
}
