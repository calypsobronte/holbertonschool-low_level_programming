#include "holberton.h"
/**
 * _strstr - ho
 * @haystack: cc
 * @needle: cc
 * Return: s + c
 */
char *_strstr(char *haystack, char *needle)
{
int a, b, c = 0;
for (a = 0; haystack[a] != '\0'; a++)
{
for (b = 0; needle[b] != '\0'; b++)
if (haystack[a] == needle[b])
c++;
}
return (haystack + (c - 1));
}
