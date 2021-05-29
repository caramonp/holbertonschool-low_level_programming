#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *_table = NULL;

	_table = malloc(sizeof(hash_table_t));

	if (_table == NULL)
		return (NULL);

	_table->array = malloc(sizeof(hash_node_t *) * size);
	if (_table->array == NULL)
	{
		free(_table);
		_table = NULL;
		return (NULL);
	}
	while (index < size)
	{
		_table->array[index] = NULL;
		index++;
	}
	_table->size = size;
	return (_table);
}
