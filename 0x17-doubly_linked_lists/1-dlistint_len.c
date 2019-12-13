#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked
 * @h: point of list
 * Return: cont of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t cont = 0;
for (cont = 0; h != NULL; cont++)
{
h = h[0].next;
}
return (cont);
}
