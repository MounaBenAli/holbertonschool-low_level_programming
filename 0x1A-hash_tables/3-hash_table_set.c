#include "hash_tables.h"

/**
 * create_element - creates new node
 * @key : the key cannot be empty str
 * @value : the value associated with key
 *
 * Return: new node
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);
	if (new)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
	}

	return (new);

}


/** Handle Collision function**/
hash_node_t *handle_collision(hash_node_t **table, const  char *key,
const char *value, size_t index)
{
	hash_node_t *element, *head;


	head = table[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (head);
		}
		head = head->next;
	}
	/** add new element**/
		element = create_element(key, value);
		element->next = table[index];
		table[index] = element;
		return (element);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht : the hash table to be updated with key/value pair
 * @key : the key cannot be empty str
 * @value : the value associated with key
 *
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int  index;
	hash_node_t *element, **table;

	if (ht == NULL)
		return (0);
		
	table = ht->array;
	index = key_index((const unsigned char *)key, ht->size);

	if (strlen(key) == 0)
	{
		return (0);
	}

	if (table[index] != NULL)
	/** here we have collision**/
	{
		if (!handle_collision(table, key, value, index))
			return (0);
		
		return (1);
	}

	    element = create_element(key, value);
		if (element == NULL)
			return (0);
		table[index] = element;

	return (1);
}
