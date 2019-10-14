#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result
 * atoi: Converts a string to its numeric value (integer)
 * @argc: integer
 * @argv: point string
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
int a, b = 0;
/* a value */
/* b count */
if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("%d\n", 0);
return (0);
}
if (a % 25 >= 0)
{
b += a / 25;
a = a % 25;
}
if (a % 10 >= 0)
{
b += a / 10;
a = a % 10;
}
if (a % 5 >= 0)
{
b += a / 5;
a = a % 5;
}
if (a % 2 >= 0)
{
b += a / 2;
a = a % 2;
}
if (a % 1 >= 0)
{
b += a / 1;
}
printf("%d\n", b);
return (0);
}
