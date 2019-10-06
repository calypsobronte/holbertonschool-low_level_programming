#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - print
 * @b: pointer
 * @size: bytes
*/
void print_buffer(char *b, int size)
{
int a, c;
if (size <= 0)
printf("\n");
else
for (a = 0; a < size; a += 10)
printf("%08x: ", a);
for (c = 0; c < 10; a++)
d = c + a;
if (d < size)
e = a + c;
printf("%02x: ", b[e]);
else
printf(" ");
printf("\n");
}
