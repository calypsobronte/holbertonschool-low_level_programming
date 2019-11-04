#include "lists.h"
/**
 * free_listint - function que free momery
 * @head: pointer of list
 */
void free_listint(listint_t *head)
{
listint_t *free_lists;
while (head)
{
free_lists = head;
head = free_lists[0].next;
free(free_lists);
}
free(head);
}
