#include "holberton.h"
/**
 * factorial - print
 * @s: piont
 */
int factorial(int n)
{
if (n > 0)
return (n * factorial(n - 1));
else if (n == 0)
return (1);
else
return (-1);
}