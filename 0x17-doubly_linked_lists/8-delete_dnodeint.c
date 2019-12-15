#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: **pointer to list
 * @index: index to insert new_node node
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int cont = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)[0].prev = NULL;
free(temp);
return (1);
}
while (temp && cont < index)
{
cont++;
temp = temp[0].next;
}
if (temp == NULL)
return (-1);
temp[0].prev[0].next = temp[0].next;
if (temp[0].next != NULL)
temp[0].next[0].prev = temp[0].prev;
free(temp);
return (1);
}
