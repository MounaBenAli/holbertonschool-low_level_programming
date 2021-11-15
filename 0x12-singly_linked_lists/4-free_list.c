#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_list - frees a list_t list.
 *@head: head of the list
 *Return: nothing
 */

void free_list(list_t *head)
{

	list_t *temp;

	while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
}
	free(head);
}
