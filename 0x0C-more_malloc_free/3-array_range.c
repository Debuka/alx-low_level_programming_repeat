#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: The mini values stored
 * @max: The maxi values stored and number of elements
 *
 * Return: Pointer to the new array, or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *pt;
	int q, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	pt = malloc(sizeof(int) * sz);

	if (pt == NULL)
		return (NULL);

	for (q = 0; min <= max; q++)
		pt[q] = min++;

	return (pt);
}
