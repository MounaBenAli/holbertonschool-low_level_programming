#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer to first node
 * @n : const int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *temp;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
	return (tail);
	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
	*head = tail;
	return (*head);
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = tail;
	return (temp);
}
}
