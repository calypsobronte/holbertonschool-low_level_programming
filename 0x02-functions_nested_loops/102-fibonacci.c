#include <stdio.h>
/**
 * main - print 50
 *
 * Return: 0
 */

int main(void)
{
int a, b, c, d;
a = 0;
b = 1;
for (c = 0; c < 50; c++)
{
d = a + b;
a = b;
b = d;
if (c != 49)
printf("%d, ", d);
else
printf("%d\n", d);
}
return (0);
}