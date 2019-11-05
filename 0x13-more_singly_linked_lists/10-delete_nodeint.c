#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: point of point
 * @index: of node
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *actual, *temp;
unsigned int cont = 0;
if (head == NULL || *head == NULL)
{
return (-1);
}
temp = *head;
while (temp)
{
if (index - 1 == cont)
{
actual = temp[0].next;
temp[0].next = actual[0].next;
free(actual);
return (1);
}
if (index == 0)
{
actual = *head;
*head = actual[0].next;
free(actual);
return (1);
}
temp = temp[0].next;
cont++;
}
return (-1);
}

