#include "lists.h"
/**
 * add_dnodeint_end- Insert new node at the end
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tail;

	newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	tail = *head;

	while (tail->next != NULL)
	{
	tail = tail->next;
	}

	tail->next = newnode;
	return (newnode);
}
