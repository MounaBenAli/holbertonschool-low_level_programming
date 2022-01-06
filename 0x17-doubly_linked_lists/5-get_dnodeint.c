#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node
 * @head: Pointer to the head
 * @index: The node index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
