#ifndef bit
#define bit
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif /* libraries Holberton of bit manipulation */
