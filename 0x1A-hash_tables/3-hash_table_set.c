  #include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value of key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *_value = NULL;
	hash_node_t *tmp = NULL;
	hash_node_t *new = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0 || key == NULL)
		return (0);
	_value = strdup(value);
	if (_value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = _value;
			tmp->value = strdup(value);
			free(_value);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = _value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
