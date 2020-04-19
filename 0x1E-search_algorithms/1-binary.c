#include "search_algos.h"

/**
* print_array - function print array of range
* @array: point of array
* @left: start
* @right: limit
*/

void print_array(int *array, int left, int right)
{
int i;

printf("Searching in array: ");
for (i = left ; i <= right ; i++)
{
if (i + 1 <= right)
printf("%d, ", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
}

/**
* binary_search - function that searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array: pointer of array
* @size: number elements of array
* @value: value
* Return: -1
*/

int binary_search(int *array, size_t size, int value)
{
int right = 0, left = 0, m = 0;

if (array == NULL)
return (-1);

right = size - 1;
left = 0;
while (left <= right)
{
print_array(array, left, right);
m = (right + left) / 2;
if (array[m] < value)
{
left = m + 1;
}
else if (array[m] > value)
{
right = m - 1;
}
else
{
return (m);
}
}
return (-1);
}
