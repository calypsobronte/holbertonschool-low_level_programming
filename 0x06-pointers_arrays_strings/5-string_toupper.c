#include "holberton.h"
/**
 * string_toupper - description
 * @s: descript
 * Return: j
 */
char *string_toupper(char *s)
{
int i;
while (s[i] != 0)
{
i++;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return (s);
}
