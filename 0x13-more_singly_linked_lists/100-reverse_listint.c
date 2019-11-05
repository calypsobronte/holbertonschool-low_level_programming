#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: point of point
 * @index: of node
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *actual = NULL, *temp;
while (head != NULL)
{
actual = (*head[0]).next;
(*head[0]).next = temp;
temp = *head;
*head = actual;
}
*head = temp;
return (*head);
}

