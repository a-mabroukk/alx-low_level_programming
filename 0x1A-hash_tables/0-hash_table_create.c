#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 *
 * @size: size of table
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int items = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (items = 0; items < size; items++)
	{
		table->array[items] = NULL;
	}
	return (table);
}
