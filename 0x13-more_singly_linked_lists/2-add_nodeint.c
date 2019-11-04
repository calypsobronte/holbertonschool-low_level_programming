#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_element;
new_element = malloc(sizeof(listint_t));
if (new_element == NULL)
{
return (NULL);
}

new_element[0].n = n;
new_element[0].next = *head;
*head = new_element;

return (new_element);
}
