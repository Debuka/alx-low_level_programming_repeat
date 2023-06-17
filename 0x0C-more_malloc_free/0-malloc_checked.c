#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: Bytes
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(34);

	return (ptr);
}
