#include "holberton.h"
/**
 * sqrt_recu - print
 * @n: piont
 * @i: piont
 * Return: -1
 */
int sqrt_recu(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (sqrt_recu(n, i + 1));
}

/**
 * _sqrt_recursion - print
 * @n: piont
 * Return: -1
 */

int _sqrt_recursion(int n)
{
int i = 0;
return (sqrt_recu(n, i));
}