#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - prototype function
 * function that prints all elements of a list
 * @h: pointer to the element
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current_node;

	for (current_node = h; current_node != NULL; current_node =
			current_node->next)
	{
		printf("%d\n", current_node->n);
		count++;
	}
	return (count);

}
