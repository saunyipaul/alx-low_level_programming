#include "lists.h"
#include <string.h>

/**
 * listint_len - prototype function for list links
 * function to return numbers of elements
 * @h: pointer to the list
 * Return: an element
 */

size_t listint_len(const listint_t *h)
{
	size_t count_node = 0;
	const listint_t *current_node;

	for (current_node = h; current_node != NULL; current_node =
			current_node->next)
	{
		count_node++;
	}
	return (count_node);
}
