#include "holberton.h"
/**
 * _strstr - ho
 * @haystack: cc
 * @needle: cc
 * Return: s + c
 */
char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
if (*needle == 0)
return (haystack);
for (a = 0; haystack[a] != '\0'; a++)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[a + b] != needle[b])
break;
}
if (needle[b] == '\0')
return (haystack + a);
}
return (0);
}