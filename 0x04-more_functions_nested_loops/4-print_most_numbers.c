#include "main.h"

/**
 * print_most_numbers - print numbers from zero to nine
 * Return: zero if success
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_puttchar(c);
			}
		}

	}
	_putchar('\n');
}
