#include "holberton.h"
/**
 * read_textfile - function reads a text file and prints
 * it to the POSIX standard output.
 * @filename: char
 * @letters: list
 * Return: size of the list
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int open_file;
ssize_t sizeoflist;
char *buffer = malloc(letters);
if (filename == NULL)
return (0);
open_file = open(filename, O_RDONLY, 0600);
if (open_file == -1)
{
return (0);
}
sizeoflist = read(open_file, buffer, letters);
buffer[letters] = '\0';
close(open_file);
printf("%s", buffer);
return (sizeoflist);
}
