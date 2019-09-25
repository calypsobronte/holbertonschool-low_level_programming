#include <stdio.h>
/**
 * main - print 33
 *
 * Return: 0
 */

int main(void)
{
int d;
long a, b, c, e;
a = 0;
b = 1;
c = 0;
for (d = 1; d < 100; d++)
{
e = a + b;
a = b;
b = e;
if (e % 2 == 0 && (c < 4000000))
c = c + e;
}
printf("%d\n", d);
return (0);
}