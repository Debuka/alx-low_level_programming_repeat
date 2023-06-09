#include "main.h"
/**
 * _strspn -  returns the index of the first of the first character found.
 * @s: input value.
 * @accept: input value.
 * Return:0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				g++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (g);
		}
		s++;
	}
	return (g);
}
