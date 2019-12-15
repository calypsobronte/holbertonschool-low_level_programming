#include "lists.h"
/**
 * *get_dnodeint_at_index - fucntion than get the node at index
 * @head: point of list
 * @index: number of index list
 * Return: returns null in case it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int cont = 0;
while (head)
{
if (cont == index)
{
return (head);
}
head = head[0].next;
cont++;
}
return (NULL);
}
