#include "holberton.h"
#include <stdio.h>
int end(char *t);
int combine(char *s, int n);
/**
* is_palindrome - Palin
* @s: Parameter string
*
* Return: int
*
*/
int is_palindrome(char *s)
{
int n = end(s);
if (n <= 1)
return (1);
return (combine(s, n));
}

/**
* end - Set pinter in end string
* @t: Pointer parameter
* Return: int
*/
int end(char *t)
{
if (*t == '\0')
{
return (0);
}
t++;
return (1 + end(t));
}

/**
* combine - Combine
* @s: String
* @n: Size of string
* Return: :smile:
*/
int combine(char *s, int n)
{
if (n <= 1)
return (1);
else if (*s == *(s + n - 1))
{
return (combine(s + 1, n - 2));
}
return (0);
}
