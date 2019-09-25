#include <stdio.h>
/**
 * main - print 33
 *
 * Return: 0
 */

int main(void)
{
long i, g, a, b, c, d;
g = 0;
a = 0;
b = 1;
for (c = 1; c < 33; c++)
{
d = a + b;
i = c;
a = b;
b = d;
if (i % 2 == 0 )
d = d + c;
printf("%ld\n", d);
return (0);
}
}