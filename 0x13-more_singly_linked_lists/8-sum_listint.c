#include "lists.h"
/**
 * sum_listint - function sum
 * @head: pointer of list
 * Return: return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *aux = head;
if (aux != NULL)
{
while (aux != NULL)
{
sum += aux[0].n;
aux = aux[0].next;
}
return (sum);
}
return (0);
}
