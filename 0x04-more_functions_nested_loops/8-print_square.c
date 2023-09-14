#include "main.h"

/**
 * print_square - print square and a new line
 * @size: return number
 * Return: always zero when success
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('\n');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
