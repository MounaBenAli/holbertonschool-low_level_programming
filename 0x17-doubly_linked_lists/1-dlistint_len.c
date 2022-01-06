#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list
 * @h: the pointer to node structure
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
