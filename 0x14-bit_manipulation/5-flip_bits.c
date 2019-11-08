#include "holberton.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m;
unsigned int cont = 0;
while (flip)
{
if ((flip & 1) == 1)
{
cont++;
}
flip >>= 1;
}
return (cont);
}