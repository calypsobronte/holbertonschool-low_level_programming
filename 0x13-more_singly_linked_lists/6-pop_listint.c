#include "lists.h"
/**
 * pop_listint - function deletes the head node of a lists
 * @head: pointer of list
 * Return: return of address of a
 */
int pop_listint(listint_t **head)
{
int a = 0;
listint_t *linked = *head;
if (linked == NULL)
{
a = 0;
}
else
{
a = (*head[0]).n;
*head = linked[0].next;
free(linked);
}
return (a);
}
