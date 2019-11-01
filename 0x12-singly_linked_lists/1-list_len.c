#include "lists.h"
/**
 * list_len - function que print a linked list
 * @h: pointer
 * Return: retur of number of positions
 */
size_t list_len(const list_t *h)
{
unsigned int cont = 0;
while (h != NULL)
{
h = h[0].next;
cont++;
}
return (cont);
}
