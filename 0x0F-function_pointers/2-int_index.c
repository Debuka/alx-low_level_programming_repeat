#include "function_pointers.h"

/**
 * int_index - Looks for an integer in an array.
 * @array: The array.
 * @size: Elements in the array.
 * @cmp: Pointer to the function.
 *
 * Return: Index of the first element for which the cmp function does not return 0.
 *         -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || cmp == NULL || size <= 0)
		return -1;

	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]) != 0)
			return q;
	}

	return -1;
}
