#include "hash_tables.h"

/**
 * hash_table_get - get a certain value
 * @hash_table: the hash table to look in
 * @key: the key
 * Return: the value
*/



char *hash_table_get(const hash_table_t *hash_table, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (hash_table == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, hash_table->size);
	node = hash_table->array[index];
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
