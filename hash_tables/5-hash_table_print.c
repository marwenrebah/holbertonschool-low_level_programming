#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @hash_table: the hash table to print.
 */
void hash_table_print(const hash_table_t *hash_table)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char v = 0;

	if (hash_table == NULL)
		return;

	printf("{");
	for (i = 0; i < hash_table->size; i++)
	{
		if (hash_table->array[i] != NULL)
		{
			if (v == 1)
				printf(", ");

			node = hash_table->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			v = 1;
		}
	}
	printf("}\n");
}
