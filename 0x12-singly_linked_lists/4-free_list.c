#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function prototype
 * @head: pointer
 * function that frees list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node = head;

	while (node != NULL)
	{
		list_t *next_node = node->next;

		free(node->str);
		free(node);
		node = next_node;
	}
}
