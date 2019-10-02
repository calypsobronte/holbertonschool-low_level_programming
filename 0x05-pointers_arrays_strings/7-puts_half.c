#include "holberton.h"
/**
 * puts_half - print
 * @str: string
 */
void puts_half(char *str)
{
int a, length_of_the_string = 0;
while (str[length_of_the_string] != 0)
{
length_of_the_string++;
}
if (length_of_the_string % 2 != 0)
{
a = (length_of_the_string + 1) / 2;
}
else
{
a = length_of_the_string / 2;
}
while (a < length_of_the_string)
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
