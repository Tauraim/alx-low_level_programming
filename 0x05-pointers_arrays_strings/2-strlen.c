#include "main.h"

/**
 * _strlen - find lenght of the string
 * @s: parameter
 * Return: always zero
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
