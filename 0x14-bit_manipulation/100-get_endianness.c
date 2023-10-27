#include "main.h"

/**
 * get_endianness - functions check endianess
 *
 * Return: 0 if big endian 1 little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
