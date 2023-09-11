#include <stdio.h>

/**
 * main - entry point function core.
 * Description: 'print out single digit numbers of base ten from  zero.
 * Return: always return zero if successful.
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
