#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - parametro en cada elemento
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
int n1 = 0, n2 = 0, n3 = 0;
int (*function)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
function = get_op_func(argv[2]);
if (function == NULL)
{
printf("Error\n");
exit(99);
}
n3 = function(n1, n2);
printf("%i\n", n3);
return (0);
}
