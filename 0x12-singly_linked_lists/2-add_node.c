#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int _strlen(char *s);
/**
 *add_node -  adds a new node at the beginning of a list_t list.
 *@head: pointer to first node
 *@str:string
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *s;
	unsigned int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	return (NULL);

	s = newnode->str;
	s = strdup(str);
	i = newnode->len;
	i = _strlen(s);
	if (s == NULL)
	{
	free(newnode);
	return (NULL);
	}
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
int len;
for (len = 0; *s != '\0'; s++)
	len++;
return (len);
}
