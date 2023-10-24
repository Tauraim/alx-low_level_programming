#include "lists.h"

/**
 * sum_listint - function that returns the sum of data (n)
 * @head: parameter pointer
 *
 * Return: zero if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
