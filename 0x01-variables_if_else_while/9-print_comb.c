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
    int c = 0;
    while (c < 10)
        putchar(c + '0');
    if (c < 9)
        putchar(',');
        putchar(' ');
    c++;
    putchar('\n');
    return (0);
}
