#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterate array
 * @array: The array to iterate
 * @size: Size of the array.
 * @action: Pointer to the function
 *
 * Description: This function iterates an array elements.
 *              and applies the provided action function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
		return;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
