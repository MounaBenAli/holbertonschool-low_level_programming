#include "hash_tables.h"
/**
* hash_table_print - prints a hashtable
* @ht : the hash table to print
*
* Return: the value associated with the elemen or NULL if key not found
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *element;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0 ; i < (ht->size); i++)
	{
		element = ht->array[i];
		if (element != NULL)
		{
			while (element != NULL)
			{
				if (j == 1)
				{
					printf(", ");
				}
			printf("'%s' : '%s'", element->key, element->value);
			j = 1;
			element = element->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
