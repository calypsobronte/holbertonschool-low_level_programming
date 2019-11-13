#include "holberton.h"
/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, file_read   , close_from, close_to;
char buffer[SIZEOF];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
exit(99);
}
while ((file_read = read(file_from, buffer, SIZEOF)) > 0)
{
if (write(file_to, buffer, file_read)  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
close_from = close(file_from);
if (close_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close to %i\n", close_from);
exit(100);
}
close_to = close(file_to);
if (close_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close to %i\n", close_to);
exit(100);
}
return (0);
}
