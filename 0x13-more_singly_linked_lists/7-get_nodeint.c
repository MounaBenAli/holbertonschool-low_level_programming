#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: the index of the node
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index > count)
	{
	while (head != NULL  && count != index)
	{
	head = head->next;
	count++;
	}
	return (head);	
	}
	return (NULL);
}
