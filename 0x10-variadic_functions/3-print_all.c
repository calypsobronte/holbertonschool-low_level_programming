#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that print strings
 * @format: list of arguments c, i, f, *s
 * Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int a = 0, b = 0;
char *string;
va_list valist;
va_start(valist, format);
while (format && format[a])
{
switch (format[a])
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
}
b = a + 1;

while (format[b] &&
(format[b] == 'c' || format[b] == 'i' || format[b] == 'f' || format[b] == 's'))
{
printf(", ");
break;
}

a++;
}
printf("\n");
va_end(valist);
return;
}
