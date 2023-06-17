#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: Maximum number of bytes of s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int q = 0;
	unsigned int j = 0;
	unsigned int ln1 = 0;
	unsigned int ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	else
		s = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!s)
		return (NULL);

	while (q < ln1)
	{
		s[q] = s1[q];
		q++;
	}

	while (n < ln2 && q < (ln1 + n))
		s[q++] = s2[j++];

	while (n >= ln2 && q < (ln1 + ln2))
		s[q++] = s2[j++];

	s[q] = '\0';

	return (s);
}
