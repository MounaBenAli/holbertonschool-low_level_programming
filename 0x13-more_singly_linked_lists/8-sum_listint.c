#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - adds the n data inside the list
 * @head: pointer to first node
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
