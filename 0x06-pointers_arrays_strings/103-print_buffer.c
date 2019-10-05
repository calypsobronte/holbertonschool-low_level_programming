#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - print
 * @b: pointer
 * @size: bytes
*/
void print_buffer(char *b, int size)
{
int a;
if (size <= 0)
printf("\n");
else
for (a = 0; a < size; a += 10)
printf("%08x: ", b[a]);
printf("\n");
}