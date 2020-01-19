#include "hash_tables.h"
/**
 * *add_node - functin add new node
 * @head: Head of node
 * @key: key of node
 * @value: value of the key
 * Return: address of the new node or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (NULL);
}
new_node[0].key = strdup(key);
new_node[0].value = strdup(value);
new_node[0].next = *head;

*head = new_node;
return (new_node);
}
/**
 * hash_table_set - adds element to the hash table
 * @ht: pointer
 * @key: array of key
 * @value: value to the key
 * Return: 1 if it succeds or 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;

if (strcmp(key, "") == 0 || ht == NULL || key == NULL || value == NULL)
{
return (0);
}

index = key_index((unsigned char *)key, ht[0].size);
if (!ht[0].array)
{
return (0);
}
if (ht[0].array[index] && strcmp(key, ht[0].array[index][0].key) == 0)
{
ht[0].array[index][0].value = strdup(value);
return (1);
}
ht[0].array[index] = add_node(&ht[0].array[index], key, value);
return (1);
}
