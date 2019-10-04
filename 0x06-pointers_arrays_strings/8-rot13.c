#include "holberton.h"
/**
 * rot13 - string
 * @s: letter
 * Return: s
 */
char *rot13(char *s)
{
int i = 0, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[i] != 0)
{
for (j = 0; a[j] != 0; j++)
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
i++;
}
return (s);
}
