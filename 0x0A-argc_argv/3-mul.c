#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul of two numbers
 * atoi: Converts a string to its numeric value (integer)
 * @argc: integer
 * @argv: point string
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int a;
if (argc == 3)
{
a = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", a);
return (0);
}
else
printf("Error\n");
return (1);
}
