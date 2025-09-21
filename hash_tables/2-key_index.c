#include "hash_tables.h"

/**
 * key_index - index falan filan
 * @key: kiiiiiiiiiiii
 * @size: olcu
 * Return: rrrrrrrrrr
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (!key || size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
