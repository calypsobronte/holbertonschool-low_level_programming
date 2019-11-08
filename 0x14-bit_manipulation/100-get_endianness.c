#include "holberton.h"
/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0
 */
int get_endianness(void)
{
int get = 1;
get >>= 1;
if (get == 0)
{
return (1);
}
else
{
return (0);
}
}
