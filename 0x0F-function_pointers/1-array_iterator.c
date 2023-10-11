#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: is an array
 * @size: the size
 * @action: the function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
