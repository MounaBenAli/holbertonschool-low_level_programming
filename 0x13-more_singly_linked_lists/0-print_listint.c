#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - prints all elements of listint_t list
 *@h: head of the list
 *Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}

