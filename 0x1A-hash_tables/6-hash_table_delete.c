#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *tmp = NULL, *point_next = NULL;

	if (ht == NULL)
		return;

	while (count < ht->size)
	{
		point_next = ht->array[count];
		while (tmp)
		{
			tmp = point_next;
			point_next = point_next->next;
			if (tmp->key != NULL)
				free(tmp->key);
			if (tmp->value != NULL)
				free(tmp->value);
			free(tmp);
		}
		free(ht->array[count]);
		count++;
	}
	free(ht->array);
	free(ht);
}
