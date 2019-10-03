#include "holberton.h"
/**
 * reverse_array - description
 * @a: descript
 * @n: descript
 */
void reverse_array(int *a, int n)
{
int b, temp, c;
n = n - 1;
for (b = n; b > (n / 2); b--)
{
temp = a[b];
c = n - b;
a[b] = a[c];
a[c] = temp;
}
}
