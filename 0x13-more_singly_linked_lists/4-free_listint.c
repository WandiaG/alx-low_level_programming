#include "lists.h"

/**
 * free_listint - frees a node
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		free(current);
		current = next;
	}
}

