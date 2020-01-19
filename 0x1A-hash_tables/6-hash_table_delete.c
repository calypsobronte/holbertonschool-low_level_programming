#include "hash_tables.h"
/**
 * hash_table_delete - that deletes a hash table.
 * @ht: s the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_tmp2_t *tmp2, *tmp;
unsigned long int x;

if (ht == NULL)
return;
for (x = 0; x < ht->size; x++)
{
tmp2 = ht->array[x];
while (tmp2)
{
tmp = tmp2->next;
free(tmp2->key);
free(tmp2->value);
free(tmp2);
tmp2 = tmp;
}
}
free(ht->array);
free(ht);
}
