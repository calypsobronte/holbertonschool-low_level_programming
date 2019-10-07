#include "holberton.h"
/**
 * print_chessboard  - print string
 * @a: point  in 8
 */
void print_chessboard(char (*a)[8])
{
int b, c;
b = 0;
while (b < 8)
{
c = 0;
while (c < 8)
{
_putchar(a[b][c]);
if (c == 7)
_putchar('\n');
c++;
}
b++;
}
}
