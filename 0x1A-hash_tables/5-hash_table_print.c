#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: print key/value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
		return;

  printf("{");
	while (count < ht->size)
	{
		tmp = ht->array[count];
		while (tmp)
		{
			printf("'%s' : '%s'", tmp->key, tmp->value);
			if (ht->array[count + 1] == NULL)
				break;
			printf(", ");
			tmp = tmp->next;
		}
		count++;
	}
	printf("}\n");
}
