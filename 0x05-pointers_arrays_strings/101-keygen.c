#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a
 * Return: 0
*/
int main(void)
{
char a = 0, b = 0;
int c = 0;
srand(time(0));
while (c <= 2645)
{
a = rand() % 128;
c += a;
putchar(a);
}
b = 2772 - c;
putchar(b);
return (0);
}