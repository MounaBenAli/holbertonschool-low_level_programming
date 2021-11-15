#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 *add_node -  adds a new node at the end of a list_t list.
 *@head: pointer to first node
 *@temp: pointer to traverse the linked list
 *@str:string
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *temp;


	if (str != NULL)
	{
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	}
	tail->str = strdup(str);
	tail->len = strlen(str);
	tail->next = NULL;

	if (*head == NULL)
	{
	tail = *head;
	return (tail);
	}
    else
    {
      while (temp->next != NULL)
        {
            temp = temp->next;
	}
       temp->next = NULL;
	return (temp);
    }
return (0);
}
