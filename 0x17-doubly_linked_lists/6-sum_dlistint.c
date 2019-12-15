#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: list for add
 * Return: result of add
 */
int sum_dlistint(dlistint_t *head)
{
int add = 0;
while (head != NULL)
{
add += head->n;
head = head[0].next;
}
return (add);
}
