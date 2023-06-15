#include"main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the string (Success),
 *         or NULL if (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *peg;
	int q, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	q = k = 0;
	while (s1[q] != '\0')
		q++;

	while (s2[k] != '\0')
		k++;

	peg = malloc(sizeof(char) * (q + k + 1));

	if (peg == NULL)
		return (NULL);

	q = k = 0;
	while (s1[q] != '\0')
	{
		peg[q] = s1[q];
		q++;
	}

	while (s2[k] != '\0')
	{
		peg[q] = s2[k];
		q++;
		k++;
	}

	peg[q] = '\0';

	return (peg);
}
