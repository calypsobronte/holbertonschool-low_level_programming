#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that print numbers
 * @separator: var const char point
 * @n: var const unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int a;
/* initialize valist for num number of arguments */
va_start(valist, n);
/* if an empty parameter is sent return 0 */
if (n == 0)
{
return;
}
/* access all the arguments assigned to valist */
for (a = 0; a < n; a++)
{
printf("%i", va_arg(valist, int));
if (a != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
/* clean memory reserved for valist */
va_end(valist);
}
