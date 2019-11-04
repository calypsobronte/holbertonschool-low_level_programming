#include "lists.h"
/**
 * print_listint - function que print a linked list integer
 * @h: pointer
 * Return: retur of number of positions
 */
size_t print_listint(const listint_t *h)
{
unsigned int cont = 0;
while (h != NULL)
{
printf("%d\n", h[0].n);
h = h[0].next;
cont++;
}
return (cont);
}
