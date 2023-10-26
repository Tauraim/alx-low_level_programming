#include "lists.h"

/**
 * reverse_listint - function to reverse a listint_t
 * @head; parameter pointer
 *
 * Return: a pointer to the first node to the reversed
 */


{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *next;
		*head = next;
	}
	*head = prev;

	return (*head);
}
