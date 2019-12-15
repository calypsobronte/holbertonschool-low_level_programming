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
unsigned int cont = 0;

if (h == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
if (cont > idx)
{
return (NULL);
}
temp = *h;
for (cont = 0; cont < idx; cont++)
{
new_node_next = temp;
temp = temp->next;
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->prev = new_node_next;
new_node->next = temp;
new_node_next->next = new_node;
if (temp != NULL)
{
temp->prev = new_node;
}
return (new_node);
}
