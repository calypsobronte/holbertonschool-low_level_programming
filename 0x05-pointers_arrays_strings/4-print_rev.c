#include "holberton.h"
/**
 * print_rev - prints string
 *@str: character letter
 */
void print_rev(char *str)
{
int a;
char b;
for (a = 0; str[a] != 0; a++)
{}
for (a = a - 1; a >= 0; a--)
{
b = str[a];
_putchar(b);
}
_putchar('\n');
}
