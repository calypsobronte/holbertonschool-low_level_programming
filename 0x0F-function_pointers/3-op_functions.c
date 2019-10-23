#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - suma
 * @a: parameter
 * @b: size_t
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - resta
 * @a: parameter
 * @b: size_t
 * Return: resta
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplicacion
 * @a: parameter
 * @b: size_t
 * Return: mul
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division
 * @a: parameter
 * @b: size_t
 * Return: dividir
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - modal
 * @a: parameter
 * @b: size_t
 * Return: modal
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
