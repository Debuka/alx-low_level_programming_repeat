#include <stdlib.h>

/**
 * argstostr - Concatenates arguments into a string
 * @ac: arguments
 * @av: array of arguments
 *
 * Return: Pointer to the string(success), or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int d, h, w = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (h = 0; av[d][h]; h++)
			w++;
	}

	w += ac;

	string = malloc(sizeof(char) * (w + 1));
	if (string == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (h = 0; av[d][h]; h++)
		{
			string[w] = av[d][h];
			w++;
		}

		if (string[w] == '\0')
		{
			string[w++] = '\n';
		}
	}

	return (string);
}
