#include "lists.h"

/**
 * listint_len - returnd number of elements in a linked Listint_t
 * @h: linked list of type listint
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
