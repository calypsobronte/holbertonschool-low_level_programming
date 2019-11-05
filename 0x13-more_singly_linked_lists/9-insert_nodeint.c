#include "lists.h"
/**
 * *insert_nodeint_at_index - function inserts a new node
 * @head: pointer of list
 * @idx: pointer of list
 * @n: pointer of list
 * Return: return new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new,*temp;
unsigned int value = 0;
if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
new[0].n = n;
if (new == NULL)
{
return (NULL);
}
if (idx == 0)
{
new[0].next = *head;
*head = new;
return (new);
}
temp = *head;
while (temp != NULL)
{
if (value + 1 == idx)
{
new[0].next = temp[0].next;
temp[0].next = new;
return (new);
}
temp = temp[0].next;
value++;
}
free(new);
return (NULL);
}
