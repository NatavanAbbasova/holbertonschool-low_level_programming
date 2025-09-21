#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - print eleyir
 * @ht: fjhfkutuyi
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int a = 1;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (!a)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			a = 0;
			tmp = tmp->next;
		}
	}

	printf("}\n");
}
