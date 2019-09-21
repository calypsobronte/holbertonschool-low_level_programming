#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c, l;

for (i = 48; i < 58; i++)
{
for (c = i + 1; c < 58; c++)
{
for (l = c + 1; l < 58; l++)
{
putchar(i);
putchar(c);
putchar(l);
if (!(l == 55 && i == 56 && c == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
