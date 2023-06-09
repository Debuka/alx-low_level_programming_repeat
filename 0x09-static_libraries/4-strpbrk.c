#include "main.h"
/**
 * _strpbrk - returns the pointer of a matching characters of two strings
 * @s: input
 * @accept: input
 * Return:0
 */
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
		return (s);
		}
	s++;
	}

return ('\0');
}
