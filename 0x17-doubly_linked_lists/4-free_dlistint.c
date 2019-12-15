#include "lists.h"
/**
 * free_dlistint - function free list
 * @head: head of the list and point of the struct
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head[0].next;
free(temp);
}
}
