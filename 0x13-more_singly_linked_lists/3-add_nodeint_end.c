#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function prototype
 * @head: pointer to the list
 * @n: paramter of the new node
 * function to add a node at the end
 * Return: Null if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node = malloc(sizeof(listint_t));

	if (new_end_node == NULL)
	{
		return (NULL);
	}
	new_end_node->n = n;
	new_end_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_end_node;
	}
	else
	{
		listint_t *current_node;

		current_node = *head;
		while (current_node != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_end_node;
	}
	return (new_end_node);
}
