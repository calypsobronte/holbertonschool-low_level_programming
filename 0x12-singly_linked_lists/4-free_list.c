#include "lists.h"
/**
 * free_list - function que free a list
 * @head: pointer of list
 */
void free_list(list_t *head)
{
list_t *free_lists;
while (head)
{
free_lists = head;
free(head[0].str);
free(head);
head = free_lists[0].next;
}
free(head);
}
