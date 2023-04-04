#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - function prototype
 * @head: pointer
 * @index: parameter
 * function that returns the nth node of a list
 * Return: not existing NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *first_node = head;

	while (first_node != NULL)
	{
		if (count == index)
		{
			return (first_node);
		}
		count++;
		first_node = first_node->next;
	}
	return (NULL);
}
