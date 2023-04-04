#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function prototype
 * @head: pointer to pointer
 * function that deletes a head node
 * Return: empty 0
 */

int pop_listint(listint_t **head)
{
	int values;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	values = temp->n;
	*head = temp->next;
	free(temp);
	return (values);
}
