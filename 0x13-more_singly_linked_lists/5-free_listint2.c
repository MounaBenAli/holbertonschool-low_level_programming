#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 *free_listint2 - frees a list_t list.
 *@head: pointer to the head node of the list
 *Return: nothing
 */

void free_listint2(listint_t **head)
{

	listint_t *temp;
temp = *head;

	while (temp != NULL)
	{
	temp = temp->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;

}
