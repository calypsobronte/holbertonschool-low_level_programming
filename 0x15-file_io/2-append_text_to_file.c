#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: char const
 * @text_content: char
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int list, cont = 0, write_create;
if (filename == NULL)
{
return (-1);
}
list = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
if (list == -1)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[cont] != '\0')
{
cont++;
}
write_create = write(list, text_content, cont);
if (write_create == -1)
{
return (-1);
}
}
close(list);
return (1);
}
