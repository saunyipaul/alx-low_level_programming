#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function prototype
 * @head: pointer
 * function that frees a node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *r_current;

	while (head != NULL)
	{
		r_current = head;
		head = head->next;
		free(r_current);
	}
}
