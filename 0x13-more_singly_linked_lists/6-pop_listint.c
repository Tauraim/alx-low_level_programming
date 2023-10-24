#include "lists.h"

/**
 * pop_listint - function to delete head node of listint_t
 * @head: double pointer
 *
 * Return: zero ir list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
