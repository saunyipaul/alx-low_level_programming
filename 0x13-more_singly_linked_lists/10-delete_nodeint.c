#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function prototype
 * @head: pointer to pointer
 * @index: parameter
 * function that deletes a node of a given index
 * Return: always o otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (-1);
	}
	return (-1);
}
