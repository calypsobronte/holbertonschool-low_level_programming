#include "lists.h"
/**
 * *add_dnodeint_end - function add node to the end of lists
 * @head: **point
 * @n: new node add
 * Return: point of new nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp = *head;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
