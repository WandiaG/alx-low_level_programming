#include "lists.h"

/**
 * pop_listint - deletes the head node.
 * @head: pointer to the first element of  linked list
 *
 * Return: the data of the deleted element,
 * or NULL if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (NULL);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

