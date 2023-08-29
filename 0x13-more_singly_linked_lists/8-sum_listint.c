#include "lists.h"

/**
 * sum_listint - calculates the sum of the data in a listint_t list
 * @head: first node in the linked list
 * Return: Returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

