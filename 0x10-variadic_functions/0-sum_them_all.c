#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns all sums of a parameter
 * @n: var unsigned integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int sum = 0;
unsigned int a;
/* initialize valist for num number of arguments */
va_start(valist, n);
/* if an empty parameter is sent return 0 */
if (n == 0)
{
return (0);
}
/* access all the arguments assigned to valist */
for (a = 0; a < n; a++)
{
sum += va_arg(valist, unsigned int);
}
/* clean memory reserved for valist */
va_end(valist);
/* return sum of the numbers */
return (sum);
}
