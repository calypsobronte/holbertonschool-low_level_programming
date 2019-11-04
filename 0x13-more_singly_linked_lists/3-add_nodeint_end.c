#include "lists.h"
/**
 * *add_nodeint_end - function que print a list add nodes integer with end
 * @head: pointer of list
 * @n: const integer
 * Return: return of address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *end = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new[0].n = n;
new[0].next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (end[0].next != NULL)
{
end = end[0].next;
}
end[0].next = new;
return (new);
}
