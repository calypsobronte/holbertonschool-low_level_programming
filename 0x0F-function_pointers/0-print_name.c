#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funcion que me permite imprimir el nombre que me trae el main
 * @name: parameter
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
