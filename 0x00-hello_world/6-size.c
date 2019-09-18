#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of a int: %ld byte(s)", sizeof(int));
	printf("Size of a long: %ld byte(s)", sizeof(long int));
	printf("Size of a long long: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
