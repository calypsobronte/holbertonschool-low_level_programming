#include "hash_tables.h"
/**
 * hash_table_delete - that deletes a hash table.
 * @ht: s the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;

hash_node_t *tmp;

while (i <= ht[0].size)
{
tmp = ht[0].array[i];
if (tmp != NULL)
{
while (tmp != NULL)
{
hash_node_t *tmp2 = tmp[0].next;

free(tmp[0].key);
free(tmp[0].value);
free(tmp);
tmp = tmp2;
}
}
i = i + 1;
}
free(ht[0].array);
free(ht);
}
