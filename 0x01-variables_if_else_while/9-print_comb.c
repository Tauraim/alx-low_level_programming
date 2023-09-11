#include <stdio.h>

/**
 * main - entry point fuction core
 * Description: 'print all possible combinations of a single-digit numbers
 * Return; always return zero if successful
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
