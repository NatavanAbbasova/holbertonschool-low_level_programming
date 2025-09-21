#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - falan filan
 * @ht: ghfhfgjgkj
 * @key: kiiiiiiiiiiiii
 * Return: rrrrrrrrrr
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
