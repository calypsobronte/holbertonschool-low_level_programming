#include "holberton.h"
/**
 * rot13 - conver string o rot13 -
 * //abcdefghijklmABCDEFGHIJKLM += 13 -
 * //nopqrstuvwzyzNOPQRSTUVWXYZ = -13
 * @s: letter
 * Return: s
 */
char *rot13(char *s)
{
int i;
i = 0;
while (s[i] != 0)
{
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
{
s[i] = (s[i] + 13);
}
else
while ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
{
s[i] = (s[i] - 13);
}
i++;
}
return (s);
}
