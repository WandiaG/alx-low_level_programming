#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the node to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

