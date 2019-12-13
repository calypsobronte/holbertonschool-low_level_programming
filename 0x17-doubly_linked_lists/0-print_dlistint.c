#include "lists.h"
/**
 * print_dlistint - print elements of list
 * @h: point of list
 * Return: cont of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t cont = 0;
for (cont = 0; h != NULL; cont++)
{
printf("%d\n", h->n);
h = h[0].next;
}
return (cont);
}
