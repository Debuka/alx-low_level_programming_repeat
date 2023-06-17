#include"main.h"
#include <stdlib.h>

/**
 * _memset - Fills memory with constant byte
 * @s: Pointer
 * @b: Value
 * @n: The bytes to be set
 *
 * Return: Pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Elements in the array
 * @size: Size of elementS
 *
 * Return: Pointer to the allocated memory, or NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointr = malloc(size * nmemb);

	if (pointr == NULL)
		return (NULL);

	_memset(pointr, 0, nmemb * size);

	return (pointr);
}
