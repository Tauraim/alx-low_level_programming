#include "lists.h"

/**
 * free_listint - function that frees listsint_t
 * @head: parameter pointer
 *
 * Return: zero on success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
