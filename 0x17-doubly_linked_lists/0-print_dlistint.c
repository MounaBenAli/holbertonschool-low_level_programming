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
	size_t num = 0;

	while (h != NULL)
	{
	printf("%d \n", h->n);
	h = h->next;
	num++;
	}
	return (num);
}
