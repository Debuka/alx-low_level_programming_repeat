#include <stdlib.h>

/**
 * count_word - Counts words in a string
 * @s: the string to count
 *
 * Return: result of the count
 */
int count_word(char *s)
{
	int card, u, kit;

	card = 0;
	kit = 0;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] == ' ')
			card = 0;
		else if (card == 0)
		{
			card = 1;
			kit++;
		}
	}

	return (kit);
}

/**
 * strtow - Splits a string into two
 * @str: Input string
 *
 * Return: Pointer to an array of strings (Success), or NULL (Error)
 */
char **strtow(char *str)
{
	char **two_d, *tmp;
	int d, q = 0, keg = 0, dart, g = 0, memphis, grounded;

	while (*(str + keg))
		keg++;

	dart = count_word(str);

	if (dart == 0)
		return (NULL);

	two_d = (char **)malloc(sizeof(char *) * (dart + 1));

	if (two_d == NULL)
		return (NULL);

	for (d = 0; d <= keg; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (g)
			{
				grounded = d;
				tmp = (char *)malloc(sizeof(char) * (g + 1));

				if (tmp == NULL)
					return (NULL);

				while (memphis < grounded)
					*tmp++ = str[memphis++];

				*tmp = '\0';
				two_d[q] = tmp - g;
				q++;
				g = 0;
			}
		}
		else if (g++ == 0)
			memphis = d;
	}

	two_d[q] = NULL;

	return (two_d);
}
