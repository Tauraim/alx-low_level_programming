#include "main.h"

/**
 * _strncat - cocatenates two strings
 * @dest: parameter for string destination
 * @src:  parameter for string source on
 * @n: parameter
 * Return: zero
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
