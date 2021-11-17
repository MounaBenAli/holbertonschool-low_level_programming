#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint- deletes the head node of a listint_t linked list
 *@head: head of the list
 *Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head != NULL && *head != NULL)
	{

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	}
	else
	return (0);
	return (n);
}
