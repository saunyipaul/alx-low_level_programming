#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function pointer
 * @head: pointer to a pointer
 * function that frees a list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *r_current_list;

	while (*head != NULL)
	{
		r_current_list = *head;
		*head = (*head)->next;
		free(r_current_list);
	}
	*head = NULL;
}
