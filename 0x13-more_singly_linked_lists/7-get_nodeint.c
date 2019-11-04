#include "lists.h"
/**
 * get_nodeint_at_index - function get node int at index
 * @head: pointer of list
 * @index: integer
 * Return: return of address of new_list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int temp = 0;
listint_t *new_list, *aux = head;
while (temp < index)
{
if (aux != NULL)
{
aux = aux[0].next;
temp++;
}
else
{
return (NULL);
}
}
new_list = aux;
return (new_list);
}
