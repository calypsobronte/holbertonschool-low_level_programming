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
int a, b, c = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < 48 || argv[a][b] > 57)
{
printf("%s\n", "Error");
return (1);
}
}
c += atoi(argv[a]);
}
printf("%d\n", c);
return (0);
}
