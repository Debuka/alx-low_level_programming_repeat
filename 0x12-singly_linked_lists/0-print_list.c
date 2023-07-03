#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function for Printing all the elements of a linked lists.
 * @h: The Pointer of the list_t list.
 *
 * Return: The number of printed niodes
 */
size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		q++;
	}

	return (q);
}
