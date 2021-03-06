#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int _strlen(const char *s);


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to first node
 * @str:string
 * Return: the address of the new element, or NULL if it failed
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
	tail->len = _strlen(str);
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

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
int len = 0;
while (*s)
{
s++;
len++;
}
return (len);
}
