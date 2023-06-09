#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input values
 * @needle: an  input
 * Return:0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *k = needle;

		while (*n == *k && *k != '\0')
		{
			n++;
			k++;
		}

		if (*k == '\0')
			return (haystack);
	}

	return (0);
}
