#include "main.h"

/**
 * swap_int - swap two integers
 * @a: parameter one
 * @b: parameter two
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
