#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description: 'print alphabet in uppercase'
 * Return: return zero if successful
 */
int main(void)
{
	int (ch);

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
