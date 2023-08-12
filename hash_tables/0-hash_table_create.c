#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: a newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (!size)
		return (NULL);
	hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
