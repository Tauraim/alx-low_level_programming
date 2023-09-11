#include <stdio.h>

/**
 * main - entry point the main fuction
 * Description: 'print alphabet in reverse all lower case'
 * Return: always return zero if successful
 */
int main(void)
{
	/*Use the ASCII key map to pic range of letters required*/
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
