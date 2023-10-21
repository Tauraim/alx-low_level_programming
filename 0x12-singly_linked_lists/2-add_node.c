#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that add node at the begining of list_t
 * @head: double pointer to ther list_t list
 * @str: new string to add to node
 * Return: the address to the new element, or NULL at fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);

}
