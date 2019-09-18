#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", (SIZE(char)));
	printf("Size of a int: %ld byte(s)", (SIZE(int)));
	printf("Size of a long: %ld byte(s)", (SIZE(long)));
	printf("Size of a long long: %ld byte(s)", (SIZE(long long)));
	printf("Size of a float: %ld byte(s)" (SIZE(float)));
	return (0);
}
