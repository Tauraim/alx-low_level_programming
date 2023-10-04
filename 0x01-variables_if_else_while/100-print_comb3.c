#include <stdio.h>

/**
 * main - entry point main core function
 * Description: 'print possible different combinations'.
 * Return: always return a zero if success.
 */
int main(void)
{
	/* assign variables with not value*/
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (m = 1; m <+ 9; n++)
	{
		putchar(m);
	}
	if (n == 8; && m == 9)
		continue;
		putchar(',');
		pitchar(' ');
	return (0);
}
