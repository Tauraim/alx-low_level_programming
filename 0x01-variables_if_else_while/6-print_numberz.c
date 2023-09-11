#include <stdio.h>

/**
 * main - entry point ain function
 * Description: 'print all single digit numbers'.
 * Return: always return zero if success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
