#include "hash_tables.h"

/**
 * key_index - return the index of a given key
 * @key: the given key
 * @size: size of the hash table
 * Return: index of the key
*/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ikey;

	if (!size)
		return (-1);
	if (!key)
		return (-1);
	ikey = hash_djb2(key) % size;
	return (ikey);
}
