#include "lists.h"
/**
 * *add_dnodeint - function that adds a new node at the beginning
 * @head: **point of list
 * @n: new node add
 * Return: point of new nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node[0].n = n;
new_node[0].prev = NULL;
new_node[0].next = *head;
if (*head != NULL)
{
(*head)->prev = new_node;
}
*head = new_node;
return (new_node);
}
