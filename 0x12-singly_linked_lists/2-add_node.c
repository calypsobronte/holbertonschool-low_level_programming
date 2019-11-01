#include "lists.h"
/**
 * add_node - function que print a linked list
 * @head: pointer of list
 * @str: point
 * Return: return of address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_element;
int a = 0;
new_element = malloc(sizeof(list_t));
if (new_element == NULL)
{
return (NULL);
}
new_element[0].str = strdup(str);
new_element[0].next = *head;
*head = new_element;
while (str[a])
{
a++;
}
new_element[0].len = a;
return (new_element);
}
