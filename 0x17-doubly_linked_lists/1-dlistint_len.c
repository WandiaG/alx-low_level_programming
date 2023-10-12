#include "lists.h"

/**
 * dlistint_len - returns the number of elements.
 * @h: poiner to the head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to the list */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
