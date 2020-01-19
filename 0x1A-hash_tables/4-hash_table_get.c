#include "hash_tables.h"
/**
 * hash_table_get - that retrieves a value associated with a key.
 * @ht: pointer
 * @key: arrya of key
 * Return: Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
hash_node_t *tmp;

if (!ht)
return (NULL);
index = key_index((unsigned char *)key, ht[0].size);
tmp = ht[0].array[index];
while (tmp)
{
if (strcmp(key, tmp[0].key) == 0)
return (tmp[0].value);
tmp = tmp[0].next;
}
return (NULL);
}
