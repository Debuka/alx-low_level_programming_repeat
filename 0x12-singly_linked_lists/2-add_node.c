#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node in the beginning of linked list
 * @head: Points to the head of the  list_t list.
 * @str: The new string.
 *
 * Return: Address of the new str, or a NULL at failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}

