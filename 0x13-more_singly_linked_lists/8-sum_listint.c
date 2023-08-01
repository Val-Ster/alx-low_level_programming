#include "lists.h"

/**
 * sum_listint - Calculates the sum of all elements in a listint_t list.
 * @head: Pointer to the head node of the list.
 * Return: The sum of all elements in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

