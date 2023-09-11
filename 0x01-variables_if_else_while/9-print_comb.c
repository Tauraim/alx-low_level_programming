#include <stdio.h>

/**
 * main - entry point fuction core
 * Description: 'print all possible combinations of a single-digit numbers'
 * Return; always return zero if successful
 */
int main(void)
{
	int n;
	/*Using the ACSII table to map the range of requiired numbers*/
	
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	/*Removing a comma from the last digit to be printed*/
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
