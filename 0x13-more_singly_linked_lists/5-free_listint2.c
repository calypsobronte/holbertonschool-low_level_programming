#include "lists.h"
/**
 * free_listint2 - function que free momery
 * @head: pointer of list
 */
void free_listint2(listint_t **head)
{
listint_t *free_lists;
if (head != NULL)
{
while (*head != NULL)
{
free_lists = *head;
*head = free_lists[0].next;
free(free_lists);
}
}
else
{
return;
}
free(*head);
head = NULL;
}
