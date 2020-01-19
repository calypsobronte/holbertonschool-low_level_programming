#include "hash_tables.h"
/**
 * hash_table_delete - that deletes a hash table.
 * @ht: s the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;

hash_node_t *tmp;

while (i <= ht->size)
{
tmp = ht->array[i];
if (tmp != NULL)
{
while (tmp != NULL)
{
hash_node_t *tmp2 = tmp->next;

free(tmp->key);
free(tmp->value);
free(tmp);
tmp = tmp2;
}
}
i = i + 1;
}
free(ht->array);
free(ht);
}
