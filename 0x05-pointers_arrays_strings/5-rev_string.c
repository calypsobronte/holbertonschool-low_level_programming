#include "holberton.h"
/**
 *rev_string - h
 *@s: letter
 */
void rev_string(char *s)
{
int a, b = 0;
char c;
while (s[b] != 0)
b++;
b--;
for (a = 0; a < b; b--, a++)
{
c = s[a];
s[a] = s[b];
s[b] = c;
}
}