#include "list.h"

/**
 * print_list - function that prints all the elements
 *
 * @h: head of the element
 * Return: number of nodes on f
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != '\0'; i++)
	{
		if (h->str == NULL)
		       printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (i);
}
