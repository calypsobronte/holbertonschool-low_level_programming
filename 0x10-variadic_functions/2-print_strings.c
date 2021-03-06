#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that print strings
 * @separator: var const char point
 * @n: var const unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int a;
char *p;
/* initialize valist for num number of arguments */
va_start(valist, n);
/* access all the arguments assigned to valist */
for (a = 0; a < n; a++)
{
p = va_arg(valist, char *);
if (p == NULL)
{
printf("(nil)");
}
else
{
printf("%s", p);
}
if (a != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
/* clean memory reserved for valist */
va_end(valist);
}
