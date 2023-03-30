#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node_end - function protype
 * @head: pointer
 * @h: pointer
 * function that adds node at the end of a list_t
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		list_t *end_node = *head;

		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = node;
	}
	return (node);
}
