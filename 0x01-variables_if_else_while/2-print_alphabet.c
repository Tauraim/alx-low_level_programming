#include <stdio.h>
/**
 * main - print out the alphabet in lower case
 * Return: return zero if the function is a success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
