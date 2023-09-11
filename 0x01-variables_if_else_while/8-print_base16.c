#include <stdio.h>

/**
 * main - entry point the main code function
 * Description; 'print all numbers that are of base sixteen in lowercase
 * Return: always return a zero if success
 */
int main(void)
{
	int n;
	int m;
	/*The for loop to print number in ref to ASCII table refernce*/

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	/*The for loop to print out the alphabet order*/

	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
