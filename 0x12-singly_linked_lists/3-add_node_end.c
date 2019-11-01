#include "lists.h"
/**
 * add_node_end - function que print a linked list
 * @head: pointer of list
 * @str: point
 * Return: return of address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *end = *head;
int a = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
while (str[a])
{
a++;
}
new[0].len = a;
new[0].str = strdup(str);
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
