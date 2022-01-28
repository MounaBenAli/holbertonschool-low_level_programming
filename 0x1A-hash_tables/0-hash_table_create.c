#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table = NULL;
	hash_node_t **arr = NULL;

	/**allocate table**/
	new_table = malloc(sizeof(hash_table_t));

	/**return NULL if mem allocation fails**/
	if (new_table == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)

	return (NULL);

		for (; i < size; ++i)
			arr[i] = NULL;

			   new_table->size = size;
	new_table->array = arr;
	return (new_table);
}
