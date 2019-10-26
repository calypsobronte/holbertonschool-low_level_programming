#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
* print_all - function that print strings
* @format: list of arguments c, i, f, *s
* Return: void
*/
void print_all(const char * const format, ...)
{
unsigned int a = 0, b;
char *string;
va_list valist;
while (format && format[a])
{
va_start(valist, format);
while (format[a])
{
b = 1;
switch (format[a++])
{
case 'c':
printf("%c", va_arg(valist, int));
break;
case 'i':
printf("%i", va_arg(valist, int));
break;
case 'f':
printf("%f", va_arg(valist, double));
break;
case 's':
string = va_arg(valist, char *);
if (string == NULL)
{
string = "(nil)";
}
printf("%s", string);
break;
default:
b = 0;
break;
}
if (format[a] && b)
{
printf(", ");
}
}
va_end(valist);
}
printf("\n");
}
