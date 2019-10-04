#include "holberton.h"
#include <stdlib.h>
/**
 * print_number - description
 * @n: descript
 * Return: -
 */
void print_number(int n)
{
int a = n;
char b = 48;
if (a / 10 == 0)
{
if (a < 0)
_putchar(45);
_putchar(abs(a) + b);
return;
}
print_number(a / 10);
b = b + (abs(a % 10));
_putchar(b);
}
