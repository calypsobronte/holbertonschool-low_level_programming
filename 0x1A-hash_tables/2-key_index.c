#include "hash_tables.h"
/**
 * key_index - that gives you the index of a key.
 * @key: string of key
 * @size: size of the array
 * Return: value of a specific key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
