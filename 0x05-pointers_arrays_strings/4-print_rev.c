#include "main.h"

/**
 * print_rev - print a string a in reverse
 * @s: fuction parameter
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\n'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar (s[i]);
	_putchar ('\n');
}
