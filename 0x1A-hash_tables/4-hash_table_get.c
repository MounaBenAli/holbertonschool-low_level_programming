#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with key
* @ht : the hash table to look into
* @key : the key to look for
*
* Return: the value associated with the elemen or NULL if key not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int  index;
	hash_node_t *element;

	if (strlen(key) == 0 || key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	element = ht->array[index];
	if (element == NULL)
		return (NULL);
	while (strcmp(element->key, key) && element != NULL)
	{
		element = element->next;
	}

	if (element == NULL)
		return (NULL);
	else
		return (element->value);
}

