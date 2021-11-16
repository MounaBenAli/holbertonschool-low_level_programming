#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint - frees a list_t list.
 *@head: head of the list
 *Return: nothing
 */

void free_listint(listint_t *head)
{

	listint_t *temp;

	while (head != NULL)
{
	temp = head;
	head = head->next;
	free(temp);
}
	free(head);
}
