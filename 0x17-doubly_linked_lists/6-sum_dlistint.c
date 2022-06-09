#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the data of a dlistint_t linked list
 * @head: pointer to the beginning node
 * Return: sum of the data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
