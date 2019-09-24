#include "holberton.h"

/**
 * main - empty file
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int c, n;
    
	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
