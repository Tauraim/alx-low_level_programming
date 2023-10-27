#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: parameter
 * @index: positional paramete
 *
 * Return: 1 on success and -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
