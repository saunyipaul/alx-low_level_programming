#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function prototype
 * @head: pointer to a pointer
 * @idx: parameter
 * @n: parametr
 * function that insert a node at a given position
 * Return: always 0 otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert_node = malloc(sizeof(listint_t));
	listint_t *current_node = *head;
	unsigned int i;

	if (insert_node == NULL)
	{
		return (NULL);
	}
	insert_node->n = n;
	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(insert_node);
		return (NULL);
	}
	insert_node->next = current_node->next;
	current_node->next = insert_node;
	return (insert_node);
}
