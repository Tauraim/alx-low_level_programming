#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes given the parameter on elements.
 * @array; parameter
 * @action: parameter
 * @size: size parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
