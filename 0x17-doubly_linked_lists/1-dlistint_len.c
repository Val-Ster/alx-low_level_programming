#include "lists.h"

/**
 * dlistint_len - return the number of elements in dlistint_t.
 * @h: pointer to the head of the list
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
