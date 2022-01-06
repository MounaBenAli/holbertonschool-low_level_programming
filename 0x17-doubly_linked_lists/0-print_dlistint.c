#include "lists.h"
/**
 * print_dlistint - function prints all elements of dlistint_t list
 *
 *@h: pointer to head of linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
	return (0);

	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
