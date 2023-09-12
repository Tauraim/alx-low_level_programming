#include "main.h"

/**
 * main - entry point
 * Description: 'print alphabet in uppercase'
 * Return: return zero if successful
 */
int main(void)
{
	int (ch);

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);
	}
	_putchar ('\n');
	return (0);
}
