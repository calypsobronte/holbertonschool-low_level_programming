#include "holberton.h"
/**
 * swap_int - description
 * @a:  value
 * @b:  value
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
