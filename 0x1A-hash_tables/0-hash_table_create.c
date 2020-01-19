#include "hash_tables.h"
/**
 * *hash_table_create - Create hash table
 * @size: Size
 * Return: hash table or Null
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;

if (size <= 0)
{
return (NULL);
}
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
return (NULL);
}
hash_table[0].array = calloc(size, sizeof(char *));
if (hash_table[0].array == NULL)
{
return (NULL);
}
hash_table[0].size = size;
return (hash_table);
}
