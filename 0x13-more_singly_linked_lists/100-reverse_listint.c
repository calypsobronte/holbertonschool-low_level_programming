#include "lists.h"
/**
 * *reverse_listint - function that reverses a listint_t linked list.
 * @head: point of point
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *actual = NULL, *temp = NULL;
while (*head != NULL)
{
actual = (*head[0]).next;
(*head[0]).next = temp;
temp = *head;
*head = actual;
}
*head = temp;
return (*head);
}

