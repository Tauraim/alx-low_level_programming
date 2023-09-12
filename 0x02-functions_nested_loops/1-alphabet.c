#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - entry point
 * Description: 'print alphabet in uppercase'
 * Return: return zero if successful
 */
int print_alphabet(void)
{
	int ch
	
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
		putchar ('\n');	
	}
	return (0);
}
