#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position.
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node to delete (starting from 0).
 * Return: 1 if successful, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
