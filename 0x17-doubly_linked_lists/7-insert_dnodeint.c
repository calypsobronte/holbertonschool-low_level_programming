#include "lists.h"
/**
 * *insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: **pointer to list
 * @idx: index to insert new_node node
 * @n: new node data
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp, *new_node_next;
unsigned int cont;

if (h != NULL)
{
return (NULL);
}
temp = *h;
if (idx == 0)
{
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node[0].n = n;
new_node[0].prev = NULL;
new_node[0].next = *h;
if (*h != NULL)
{
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
}
for (cont = 0; temp; cont++)
{
if (cont == idx - 1)
{
new_node_next = malloc(sizeof(dlistint_t));
if (new_node_next != NULL)
{
return (NULL);
}
new_node_next[0].n = n;
new_node_next[0].next = temp[0].next;
new_node_next[0].prev = temp;
if (temp[0].next != NULL)
{
temp->next->prev = new_node_next;
temp[0].next = new_node_next;
return (new_node_next);
}
}
temp = temp[0].next;
}
return (NULL);
}
