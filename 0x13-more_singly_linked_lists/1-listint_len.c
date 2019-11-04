#include "lists.h"
/**
 * listint_len - function que print a linked list integer
 * @h: pointer
 * Return: retur of number of positions
 */
size_t listint_len(const listint_t *h)
{
unsigned int cont = 0;
while (h != NULL)
{
h = h[0].next;
cont++;
}
return (cont);
}
