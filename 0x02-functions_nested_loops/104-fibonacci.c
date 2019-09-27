#include <stdio.h>

/**
 * main - prints
 *
 * Return: Always 0;
 */

int  main(void)
{
int i;
float x, y, z;
x = 1;
y = 2;
printf("%ld, ", x);
printf("%ld", y);
for (i = 0; i < 96; i++)
{
z = x + y;
printf(", %ld", z);
x = y;
y = z;
}
putchar('\n');
return (0);
}
