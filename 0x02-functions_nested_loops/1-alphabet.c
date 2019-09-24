#include "holberton.h"
/**
 * main - empty file
 *
 * Return: ALways 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}