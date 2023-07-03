#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Funtion for freeing a linked list
 * @head: The list_t list to be freed.
 *
 * Description: The function frees the memory of  linked list.
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}
