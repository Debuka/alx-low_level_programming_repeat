#include"main.h"
#include<stdlib.h>
/**
 * create_array - creates array of char data type
 * @c: character that will be innitialised
 * @size: the size of the array
 * Return: pointer to the array on success, NULL on error
 */
char *create_array(unsigned int size, char c)
{
	char *arsr;
	unsigned int j;

	arsr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (arsr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		c = arsr[j];
		return (arsr);
	}
}
