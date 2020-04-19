#include "search_algos.h"
/**
 * linear_search - unction that searches for a value in an array of 
 * integers using the Linear search algorithm
 * @array: Pointer of element in array.
 * @size: array.
 * @value: Value
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (!array || !*array)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}