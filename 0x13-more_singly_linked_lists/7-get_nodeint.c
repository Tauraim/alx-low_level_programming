#include "lists.h"

/**
 * get_nodeint_at_index - function that return nth node of listint_t
 * @head: parameter pointer
 * @index: node position
 *
 * Return: NULL if node not exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
