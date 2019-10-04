#include "holberton.h"
/**
 * cap_string - description
 * @s: descript
 * Return: j
 */
char *cap_string(char *s)
{
int i = 0, c;
while (s[i] != 0)
{
c = s[i];
if ((c == 44 || c == 59 || c == 46 || c == 33 || c == 63 ||
c == 34 || c == 40 || c == 41 || c == 123 ||
c == 125 || c == '\t' || c == 32 || c == '\n')
&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
{
s[i + 1] -= 32;
}
i++;
}
return (s);
}
