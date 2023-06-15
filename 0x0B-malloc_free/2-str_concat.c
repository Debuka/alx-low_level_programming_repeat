#include<stdlib.h>
#include"main.h"
/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concated strings
 */
char *str_concat(char *s1, char *s2)

{
	char *result;

	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conct = malloc(sizeof(char) * (i + j + 1));
	if (conct == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++, j++;
	}
	resulst[i] = '\0';
	return (result);
}
