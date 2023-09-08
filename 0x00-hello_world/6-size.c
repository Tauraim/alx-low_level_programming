#include <stdio.h>

/**
 * main - print number sizes of different data type
 * Return: zero if success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size a of char: %lu byte(s)\n", sizeof(a));
	printf("Size a of int: %lu byte(s)\n", sizeof(b));
	printf("Size a of long int: %lu byte(s)\n", sizeof(c));
	printf("Size a of long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", sizeof(e));
	return (0);
}
