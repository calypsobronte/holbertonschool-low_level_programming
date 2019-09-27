#include <stdio.h>
/**
 * main - main.
 *
 * Return: Always 0.
 */
int main(void)
{
long a, b = 612852475143;
for (a = 2; a <= b; a++)
{
if (b % a == 0)
{
b = b / a;
a--;
}
}
printf("%lu\n", a);
return (0);
}
