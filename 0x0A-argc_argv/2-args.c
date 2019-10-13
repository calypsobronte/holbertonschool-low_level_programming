#include <stdio.h>
/**
 * main - name
 * @argc: var inte
 * @argv: pointer string
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
