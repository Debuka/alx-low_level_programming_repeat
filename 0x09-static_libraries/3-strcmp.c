#include "main.h"
/**
 * _strcmp - funtion that compares different strings
 * @s1: the input
 * @s2: the input
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
	n++;
	}
	return (0);
}
