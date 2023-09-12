#include <unistd.h>
/**
 * putchar - write character inputed
 * @c: Character print out
 * Return: return one if run success
 * On error, on return the -one is returned as for the error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
