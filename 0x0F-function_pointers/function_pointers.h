/* libraries Holberton */
#ifndef FunctionHolberton
#define FunctionHolberton
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* function holberton */