#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints all elements of a listint_t list safely.
 * @head: Pointer to the head node of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}
	return (node_count);
}
