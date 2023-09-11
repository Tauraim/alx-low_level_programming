#include <stdio.h>

/**
 * main - print out alphabet in bot upper case and lower case
 * Return: always return zero if success
 */
int main(void)
{
	int n = 97;
	int l = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (l <= 90)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
