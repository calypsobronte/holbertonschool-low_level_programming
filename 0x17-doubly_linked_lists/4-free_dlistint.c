#include "lists.h"
/**
 * 
 * 
 * 
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
