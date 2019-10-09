#include "holberton.h"
/**
 * prime_recu - print
 * @n: piont
 * @i: piont
 * Return: -1
 */
int prime_recu(int n, int i)
{
if (i == n)
{
return (1);
}
if (i % n == 0)
{
return (0);
}
return (prime_recu(n + 1, i));
}

/**
 * is_prime_number - print
 * @n: piont
 * Return: -1
 */

int is_prime_number(int n)
{
int i = 2;
if (n == 1 || n < 0)
{
return (0);
}
return (prime_recu(i, n));
}
