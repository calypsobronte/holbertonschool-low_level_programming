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
int i, c;
for (i = 48; i < 58; i++)
{
for (c = i + 1; c < 58; c++)
{
putchar(i);
putchar(c);
if(i != 56 && c != 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
