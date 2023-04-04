#include "lists.h"

/**
 * sum_listint - fuunction protype
 * @head: pointer
 * function that returns the sum of all data in alist
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *first_node = head;

	while (first_node != NULL)
	{
		sum += first_node->n;
		first_node = first_node->next;
	}
	return (sum);
}
