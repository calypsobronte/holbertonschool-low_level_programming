#include "hash_tables.h"
/**
 * hash_table_delete - that deletes a hash table.
 * @ht: s the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *tmp;
hash_node_t *node_t;

if (ht)
{
while (i < ht[0].size)
{
if (ht[0].array[i] != NULL)
{
tmp = ht[0].array[i];
while (tmp)
{
node_t = tmp;
tmp = tmp[0].next;
free(node_t[0].key);
free(node_t[0].value);
free(node_t);
}
}
i++;
}
free(ht->array);
free(ht);
}
}
