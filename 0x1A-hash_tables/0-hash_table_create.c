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
	hash_table_t *new_table;

	/**allocate table**/
	new_table = malloc(sizeof(hash_table_t));

	/**return NULL if mem allocation fails**/
	if (new_table == NULL)
		return (NULL);

    new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t*) * size);

	/**return NULL if mem allocation fails**/
	if (new_table->array == NULL)
		{
			free(new_table);
			return(NULL);
		}
		for (; i < size; ++i) 
			new_table->array[i] = NULL;
	return (new_table);
}