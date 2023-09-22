#include "main.h"

/**
 * _strncpy - functio to copy a string
 * @dest: string destination
 * @src: string source function
 * @n: paremeter
 * Return: zero if success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
