#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - parametro en cada elemento
 * @array: parameter
 * @size: size_t
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (a = 0; a < size; a++)
if (cmp(array[a]) != 0)
{
return (a);
}
return (-1);
}
