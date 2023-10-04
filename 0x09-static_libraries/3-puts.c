#include "main.h"

/**
 * _puts - print string and add line
 * @str: function parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');

}
