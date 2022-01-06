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
	size_t length = 0;
	const dlistint_t *tmp;


	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
	printf("%d \n", tmp->n);
	length++;
	}
	return (length);

	if (!tmp)
	return(0);
}
