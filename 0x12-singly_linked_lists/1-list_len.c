#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns elements of a linked list.
 * @h: Pointer of the list_t list.
 *
 * Return: The elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t ite = 0;

	while (h)
	{
		ite++;
		h = h->next;
	}

	return (ite);
}
