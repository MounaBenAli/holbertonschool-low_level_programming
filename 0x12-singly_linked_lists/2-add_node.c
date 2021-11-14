#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int _strlen(const char *s);
/**
 *add_node -  adds a new node at the beginning of a list_t list.
 *@head: pointer to first node
 *@str:string
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head != NULL && str != NULL)
	{
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);

	newnode->next = *head;
	*head = newnode;
	return (*head);
	}
	return (0);
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
