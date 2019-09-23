#include "holberton.h"
/**
 * main - empty file
 *
 * Return: ALways 0 (Success)
 */
int print_last_digit(int n)
{
    int return1;
    
    if (n > 0)
    {
        return1 = n % 10;
        _putchar(return1 + '0');
    }
    else
    {
        return1 = (n * -1) % 10;
        _putchar(return1 + '0');
    }
    return return1;
}
