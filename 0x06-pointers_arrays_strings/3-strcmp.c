#include "holberton.h"
/**
 * _strcmp -  description
 * @s1: ///
 * @s2: ---
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, j;
while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
i++;
int a = s1[i] + '0';
int b = s2[i] + '0';
j = a - b;
return (j);
}
