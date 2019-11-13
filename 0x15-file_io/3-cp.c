#include "holberton.h"
/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, file_read, file_write;
char buffer[SIZEOF];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"); exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); exit(98);
}
file_to = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]); exit(99);
}
file_read = 1;
while (file_read)
{
file_read = read(file_from, buffer, SIZEOF);
if (file_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]); exit(98);
}
if (file_read > 0)
{
file_write = write(file_to, buffer, file_read);
if (file_write != file_read || file_write  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]); exit(99);
}
}
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd  %i\n", file_from); exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to); exit(100);
}
return (0);
}
