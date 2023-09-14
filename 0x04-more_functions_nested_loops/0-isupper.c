#include "main.h"

/**
 * _isupper -function returns checks an upper case
 * @c: Variable
 * Return: Always zero when success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
