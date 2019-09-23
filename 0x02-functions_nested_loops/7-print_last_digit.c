#include "holberton.h"
/**
 * main - empty file
 *
 * Return: ALways 0 (Success)
 */
int print_last_digit(int n)
{
    int return0;
    
    if (n > 0)
    {
        return0 = n % 10;
        _putchar(return0 + '0');
    }
    else
    {
        return0 = (n * -1) % 10;
        _putchar(return0 + '0');
    }
    return return0;
}
