#include "lists.h"

/**
 * free_dlistint - frees a dbly,
 * linked list.
 * @head: pointer to head of list.
 *
 * Return: No return.
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		/* traverse the list freeing each node */
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
