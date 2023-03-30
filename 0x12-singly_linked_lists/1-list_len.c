#include "lists.h"

/**
 * list_len - function prototype
 * @h: pointer
 * function that returns the numberof element in a linked list
 * Return: number element
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
