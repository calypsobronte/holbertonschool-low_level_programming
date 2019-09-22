#include <stdio.h>
/**
 * main - description
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c;

for (i = 0; i < 99; i++)
{
for (c = i + 1; c < 100; c++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(c / 10 + '0');
putchar(c % 10 + '0');
if (!(i == 98 && c == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

