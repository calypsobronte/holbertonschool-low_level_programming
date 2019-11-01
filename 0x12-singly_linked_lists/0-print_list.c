#include "lists.h"
/**
 * print_list - function que print a linked list
 * @h: pointer
 * Return: retur of number of positions
 */
size_t print_list(const list_t *h)
{
unsigned int cont;
if (h)
{
while (h != NULL)
{
if (h[0].str != NULL)
{
printf("[%d] %s\n", h[0].len, h[0].str);
}
else
{
printf("[0] (nil)\n");
}
h = h[0].next;
cont++;
}
}
return (cont);
}
