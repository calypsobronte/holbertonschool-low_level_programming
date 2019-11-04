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
listint_t *new, *aux = *head, *temp;
unsigned int value = 0;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
while (value < idx - 1)
{
if (aux != NULL)
{
aux = aux[0].next;
value++;
}
else
{
return (NULL);
}
}
new[0].n = n;
temp = aux[0].next;
new[0].next = temp;
aux[0].next = new;
return (new);
}
