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
a = 1;
b = 2;
c = 2;
for (d = 0; d < 32; d++)
{
e = a + b;
if (e < 4000000 && e % 2 == 0)
c = c + e;
a = b;
b = e;
}
printf("%li\n", c);
return (0);
}
