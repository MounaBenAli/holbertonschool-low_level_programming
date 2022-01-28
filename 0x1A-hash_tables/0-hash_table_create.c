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
	/**allocate table**/
	hash_table_t *newtable = malloc(sizeof(hash_table_t));

	/*if error in mem allocation return NULL*/
	if (!newtable)
	{
	return (NULL);
	}

	/**allocate table entries**/
	newtable->array = malloc(sizeof(hash_node_t *));

	/**Set each to NULL needed for proper operation**/
	for (; i < size; ++i)
	{
		newtable->array[i] = NULL;
	}
	/*return pointer to new hash table*/
	return (newtable);
}
