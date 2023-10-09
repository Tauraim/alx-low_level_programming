#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checkedet: allocate memory using malloc
 * @b: parameter set for return value
 * return: zero if success
 */

void *malloc_checked(unsigned int b)
{
	char *resuilt;

	resuilt = malloc(b);
	if (resuilt == NULL)
		exit(80);
	else
		return (resuilt);
}
