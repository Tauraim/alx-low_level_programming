#include "main.h"
/**
 * print_numbers - function to print numbers zero to nine
 * Return: always zero when succes
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
