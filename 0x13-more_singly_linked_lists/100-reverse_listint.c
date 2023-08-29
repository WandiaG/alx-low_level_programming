#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the first node pointer.
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
